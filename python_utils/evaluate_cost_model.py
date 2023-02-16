# this file is to run experiments to evlaute postgres cost model
import time

from utils import run_cat_cost_running_time, plot_cost_running_time, parse_query_text, \
    generate_sub_queries_rcount, execute_sub_queries_rcount, generate_c_code

tables_dict = {"cast_info": {"row_num": 36231584, "indexed_column": "id", "unindexed_column": "nr_order"},
               "movie_info": {"row_num": 14803594, "indexed_column": "id", "unindexed_column": "info"},
               "movie_keyword": {"row_num": 4523930, "indexed_column": "id", "unindexed_column": ""},
               "name": {"row_num": 4167151, "indexed_column": "id", "unindexed_column": "name"},
               "char_name": {"row_num": 3140292, "indexed_column": "id", "unindexed_column": "name"},
               "person_info": {"row_num": 2966063, "indexed_column": "id", "unindexed_column": "info"},
               "movie_companies": {"row_num": 2609129, "indexed_column": "id", "unindexed_column": "note"},
               "title": {"row_num": 2528527, "indexed_column": "id", "unindexed_column": "title"},
               "movie_info_idx": {"row_num": 1380035, "indexed_column": "id", "unindexed_column": "info"},
               "aka_name": {"row_num": 901343, "indexed_column": "id", "unindexed_column": "name"},
               "aka_title": {"row_num": 361472, "indexed_column": "id", "unindexed_column": "movie_id"},
               "company_name": {"row_num": 234997, "indexed_column": "id", "unindexed_column": "name"},
               "complete_cast": {"row_num": 135086, "indexed_column": "id", "unindexed_column": "subject_id"},
               "keyword": {"row_num": 134170, "indexed_column": "id", "unindexed_column": "keyword"},
               "movie_link": {"row_num": 29997, "indexed_column": "id", "unindexed_column": ""},
               "info_type": {"row_num": 113, "indexed_column": "id", "unindexed_column": "info"},
               "link_type": {"row_num": 18, "indexed_column": "id", "unindexed_column": "link"},
               "role_type": {"row_num": 12, "indexed_column": "id", "unindexed_column": "role"},
               "kind_type": {"row_num": 7, "indexed_column": "id", "unindexed_column": "kind"},
               "comp_cast_type": {"row_num": 4, "indexed_column": "id", "unindexed_column": "kind"},
               "company_type": {"row_num": 4, "indexed_column": "id", "unindexed_column": "kind"}}

table_name_list = ['cast_info', 'movie_info', 'movie_keyword', 'name', 'char_name', 'person_info', 'movie_companies',
                   'title', 'movie_info_idx', 'aka_name', 'aka_title', 'company_name', 'complete_cast', 'keyword',
                   'movie_link', 'info_type', 'link_type', 'role_type', 'kind_type', 'comp_cast_type', 'company_type']

table_key_dict = {'cast_info': 'ci', 'movie_info': 'mi', 'movie_keyword': 'mk', 'name': 'n', 'char_name': 'cname',
                  'person_info': 'pi', 'movie_companies': 'mc', 'title': 't', 'movie_info_idx': 'mi_idx',
                  'aka_name': 'an', 'aka_title': 'at', 'company_name': 'cn', 'complete_cast': 'cc', 'keyword': 'k',
                  'movie_link': 'ml', 'info_type': 'it', 'link_type': 'lt', 'role_type': 'rt', 'kind_type': 'kt',
                  'comp_cast_type': 'cct', 'company_type': 'ct'}

SeqScan_query_start_order = 1
IndexOnlyScan_query_start_order = 20
IndexScan_query_start_order = 35


def prepare_queries4truthcard_scan():
    t = time.time()
    # prepare initial queries
    queries = []
    # SeqScan, 19 queries
    for table_name in table_name_list:
        table_dict = tables_dict.get(table_name)
        if table_dict.get('unindexed_column') == '':
            continue
        query_text = 'SELECT COUNT(*) FROM {}'.format(table_name + ' ' + table_key_dict.get(table_name))
        queries.append(query_text)
    # IndexOnlyScan, 15 queries
    for table_name in table_name_list:
        if table_name == 'info_type':
            break
        table_dict = tables_dict.get(table_name)
        query_text = 'SELECT COUNT(*) FROM {} WHERE {}.id < {}'.format(table_name + ' ' + table_key_dict.get(table_name)
                                                                       , table_key_dict.get(table_name),
                                                                       int(table_dict.get('row_num') / 2))
        queries.append(query_text)
    # IndexScan, 15 queries
    for table_name in table_name_list:
        if table_name == 'info_type':
            break
        table_dict = tables_dict.get(table_name)
        query_text = 'SELECT COUNT(*) FROM {} WHERE {}.id < {}'.format(table_name + ' ' + table_key_dict.get(table_name)
                                                                       , table_key_dict.get(table_name),
                                                                       int(table_dict.get('row_num') / 1000))
        queries.append(query_text)
    return queries


