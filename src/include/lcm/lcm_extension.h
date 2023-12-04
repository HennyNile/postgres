#include "postgres.h"
#include "fmgr.h"
#include "nodes/plannodes.h"

#ifndef LCM_EXTENSION
#define LCM_EXTENSION

typedef struct RelatedTable
{
	List *tables;
} RelatedTable;

extern int lcm_select_best_plan(PlannedStmt **candidate_plans, int nplans);

extern void lcm_select_nfirst_best_plans(PlannedStmt **candidate_plans, int nplans, int nfirst, int* nfirst_plans_index);

#endif 