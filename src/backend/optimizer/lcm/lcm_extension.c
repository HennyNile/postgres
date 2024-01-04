// LCM is a learned cost model which could estimate the cost of a query plan.

#include "lcm/lcm_extension.h"
#include "miscadmin.h"
#include "lcm/utils.h"
#include "lcm/yyjson.h"
#include <sys/time.h>

// lcm sever configuration
int lcm_server_port = 14567;
char *lcm_server_host = "localhost";

static void invoke_lcm_select_nfirst_plan(char* json_plans_str, int nfirst, int* nfirst_plans_index);

static void print_blank(int depth, FILE* fp)
{
	for (int i = 0; i < depth; i++)
		fprintf(fp, "  ");
}

int lcm_select_best_plan(PlannedStmt **candidate_plans, int nplans)
{											
	// invoke function to send json_plans_str to lcm server
	int *selected_plan_idxes = (int*)malloc(1 * sizeof(int));
	lcm_select_nfirst_best_plans(candidate_plans, nplans, 1, selected_plan_idxes);

	int selected_plan_index = selected_plan_idxes[0];

	// write the selected result to the log file
	FILE *fp;
	fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
	fprintf(fp, "\nThe index of selected plan is %d\n", selected_plan_index);
	fclose(fp);

	return selected_plan_index;
}

