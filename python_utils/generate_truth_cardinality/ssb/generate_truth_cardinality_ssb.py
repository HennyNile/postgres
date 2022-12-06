import subprocess
import time
from utils import parse_query_text, generate_sub_queries_rcount, execute_sub_queries_rcount, generate_c_code

benchmarks = ['ssb']

ssb_queries = ['../../queries/ssb/Q1.1.sql', '../../queries/ssb/Q1.2.sql', '../../queries/ssb/Q1.3.sql',
               '../../queries/ssb/Q2.1.sql', '../../queries/ssb/Q2.2.sql', '../../queries/ssb/Q2.3.sql',
               '../../queries/ssb/Q3.1.sql', '../../queries/ssb/Q3.2.sql', '../../queries/ssb/Q3.3.sql',
               '../../queries/ssb/Q3.4.sql', '../../queries/ssb/Q4.1.sql', '../../queries/ssb/Q4.2.sql',
               '../../queries/ssb/Q4.3.sql']
# ssb_queries = ['../../queries/ssb/Q2.1.sql']
queries = {'ssb': ssb_queries}


def init_queries():
    parsed_queries = []
    for ben in benchmarks:
        for query_path in queries.get(ben):
            query_lines = open(query_path, 'r').readlines()
            query = parse_query_text(query_path, query_lines)
            parsed_queries.append(query)
    return parsed_queries


if __name__ == '__main__':
    t = time.time()
    # generate Query instance for all queries
    queries = init_queries()
    print(str.format('Initialize queries consume {}s.', time.time() - t))
    t = time.time()

    # generate all sub queries which is used to get truth cardinality
    sub_queries_rcount_list = dict()
    for query in queries:
        # print(query.query_path)
        sub_queries_rcount_list.update({query.query_path: generate_sub_queries_rcount(query)})
        # print(sub_queries_rcount_list.get(query.query_path))
        # print(sub_queries_rcount_list)
    print(str.format('generate sub queries consume {}s.', time.time() - t))
    t = time.time()

    # run all sub queries and get truth cardinality
    factors = [1]
    truth_cardinalities = execute_sub_queries_rcount(queries, sub_queries_rcount_list, factors)
    print(str.format('execute sub queries consume {}s.', time.time() - t))
    t = time.time()

    # generate corresponding java code based on truth cardinality
    start_query_order = 1
    c_code = generate_c_code(truth_cardinalities, factors, queries, start_query_order)
    print(str.format('generate c_code consume {}s.', time.time() - t))
    # print(c_code)


