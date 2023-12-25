// LCM is a learned cost model which could estimate the cost of a query plan.

#include "lcm/lcm_extension.h"
#include "miscadmin.h"
#include "lcm/utils.h"
#include "lcm/yyjson.h"

// lcm sever configuration
int lcm_server_port = 14567;
char *lcm_server_host = "localhost";

static int invoke_lcm_select_plan(char* json_plans_str);
static void invoke_lcm_select_nfirst_plan(char* json_plans_str, int nfirst, int* nfirst_plans_index);
static void encode_path(Path* path, char *header_blank);

int lcm_select_best_plan(PlannedStmt **candidate_plans, int nplans)
{											
	// invoke function to send json_plans_str to lcm server
	int *selected_plan_idxes = (int*)malloc(1 * sizeof(int));
	lcm_select_nfirst_best_plans(candidate_plans, nplans, 1, selected_plan_idxes);

	int selected_plan_index = selected_plan_idxes[0];

	// write the selected result to the log file
	FILE *fp;
	fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
	fprintf(fp, "\nThe index of selected plan is %d\n", selected_plan_index);
	fclose(fp);

	return selected_plan_index;
}

static int invoke_lcm_select_plan(char* json_plans_str)
{
	int conn_fd = connect_to_server(lcm_server_host, lcm_server_port);
	if (conn_fd == -1)
	{
		elog(ERROR, "Unable to connect to LCM server.");
	}

	char *msg = send_and_receive_msg(conn_fd, json_plans_str);
	yyjson_doc *msg_doc = parse_json_str(msg);
	pfree(msg);

	yyjson_val *msg_json_obj = yyjson_doc_get_root(msg_doc);
	yyjson_val *msg_type = yyjson_obj_get(msg_json_obj, MSG_TYPE);
	char *msg_char = yyjson_get_str(msg_type);

	if (strcmp(msg_char, MSG_ERROR) == 0)
	{
		yyjson_doc_free(msg_doc);
		close(conn_fd);
		elog(ERROR, "fail to get score from LCM");
	}
	else
	{
		int selected_plan_idx = yyjson_get_int(yyjson_obj_get(msg_json_obj, MSG_PLAN_IDX));
		yyjson_doc_free(msg_doc);
		close(conn_fd);
		return selected_plan_idx;
	}
}

void lcm_select_nfirst_best_plans(PlannedStmt **candidate_plans, int nplans, int nfirst, int* nfirst_plans_index)
{
	char *json_plans_str = "";
	// generate json_plan_str for each plan, then concatenate them
	for (int i = 0; i < nplans; i++)
	{
		// initialize json object
		PlannedStmt *plan = candidate_plans[i];													
		yyjson_mut_doc *json_doc = yyjson_mut_doc_new(NULL);
		yyjson_mut_val *root = yyjson_mut_obj(json_doc);
		yyjson_mut_doc_set_root(json_doc, root);
		FILE *fp;
		Assert(plan != NULL);
		Assert(plan->planTree != NULL);
		Assert(json_doc != NULL);
		yyjson_mut_val *plan_json = plan_to_json(plan, plan->planTree, json_doc);
		// put plan into json object
		yyjson_mut_obj_put(root, yyjson_mut_strcpy(json_doc, "Plan"), plan_json);
		// put expected action (MSG_SELECT_NFIRST) into json object
		yyjson_mut_obj_put(root, yyjson_mut_strcpy(json_doc, MSG_TYPE), yyjson_mut_strcpy(json_doc, MSG_SELECT_NFIRST));
		yyjson_mut_obj_put(root, yyjson_mut_strcpy(json_doc, MSG_SELECT_PLAN_NUM), yyjson_mut_int(json_doc, nfirst));
		// generate string of json object
		char *json = yyjson_mut_write(json_doc, YYJSON_WRITE_PRETTY, NULL);
		// concatenate plans
		json_plans_str = concat_str(json_plans_str, json);
		if(i!=nplans-1) 
			json_plans_str = concat_str(json_plans_str, MSG_SPLIT_FLAG);
		yyjson_mut_doc_free(json_doc);
	}

	json_plans_str = concat_str(json_plans_str, MSG_END_FLAG);											

	// invoke function to send json_plans_str to lcm server
	invoke_lcm_select_nfirst_plan(json_plans_str, nfirst, nfirst_plans_index);
}

static void invoke_lcm_select_nfirst_plan(char* json_plans_str, int nfirst, int* nfirst_plans_index)
{
	int conn_fd = connect_to_server(lcm_server_host, lcm_server_port);
	if (conn_fd == -1)
	{
		elog(ERROR, "Unable to connect to LCM server.");
	}

	char *msg = send_and_receive_msg(conn_fd, json_plans_str);
	yyjson_doc *msg_doc = parse_json_str(msg);
	pfree(msg);

	yyjson_val *msg_json_obj = yyjson_doc_get_root(msg_doc);
	yyjson_val *msg_type = yyjson_obj_get(msg_json_obj, MSG_TYPE);
	char *msg_char = yyjson_get_str(msg_type);

	if (strcmp(msg_char, MSG_ERROR) == 0)
	{
		yyjson_doc_free(msg_doc);
		close(conn_fd);
		elog(ERROR, "fail to get score from LCM");
		FILE *fp;
		fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
		fprintf(fp, "[INFO] invoke_lcm_select_nfirst_plan: get error msg\n");
		fclose(fp);
	}
	else
	{
		char* selected_plan_idxes_str = yyjson_get_str(yyjson_obj_get(msg_json_obj, MSG_NFIRST_PLAN_IDX));
		// split string to get selected plan idxes
		const char delimiter = ',';
		char *selected_plan_idx = strtok(selected_plan_idxes_str, &delimiter);
		FILE *fp;
		fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
		fprintf(fp, "[INFO] invoke_lcm_select_nfirst_plan: selected plan idxes: %s\n", selected_plan_idxes_str);
		int idx = 0;
		while (selected_plan_idx != NULL) {
			nfirst_plans_index[idx++] = atoi(selected_plan_idx);
			fprintf(fp, "%d, ", atoi(selected_plan_idx));
			selected_plan_idx = strtok(NULL, &delimiter);
		}
		fprintf(fp, "\n");
		fclose(fp);

		yyjson_doc_free(msg_doc);
		close(conn_fd);
	}
}

