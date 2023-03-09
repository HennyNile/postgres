import sys

sys.path.append('./../../')

from utils.load_data import load_JOB, load_cost_running_time, load_JOB_light
from utils.run_queries_catch_infos import run_cat_cost_running_time, run_cat_subquery_card
from utils.plot import plot_cost_running_time
from utils.Query import Query


def cost_running_time_PG():
    store_filepath = 'cost_running_time_a.csv'
    query_paths, JOB_queries = load_JOB()
    run_cat_cost_running_time(queries=JOB_queries,
                              run_times=3,
                              start_query_order=60,
                              # end_query_order=1,
                              end_query_order=len(JOB_queries),
                              store_filepath=store_filepath,
                              enable_truth_card=False)
    cost_list, running_time_list = load_cost_running_time(store_filepath)
    plot_cost_running_time(cost_list=cost_list, running_time_list=running_time_list, title='Initial Postgres',
                           output_filepath='cost_model_a')


def cost_running_time_PG_truth_card():
    store_filepath = 'cost_running_time_b.csv'
    query_paths, JOB_queries = load_JOB()
    run_cat_cost_running_time(queries=JOB_queries,
                              run_times=3,
                              start_query_order=0,
                              end_query_order=1,
                              # end_query_order=len(JOB_queries),
                              store_filepath=store_filepath,
                              enable_truth_card=True,
                              benchmark=3)
    cost_list, running_time_list = load_cost_running_time(store_filepath)
    plot_cost_running_time(cost_list=cost_list, running_time_list=running_time_list, title='Postgres with Truth Card',
                           output_filepath='cost_model_b')


if __name__ == '__main__':
    # cost_running_time_PG()
    # cost_running_time_PG_truth_card()

    # query_paths, JOB_queries = load_JOB()
    # query_paths, JOB_queries = load_JOB_light()
    # print(len(query_paths))
    # print(query_paths)
    # query_paths.sort()
    # print(query_paths)
    # print(query_paths[60])
    # print(JOB_queries[60])

    # store_filepath = 'cost_running_time_a.csv'
    # cost_list, running_time_list = load_cost_running_time(store_filepath)
    # plot_cost_running_time(cost_list=cost_list, running_time_list=running_time_list, title='Initial Postgres',
    #                        output_filepath='cost_model_a')

    # cat truth cardinality of JOB
    query_paths, JOB_queries = load_JOB()
    run_cat_subquery_card(query_paths=query_paths, queries=JOB_queries, start_query_order=0, end_query_order=40)


    # print(query_paths[0])
    # query = Query()
    # query.parse_query(query_paths[0], JOB_queries[0])
    # print(query.check_subJoin(['cn', 'mc', 'ci']))
    # print(query.join_column_tables)
    # print(query.join_tables)
    # print(query.join_column_tables.get('cn').items())
