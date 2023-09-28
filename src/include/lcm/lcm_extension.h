#include "postgres.h"
#include "fmgr.h"
#include "nodes/plannodes.h"

typedef struct LcmPlan
{
	// The original plan from postgres
	PlannedStmt *plan;

	// Plan info
	double lantency;

} LcmPlan;

double lcm_cost_estimate(PlannedStmt *plan);

extern int lcm_select_best_plan(PlannedStmt **candidate_plans, int nplans);