static void encode_path(Path* path, char *header_blank)
{
	FILE* fp;
	switch (path->pathtype)
	{
		case T_SeqScan:
		case T_SampleScan:
		case T_IndexScan:
		case T_IndexOnlyScan:
		case T_BitmapHeapScan:
		case T_TidScan:
		case T_TidRangeScan:
		case T_SubqueryScan:
		case T_FunctionScan:
		case T_TableFuncScan:
		case T_ValuesScan:
		case T_CteScan:
		case T_WorkTableScan:
		case T_NamedTuplestoreScan:
		case T_ForeignScan:
		case T_CustomScan:
			fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
			fprintf(fp, "%s%s, rows=%f, width=%d\n", header_blank, "Scan", path->rows, path->pathtarget->width);
			fclose(fp);
			break;
		case T_HashJoin:
			fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
			fprintf(fp, "%s%s, rows=%f, width=%d\n", header_blank, "HashJoin", ((HashPath* )path)->jpath.path.rows,((HashPath* )path)->jpath.path.pathtarget->width);
			fclose(fp);
			encode_path(((HashPath* )path)->jpath.outerjoinpath, *header_blank+"  ");
			encode_path(((HashPath* )path)->jpath.innerjoinpath, *header_blank+"  ");
			break;
		case T_MergeJoin:
			fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
			fprintf(fp, "%s%s, rows=%f, width=%d\n", header_blank, "MergeJoin", ((MergePath* )path)->jpath.path.rows,((MergePath* )path)->jpath.path.pathtarget->width);
			fclose(fp);
			encode_path(((MergePath* )path)->jpath.outerjoinpath, *header_blank+"  ");
			encode_path(((MergePath* )path)->jpath.innerjoinpath, *header_blank+"  ");
			break;
		case T_NestLoop:
			fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
			fprintf(fp, "%s%s, rows=%f, width=%d\n", header_blank, "NestedLoopJoin", ((NestPath* )path)->jpath.path.rows,((NestPath* )path)->jpath.path.pathtarget->width);
			fclose(fp);
			encode_path(((NestPath* )path)->jpath.outerjoinpath, *header_blank+"  ");
			encode_path(((NestPath* )path)->jpath.innerjoinpath, *header_blank+"  ");
			break;
		case T_Material:
			fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
			fprintf(fp, "%s%s, rows=%f, width=%d\n", header_blank, "Materialize", path->rows, path->pathtarget->width);
			fclose(fp);
			encode_path(((MaterialPath* )path)->subpath, *header_blank+"  ");
			break;
		case T_Memoize:
			fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
			fprintf(fp, "%s%s, rows=%f, width=%d\n", header_blank, "Memoize", path->rows, path->pathtarget->width);
			fclose(fp);
			encode_path(((MemoizePath* )path)->subpath, *header_blank+"  ");
			break;
		case T_Gather:
			fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
			fprintf(fp, "%s%s, rows=%f, width=%d\n", header_blank, "Gather", ((GatherPath *)path)->path.rows, ((GatherPath *)path)->path.pathtarget->width);
			fclose(fp);
			encode_path(((GatherPath* )path)->subpath, *header_blank+"  ");
			break;
		case T_Sort:
			fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
			fprintf(fp, "%s%s, rows=%f, width=%d\n", header_blank, "Sort", path->rows, path->pathtarget->width);
			fclose(fp);
			encode_path(((SortPath* )path)->subpath, *header_blank+"  ");
			break;
		case T_Group:
			fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
			fprintf(fp, "%s%s, rows=%f, width=%d\n", header_blank, "Group", path->rows, path->pathtarget->width);
			fclose(fp);
			encode_path(((GroupPath* )path)->subpath, *header_blank+"  ");
			break;
		case T_Agg:
			if (IsA(path, GroupingSetsPath))
			{
				fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
				fprintf(fp, "%s%s, rows=%f, width=%d\n", header_blank, "GroupingSet", ((GroupingSetsPath *)path)->path.rows, ((GroupingSetsPath *)path)->path.pathtarget->width);
				fclose(fp);
				encode_path(((GroupingSetsPath* )path)->subpath, *header_blank+"  ");
			}
			else
			{
				Assert(IsA(path, AggPath));
				fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
				fprintf(fp, "%s%s, rows=%f, width=%d\n", header_blank, "Aggregate", path->rows, path->pathtarget->width);
				fclose(fp);
				encode_path(((AggPath* )path)->subpath, *header_blank+"  ");
			}
			break;
		case T_GatherMerge:
			fp = fopen("/home/dbgroup/workspace/liqilong/LBO/lql_log", "a+");
			fprintf(fp, "%s%s, rows=%f, width=%d\n", header_blank, "GatherMerge", ((GatherMergePath *)path)->path.rows, ((GatherMergePath *)path)->path.pathtarget->width);
			fclose(fp);
			encode_path(((GatherMergePath* )path)->subpath, *header_blank+"  ");
			break;
		default:
			elog(ERROR, "unrecognized node type: %d",
				 (int) path->pathtype);
			break;
	}
}
