// LCM is a learned cost model which could estimate the cost of a query plan.

#include "lcm/lcm_extension.h"
#include "miscadmin.h"

double lcm_cost_estimate(PlannedStmt *plan)
{
	// yyjson_mut_doc *json_doc = yyjson_mut_doc_new(NULL);
	// yyjson_mut_val *root = yyjson_mut_obj(json_doc);
	// yyjson_mut_doc_set_root(json_doc, root);
	// yyjson_mut_val *plan_json = plan_to_json(plan, plan->planTree, json_doc);
	// yyjson_mut_obj_put(root, yyjson_mut_strcpy(json_doc, "Plan"), plan_json);
	// p->latency = predict_plan_score(json_doc, root, early_stop);
	// yyjson_mut_doc_free(json_doc);
	// return p;
	return 0;
}

int lcm_select_best_plan(PlannedStmt **candidate_plans, int nplans)
{
	int best_plan_index = 0;
	double least_latency = 1000000000;
	for (int i = 0; i < nplans; i++)
	{
		PlannedStmt *plan = candidate_plans[i];
		double estimated_latency = lcm_cost_estimate(plan);
		if (estimated_latency < least_latency)
		{
			least_latency = estimated_latency;
			best_plan_index = i;
		}
	}
	// return best_plan_index;
	return 0;  // TODO: return the best plan index
}
