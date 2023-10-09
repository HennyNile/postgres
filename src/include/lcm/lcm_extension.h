#include "postgres.h"
#include "fmgr.h"
#include "nodes/plannodes.h"

#ifndef LCM_EXTENSION
#define LCM_EXTENSION

typedef struct RelatedTable
{
	List *tables;
} RelatedTable;

double lcm_cost_estimate(PlannedStmt *plan);

extern int lcm_select_best_plan(PlannedStmt **candidate_plans, int nplans);

#endif 