int lcm_select_best_path(PlannerGlobal *glob, List *pathlist, int nplans)
{											
	// invoke function to send json_plans_str to lcm server
	int *selected_plan_idxes = (int*)malloc(1 * sizeof(int));
	lcm_select_nfirst_best_paths(glob, pathlist, nplans, 1, selected_plan_idxes);

	int selected_plan_index = selected_plan_idxes[0];

	// write the selected result to the log file
	FILE *fp;
	fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
	fprintf(fp, "\nThe index of selected plan is %d\n", selected_plan_index);
	fclose(fp);

	return selected_plan_index;
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

void lcm_select_nfirst_best_paths(PlannerGlobal *glob, List *pathlist, int nplans, int nfirst, int* nfirst_plans_index)
{
	char *json_plans_str = "";
	// generate json_plan_str for each plan, then concatenate them
	
	ListCell *p1;
	int idx = 0;
	FILE* fp;
	struct timeval tv;
	gettimeofday(&tv, NULL);
	double start_time = tv.tv_sec + (tv.tv_usec / 1e6);
	foreach (p1, pathlist)
	{
		Path * current_path = (Path *) lfirst(p1);
		yyjson_mut_doc *json_doc = yyjson_mut_doc_new(NULL);
		yyjson_mut_val *root = yyjson_mut_obj(json_doc);
		yyjson_mut_doc_set_root(json_doc, root);
		Assert(path != NULL);
		Assert(json_doc != NULL);
		char *json = path_to_str(glob, current_path);

		// set plan 
		json = concat_str("{\"Plan\": {", json);
		json = concat_str(json, "}");

		// set msg type flag
		json = concat_str(json, ", \"");
		json = concat_str(json, MSG_TYPE);
		json = concat_str(json, "\": \"");
		json = concat_str(json, MSG_SELECT_NFIRST);
		json = concat_str(json, "\"");

		// set nfirst flag
		json = concat_str(json, ", \"");
		json = concat_str(json, MSG_SELECT_PLAN_NUM);
		json = concat_str(json, "\": ");
		char *nfirst_str = (char *) malloc(100);
		sprintf(nfirst_str, "%d", nfirst);
		json = concat_str(json, nfirst_str);
		json = concat_str(json, "}");

		// yyjson_mut_val *path_json = path_to_json(current_path, json_doc);
		// yyjson_mut_obj_put(root, yyjson_mut_strcpy(json_doc, "Plan"), path_json);
		// yyjson_mut_obj_put(root, yyjson_mut_strcpy(json_doc, MSG_TYPE), yyjson_mut_strcpy(json_doc, MSG_SELECT_NFIRST));
		// yyjson_mut_obj_put(root, yyjson_mut_strcpy(json_doc, MSG_SELECT_PLAN_NUM), yyjson_mut_int(json_doc, nfirst));
		// // generate string of json object
		// char *json = yyjson_mut_write(json_doc, YYJSON_WRITE_PRETTY, NULL);
		// // concatenate plans
		json_plans_str = concat_str(json_plans_str, json);
		if(idx != pathlist->length-1) 
			json_plans_str = concat_str(json_plans_str, MSG_SPLIT_FLAG);
		yyjson_mut_doc_free(json_doc);
		idx++;
	}
	gettimeofday(&tv, NULL);
	double end_time = tv.tv_sec + (tv.tv_usec / 1e6);
	fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
	fprintf(fp, "[INFO] lcm_select_nfirst_best_paths: %d plans, time = %f\n", nplans, end_time-start_time);
	fclose(fp);
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
		fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
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
		fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
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

void encode_path(PlannerGlobal *glob, Path* path, int depth)
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
			fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
			print_blank(depth, fp);
			fprintf(fp, "%s, rows=%f, width=%d\n", "Scan", path->rows, path->pathtarget->width);
			fclose(fp);
			break;
		case T_HashJoin:
			fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
			print_blank(depth, fp);
			fprintf(fp, "%s, rows=%f, width=%d\n", "HashJoin", ((HashPath* )path)->jpath.path.rows,((HashPath* )path)->jpath.path.pathtarget->width);
			fclose(fp);
			encode_path(glob, ((HashPath* )path)->jpath.outerjoinpath, depth+1);
			encode_path(glob, ((HashPath* )path)->jpath.innerjoinpath, depth+1);
			break;
		case T_MergeJoin:
			fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
			print_blank(depth, fp);
			fprintf(fp, "%s, rows=%f, width=%d\n", "MergeJoin", ((MergePath* )path)->jpath.path.rows,((MergePath* )path)->jpath.path.pathtarget->width);
			fclose(fp);
			encode_path(glob, ((MergePath* )path)->jpath.outerjoinpath, depth+1);
			encode_path(glob, ((MergePath* )path)->jpath.innerjoinpath, depth+1);
			break;
		case T_NestLoop:
			fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
			print_blank(depth, fp);
			fprintf(fp, "%s, rows=%f, width=%d\n", "NestedLoopJoin", ((NestPath* )path)->jpath.path.rows,((NestPath* )path)->jpath.path.pathtarget->width);
			fclose(fp);
			encode_path(glob, ((NestPath* )path)->jpath.outerjoinpath, depth+1);
			encode_path(glob, ((NestPath* )path)->jpath.innerjoinpath, depth+1);
			break;
		case T_Material:
			fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
			print_blank(depth, fp);
			fprintf(fp, "%s, rows=%f, width=%d\n", "Materialize", path->rows, path->pathtarget->width);
			fclose(fp);
			encode_path(glob, ((MaterialPath* )path)->subpath, depth+1);
			break;
		case T_Memoize:
			fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
			print_blank(depth, fp);
			fprintf(fp, "%s, rows=%f, width=%d\n", "Memoize", path->rows, path->pathtarget->width);
			fclose(fp);
			encode_path(glob, ((MemoizePath* )path)->subpath, depth+1);
			break;
		case T_Gather:
			fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
			print_blank(depth, fp);
			fprintf(fp, "%s, rows=%f, width=%d\n", "Gather", ((GatherPath *)path)->path.rows, ((GatherPath *)path)->path.pathtarget->width);
			fclose(fp);
			encode_path(glob, ((GatherPath* )path)->subpath, depth+1);
			break;
		case T_Sort:
			fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
			print_blank(depth, fp);
			fprintf(fp, "%s, rows=%f, width=%d\n", "Sort", path->rows, path->pathtarget->width);
			fclose(fp);
			encode_path(glob, ((SortPath* )path)->subpath, depth+1);
			break;
		case T_Group:
			fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
			print_blank(depth, fp);
			fprintf(fp, "%s, rows=%f, width=%d\n", "Group", path->rows, path->pathtarget->width);
			fclose(fp);
			encode_path(glob, ((GroupPath* )path)->subpath, depth+1);
			break;
		case T_Agg:
			if (IsA(path, GroupingSetsPath))
			{
				fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
				print_blank(depth, fp);
				fprintf(fp, "%s, rows=%f, width=%d\n", "GroupingSet", ((GroupingSetsPath *)path)->path.rows, ((GroupingSetsPath *)path)->path.pathtarget->width);
				fclose(fp);
				encode_path(glob, ((GroupingSetsPath* )path)->subpath, depth+1);
			}
			else
			{
				Assert(IsA(path, AggPath));
				fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
				print_blank(depth, fp);
				fprintf(fp, "%s, rows=%f, width=%d\n", "Aggregate", path->rows, path->pathtarget->width);
				fclose(fp);
				encode_path(glob, ((AggPath* )path)->subpath, depth+1);
			}
			break;
		case T_GatherMerge:
			fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
			print_blank(depth, fp);
			fprintf(fp, "%s, rows=%f, width=%d\n", "GatherMerge", ((GatherMergePath *)path)->path.rows, ((GatherMergePath *)path)->path.pathtarget->width);
			fclose(fp);
			encode_path(glob, ((GatherMergePath* )path)->subpath, depth+1);
			break;
		default:
			elog(ERROR, "unrecognized node type: %d",
				 (int) path->pathtype);
			break;
	}

	if(depth == 0)
	{
		fp = fopen("/home/qilong/workspace/qilong/LBO/lql_log", "a+");
		fprintf(fp, "%s", path_to_str(glob, path));
		fclose(fp);
	}
	
}