def generate_truthcard4queries_scan():
    queries = prepare_queries4truthcard_scan()
    # generate parsed query for each initial queries
    parsed_queries = []
    for i in range(len(queries)):
        query = queries[i]
        query_path = str(i + 1)
        parsed_query = parse_query_text(query_path, query)
        parsed_queries.append(parsed_query)
    print(str.format('Initialize queries consume {}s.', time.time() - t))
    t = time.time()

    # generate all sub queries which is used to get truth cardinality
    sub_queries_rcount_list = dict()
    for query in parsed_queries:
        sub_queries_rcount_list.update({query.query_path: generate_sub_queries_rcount(query)})
    print(str.format('generate sub queries consume {}s.', time.time() - t))
    t = time.time()
    print(sub_queries_rcount_list)

    # run all sub queries and get truth cardinality
    truth_cardinality = execute_sub_queries_rcount(parsed_queries, sub_queries_rcount_list)
    print(str.format('execute sub queries consume {}s.', time.time() - t))
    t = time.time()

    # generate corresponding java code based on truth cardinality
    start_query_order = 1
    c_code = generate_c_code(truth_cardinality, parsed_queries, start_query_order)
    print(str.format('generate c_code consume {}s.', time.time() - t))
    # print(c_code)


def evaluate_SeqScan():
    queries = []
    cardinalities = []
    cost = []
    running_time = []
    run_times = 5
    for table_name in tables_dict:
        table_dict = tables_dict.get(table_name)
        if table_dict.get('unindexed_column') == '':
            continue
        query_text = 'SELECT {} FROM {}'.format(table_dict.get('unindexed_column'), table_name)
        queries.append(query_text)
        cardinalities.append(table_dict.get('row_num'))
    cost, running_time = run_cat_cost_running_time(queries, run_times, SeqScan_query_start_order,
                                                   enable_print_plan=True)
    for i in range(len(queries)):
        print(cardinalities[i], cost[i], running_time[i])
    print(len(cardinalities), len(cost), len(running_time))
    plot_cost_running_time(cost, running_time, 'SeqScan_cost_running_time.png')


def evaluate_IndexOnlyScan():
    queries = []
    cardinalities = []
    cost = []
    running_time = []
    run_times = 5
    for table_name in tables_dict:
        if table_name == 'info_type':
            break
        table_dict = tables_dict.get(table_name)
        query_text = 'SELECT {} FROM {} WHERE id < {}'.format('id', table_name, int(table_dict.get('row_num') / 2))
        queries.append(query_text)
        cardinalities.append(table_dict.get('row_num'))
    cost, running_time = run_cat_cost_running_time(queries, run_times, IndexOnlyScan_query_start_order,
                                                   enable_print_plan=True)
    for i in range(len(queries)):
        print(cardinalities[i], cost[i], running_time[i])
    plot_cost_running_time(cost, running_time, 'IndexOnlyScan_cost_running_time.png')


def evaluate_IndexScan():
    queries = []
    cardinalities = []
    cost = []
    running_time = []
    run_times = 1
    for table_name in tables_dict:
        if table_name == 'info_type':
            break
        table_dict = tables_dict.get(table_name)
        query_text = 'SELECT {} FROM {} WHERE id < {}'.format('*', table_name, int(table_dict.get('row_num') / 1000))
        queries.append(query_text)
        cardinalities.append(table_dict.get('row_num'))
    cost, running_time = run_cat_cost_running_time(queries, run_times, IndexScan_query_start_order,
                                                   enable_print_plan=True)
    for i in range(len(queries)):
        print(cardinalities[i], cost[i], running_time[i])
    plot_cost_running_time(cost, running_time, 'IndexScan_cost_running_time.png')


if __name__ == '__main__':
    # evaluate_SeqScan()
    # evaluate_IndexOnlyScan()
    evaluate_IndexScan()

    # generate_truthcard4queries_scan(queries)
