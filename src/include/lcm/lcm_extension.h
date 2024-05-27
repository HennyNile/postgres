#include "postgres.h"
#include "fmgr.h"
#include "nodes/plannodes.h"
#include "nodes/pathnodes.h"

#ifndef LCM_EXTENSION
#define LCM_EXTENSION

typedef struct RelatedTable
{
	List *tables;
} RelatedTable;

extern int lcm_select_best_plan(PlannedStmt **candidate_plans, int nplans);

extern void lcm_select_nfirst_best_plans(PlannedStmt **candidate_plans, int nplans, int nfirst, int* nfirst_plans_index);

extern int lcm_select_best_path(PlannerGlobal *glob, List *pathlist, int nplans);

extern void lcm_select_nfirst_best_paths(PlannerGlobal *glob, List *pathlist, int nplans, int nfirst, int* nfirst_plans_index, int* selected_plans_num);

extern void encode_path(PlannerGlobal *glob, Path* path, int depth);

#endif 