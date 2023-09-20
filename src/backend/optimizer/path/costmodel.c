//
// Created by 2 on 2023/4/4.
//

#include "postgres.h"

#include <limits.h>
#include <math.h>

#include "access/amapi.h"
#include "access/htup_details.h"
#include "access/tsmapi.h"
#include "executor/executor.h"
#include "executor/nodeAgg.h"
#include "executor/nodeHash.h"
#include "executor/nodeMemoize.h"
#include "miscadmin.h"
#include "nodes/makefuncs.h"
#include "nodes/nodeFuncs.h"
#include "optimizer/clauses.h"
#include "optimizer/cost.h"
#include "optimizer/optimizer.h"
#include "optimizer/pathnode.h"
#include "optimizer/paths.h"
#include "optimizer/placeholder.h"
#include "optimizer/plancat.h"
#include "optimizer/planmain.h"
#include "optimizer/restrictinfo.h"
#include "optimizer/cardprovider.h"
#include "optimizer/costmodel.h"
#include "parser/parsetree.h"
#include "utils/lsyscache.h"
#include "utils/selfuncs.h"
#include "utils/spccache.h"
#include "utils/tuplesort.h"

// parameter that discounts the cost of a table scan in comparison with joins.
double scan_cost_discount = 0.2;

/*
 * cost_seqscan
 *	  Determines and returns the cost of scanning a relation sequentially.
 *
 * 'baserel' is the relation to be scanned
 * 'param_info' is the ParamPathInfo if this is a parameterized path, else NULL
 */
void
simple_cost_model_cost_seqscan(Path *path, PlannerInfo *root, RelOptInfo *baserel, ParamPathInfo *param_info,
                               double parallel_divisor)
{
    Cost		startup_cost = 0;
    Cost		cpu_run_cost;

    /* Should only be applied to base relations */
    Assert(baserel->relid > 0);
    Assert(baserel->rtekind == RTE_RELATION);

    /* Mark the path with the correct row estimate */
    if (param_info)
        path->rows = param_info->ppi_rows;
    else
        path->rows = baserel->rows;

    if (!enable_seqscan)
        startup_cost += disable_cost;

    // set startup cost for each operator as 0
    startup_cost += 0;
    // we only account the row number as the cost
    cpu_run_cost = scan_cost_discount * baserel->tuples;

    // not sure what this for.
    // startup_cost += path->pathtarget->cost.startup;

    /* Adjust costing for parallelism, if used. */
    if(parallel_divisor > 0)
    {
        /* The CPU cost is divided among all the workers. */
        cpu_run_cost /= parallel_divisor;

        /*
         * It may be possible to amortize some of the I/O cost, but probably
         * not very much, because most operating systems already do aggressive
         * prefetching.  For now, we assume that the disk run cost can't be
         * amortized at all.
         */

        /*
         * In the case of a parallel plan, the row count needs to represent
         * the number of tuples processed per worker.
         */
        path->rows = clamp_row_est(path->rows / parallel_divisor);
    }

    path->startup_cost = startup_cost;
    path->total_cost = startup_cost + cpu_run_cost;
}

/*
 * cost_index
 *	  Determines and returns the cost of scanning a relation using an index.
 *
 * 'path' describes the indexscan under consideration, and is complete
 *		except for the fields to be set by this routine
 * 'loop_count' is the number of repetitions of the indexscan to factor into
 *		estimates of caching behavior
 *
 * In addition to rows, startup_cost and total_cost, cost_index() sets the
 * path's indextotalcost and indexselectivity fields.  These values will be
 * needed if the IndexPath is used in a BitmapIndexScan.
 *
 * NOTE: path->indexquals must contain only clauses usable as index
 * restrictions.  Any additional quals evaluated as qpquals may reduce the
 * number of returned tuples, but they won't reduce the number of tuples
 * we have to fetch from the table, so they don't reduce the scan cost.
 */
void
simple_cost_model_cost_index(IndexPath *path, PlannerInfo *root, double loop_count,
           bool partial_path, double parallel_divisor)
{
    IndexOptInfo *index = path->indexinfo;
    RelOptInfo *baserel = index->rel;
    bool		indexonly = (path->path.pathtype == T_IndexOnlyScan);
    Cost		startup_cost = 0;
    Cost		run_cost = 0;
    Cost		cpu_run_cost = 0;

    /* Should only be applied to base relations */
    Assert(IsA(baserel, RelOptInfo) &&
    IsA(index, IndexOptInfo));
    Assert(baserel->relid > 0);
    Assert(baserel->rtekind == RTE_RELATION);

    /*
     * Mark the path with the correct row estimate, and identify which quals
     * will need to be enforced as qpquals.  We need not check any quals that
     * are implied by the index's predicate, so we can use indrestrictinfo not
     * baserestrictinfo as the list of relevant restriction clauses for the
     * rel.
     */
    if (path->path.param_info)
    {
        path->path.rows = path->path.param_info->ppi_rows;
    }
    else
    {
        path->path.rows = baserel->rows;
    }

    if (!enable_indexscan)
        startup_cost += disable_cost;

    FILE* fp = fopen("/tmp/pg_log.txt", "a+");
    fprintf(fp, "baserel->tuples=%f, baserel->rows=%f\n", baserel->tuples, path->path.rows);
    fclose(fp);

    if(indexonly) // index_only scan
    {
        run_cost = scan_cost_discount * ceil(log(baserel->tuples)) / log(664) * path->path.rows;
    }
    else // index_scan
    {
        run_cost = scan_cost_discount * ceil((log(baserel->tuples)) / log(664) + 1) * path->path.rows;
    }

    /* Adjust costing for parallelism, if used. */
    if(parallel_divisor > 0)
    {
        run_cost /= parallel_divisor;
        path->path.rows = clamp_row_est(path->path.rows / parallel_divisor);
    }

    path->path.startup_cost = startup_cost;
    path->path.total_cost = startup_cost + run_cost;
}



