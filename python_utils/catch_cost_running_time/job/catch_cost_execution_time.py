import os
import subprocess

import matplotlib.pyplot as plt
# import seaborn as sns
from tqdm import tqdm

benchmark_dir = '../../queries/job/'
running_times = 3  # run 3 times for each query
db_user = 'postgres_15_sc'
db = 'imdb'
port = 5431
output_filepath = 'cost_runningtime_relation.csv'


def prepare_queries():
    path = os.walk(benchmark_dir)
    current_dir_obj = path.__next__()
    query_paths = current_dir_obj[2]
    queries = []
    for query_path in query_paths:
        with open(benchmark_dir + query_path, 'r+') as f:
            queries.append([query_path, f.read()])
    return queries


def run_queries(queries):
    command_head = str.format('/usr/local/pgsql/bin/psql -U {} -p {} -d {}', db_user, port, db) + ' -c "{}"'
    for i in range(len(queries)):
        query = queries[i]
        print('[INFO] query ' + str(i) + ': ' + query[0])
        # run query and catch running time
        command = str.format(command_head, "explain analyze " + query[1])
        running_time = 0
        cost = 0
        for _ in range(running_times):
            subp = subprocess.Popen([command], shell=True, stdout=subprocess.PIPE)
            (out, err) = subp.communicate()
            out_str_lines = out.decode().split('\n')
            out_str_lines_len = len(out_str_lines)
            # extract running time info
            planning_time_str, execution_time_str = out_str_lines[out_str_lines_len - 5], out_str_lines[
                out_str_lines_len - 4]
            planning_time = float(planning_time_str.split(':')[1].strip().split(' ')[0])
            execution_time = float(execution_time_str.split(':')[1].strip().split(' ')[0])
            running_time += planning_time + execution_time
            # extract cost info
            cost_line_parts = out_str_lines[2].strip().split(' ')
            for part in cost_line_parts:
                if 'cost' in part:
                    cost = float(part.strip().split('..')[1])
        print('[INFO] query ' + str(i) + ': ' + query[0] + " : " + str(running_time/running_times) + 's')
        query.append(cost)
        query.append(running_time/running_times)
    return queries


def output_result(queries):
    output_file = open(output_filepath, 'w+')
    output_file.write('Query,Cost,Running Time,\n')
    costs = []
    running_times = []
    for query in queries:
        output_file.write(str(query[0])+','+str(query[2])+','+str(query[3]))
        output_file.write('\n')
        costs.append(query[2])
        running_times.append(query[3])
    output_file.write('\n\n')
    # plot time and cost
    plt.figure()
    plt.scatter(costs, running_times)
    plt.xlabel('Cost')
    plt.ylabel('Running time / ms')
    plt.savefig('JOB_cost_running_time_relation.png')


if __name__ == '__main__':
    # read queries from files
    queries = prepare_queries()  # queries[i] = [query_path, query]
    # for query in queries:
    #     print(query[0])
    # exit()

    # run queries in different config parameters
    queries = run_queries(queries)

    # output queries execution time
    output_result(queries)


