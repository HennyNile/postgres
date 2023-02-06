import subprocess

from utils import parse_query_text, generate_sub_queries_rcount, execute_sub_queries_rcount, generate_c_code
import time

benchmarks = ['job']

# job_queries = ['../../queries/job/1a.sql', '../../queries/job/2a.sql',
#                '../../queries/job/3a.sql', '../../queries/job/4a.sql',
#                '../../queries/job/5a.sql', '../../queries/job/6a.sql',
#                '../../queries/job/7a.sql', '../../queries/job/8a.sql',
#                '../../queries/job/9a.sql', '../../queries/job/10a.sql',
#                '../../queries/job/11a.sql', '../../queries/job/12a.sql',
#                '../../queries/job/13a.sql', '../../queries/job/14a.sql',
#                '../../queries/job/15a.sql', '../../queries/job/16a.sql',
#                '../../queries/job/17a.sql', '../../queries/job/18a.sql',
#                '../../queries/job/19a.sql', '../../queries/job/20a.sql',
#                '../../queries/job/21a.sql', '../../queries/job/22a.sql',
#                '../../queries/job/23a.sql', '../../queries/job/24a.sql',
#                '../../queries/job/25a.sql', '../../queries/job/26a.sql',
#                '../../queries/job/27a.sql', '../../queries/job/28a.sql',
#                '../../queries/job/29a.sql', '../../queries/job/30a.sql',
#                '../../queries/job/31a.sql', '../../queries/job/32a.sql',
#                '../../queries/job/33a.sql']

job_queries = ['../../queries/job/21a.sql', '../../queries/job/22a.sql',
               '../../queries/job/23a.sql', '../../queries/job/24a.sql',
               '../../queries/job/25a.sql', '../../queries/job/26a.sql']

# job_queries = ['../../queries/job/12a.sql']

queries = {'job': job_queries}


def init_queries():
    parsed_queries = []
    for ben in benchmarks:
        for query_path in queries.get(ben):
            query_text = open(query_path, 'r').read()
            query = parse_query_text(query_path, query_text)
            parsed_queries.append(query)
            # print(query.join_tables)
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
    sub_queries_rcount = sub_queries_rcount_list.get('../../queries/job/12a.sql')
    # for key in list(sub_queries_rcount.keys()):
    #     print(key)
    #     print(sub_queries_rcount.get(key))

    # run all sub queries and get truth cardinality
    truth_cardinality = execute_sub_queries_rcount(queries, sub_queries_rcount_list)
    print(str.format('execute sub queries consume {}s.', time.time() - t))
    t = time.time()

    # generate corresponding java code based on truth cardinality
    start_query_order = 21
    c_code = generate_c_code(truth_cardinality, queries, start_query_order)
    print(str.format('generate c_code consume {}s.', time.time() - t))
    # print(c_code)
