import sys

sys.path.append('./../../')

from utils.load_queries import load_JOB
from utils.run_queries_catch_infos import run_cat_cost_running_time
from utils.plot import plot_cost_running_time


def cost_running_time_PG():
    query_paths, JOB_queries = load_JOB()
    cost_list, running_time_list = run_cat_cost_running_time(queries=JOB_queries,
                                                             run_times=3,
                                                             start_query_order=60,
                                                             # end_query_order=1,
                                                             end_query_order=len(JOB_queries),
                                                             store_filepath='cost_running_time_a.csv',
                                                             enable_truth_card=False)
    plot_cost_running_time(cost_list=cost_list, running_time_list=running_time_list, title='Initial Postgres',
                           output_filepath='cost_model_a')


def cost_running_time_PG_truth_card():
    query_paths, JOB_queries = load_JOB()
    cost_list, running_time_list = run_cat_cost_running_time(queries=JOB_queries,
                                                             run_times=3,
                                                             start_query_order=0,
                                                             # end_query_order=1,
                                                             end_query_order=len(JOB_queries),
                                                             store_filepath='cost_running_time_b.csv',
                                                             enable_truth_card=True,
                                                             benchmark=3)
    plot_cost_running_time(cost_list=cost_list, running_time_list=running_time_list, title='Postgres with Truth Card',
                           output_filepath='cost_model_b')


if __name__ == '__main__':
    cost_running_time_PG()
    # query_paths, JOB_queries = load_JOB()
    # print(query_paths[60])
    # print(JOB_queries[60])
