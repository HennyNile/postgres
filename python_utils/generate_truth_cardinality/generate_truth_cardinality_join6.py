import subprocess

from utils import parse_query_text, generate_sub_queries_rcount, execute_sub_queries_rcount, generate_c_code
import time

benchmarks = ['join6']

# join6_queries = ['../queries/6join/runnable_6join_query1.sql', '../queries/6join/runnable_6join_query2.sql',
#                  '../queries/6join/runnable_6join_query3.sql', '../queries/6join/runnable_6join_query4.sql',
#                  '../queries/6join/runnable_6join_query5.sql', '../queries/6join/runnable_6join_query6.sql',
#                  '../queries/6join/runnable_6join_query7.sql', '../queries/6join/runnable_6join_query8.sql',
#                  '../queries/6join/runnable_6join_query9.sql', '../queries/6join/runnable_6join_query10.sql']

join6_queries = ['../queries/6join/runnable_6join_query8.sql']

queries = {'join6': join6_queries}


def init_queries():
    parsed_queries = []
    for ben in benchmarks:
        for query_path in queries.get(ben):
            query_lines = open(query_path, 'r').readlines()
            query = parse_query_text(query_path, query_lines)
            parsed_queries.append(query)
            # print(query_path)
            # query.self_print()
            # print('')
    return parsed_queries


if __name__ == '__main__':
    t = time.time()
    # generate Query instance for all queries
    queries = init_queries()
    print(str.format('Initialize queries consume {}s.', time.time()-t))
    t = time.time()

    # generate all sub queries which is used to get truth cardinality
    sub_queries_rcount_list = dict()
    for query in queries:
        sub_queries_rcount_list.update({query.query_path: generate_sub_queries_rcount(query)})
        # print(query.query_path)
    print(str.format('generate sub queries consume {}s.', time.time() - t))
    t = time.time()

    # run all sub queries and get truth cardinality
    truth_cardinality = execute_sub_queries_rcount(queries, sub_queries_rcount_list)
    print(str.format('execute sub queries consume {}s.', time.time() - t))
    t = time.time()

    # generate corresponding java code based on truth cardinality
    start_query_order = 8
    c_code = generate_c_code(truth_cardinality, queries, start_query_order)
    print(str.format('generate c_code consume {}s.', time.time() - t))
    # print(c_code)
