#include "postgres.h"
#include "miscadmin.h"
#include "optimizer/jobcardprovider.h"
#include <stdio.h>

double get_truth_cardinality(int total_relids);

/* benchmark mapping: 1: 6_join in imdb; 2: ssb_1; 3: JOB in IMDB; 4: self-designed benchmark for cost model;
 * 5: tpch-1; 6: tpch-5; 7: tpch-10; 8: tpch-50; 9: tpch-100; 10: tpch-1-bench-1; 11: job-bench-2
 */
double
get_truth_cardinality(int total_relids)
{
    FILE * fp;
    switch (benchmark) {
        case 3: // JOB in IMDB
            fp = fopen("/tmp/pg_log.txt", "a+");
            fprintf(fp, "Use JOB cardinality provider.\n");
            fclose(fp);
            return get_job_truth_cardinality(total_relids);
            break;
        default:
            return 3200000000;
    }
}
