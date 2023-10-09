// LCM is a learned cost model which could estimate the cost of a query plan.

#include "lcm/lcm_extension.h"
#include "miscadmin.h"
#include "lcm/utils.h"
#include "lcm/yyjson.h"

// lcm sever configuration
int lcm_server_port = 14567;
char *lcm_server_host = "localhost";

static double predict_plan_score(yyjson_mut_doc *json_doc, yyjson_mut_val *json_root);

double lcm_cost_estimate(PlannedStmt *plan)
{
	double latency = 0.0;
	yyjson_mut_doc *json_doc = yyjson_mut_doc_new(NULL);
	yyjson_mut_val *root = yyjson_mut_obj(json_doc);
	yyjson_mut_doc_set_root(json_doc, root);
	yyjson_mut_val *plan_json = plan_to_json(plan, plan->planTree, json_doc);
	yyjson_mut_obj_put(root, yyjson_mut_strcpy(json_doc, "Plan"), plan_json);
	latency = predict_plan_score(json_doc, root);
	yyjson_mut_doc_free(json_doc);
	return latency;
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
		// break;
	}
	// write the estimated latency to the log file
	FILE *fp;
	fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
	fprintf(fp, "\nThe index of best plan is %d, bestEstimated latency is %f.\n", best_plan_index, least_latency);
	fclose(fp);

	return best_plan_index;
	// return 0; // TODO: return the best plan index
}

static double predict_plan_score(yyjson_mut_doc *json_doc, yyjson_mut_val *json_root)
{
	yyjson_mut_obj_put(json_root, yyjson_mut_strcpy(json_doc, MSG_TYPE), yyjson_mut_strcpy(json_doc, MSG_PREDICT));
	char *json = yyjson_mut_write(json_doc, YYJSON_WRITE_PRETTY, NULL);
	json = concat_str(json, MSG_END_FLAG);

	int conn_fd = connect_to_server(lcm_server_host, lcm_server_port);
	if (conn_fd == -1)
	{
		elog(ERROR, "Unable to connect to Lero server.");
	}

	char *msg = send_and_receive_msg(conn_fd, json);
	yyjson_doc *msg_doc = parse_json_str(msg);
	pfree(msg);

	yyjson_val *msg_json_obj = yyjson_doc_get_root(msg_doc);
	yyjson_val *msg_type = yyjson_obj_get(msg_json_obj, MSG_TYPE);
	char *msg_char = yyjson_get_str(msg_type);

	if (strcmp(msg_char, MSG_ERROR) == 0)
	{
		yyjson_doc_free(msg_doc);
		close(conn_fd);
		elog(ERROR, "fail to get score from Lero");
	}
	else
	{
		double score = yyjson_get_real(yyjson_obj_get(msg_json_obj, MSG_SCORE));
		yyjson_doc_free(msg_doc);
		close(conn_fd);
		return score;
	}
}
