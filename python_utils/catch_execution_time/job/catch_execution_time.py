import subprocess
import time

benchmarks = ['JOB']

job_queries = ['../../queries/job/1a.sql']
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
queries = {'JOB': job_queries}

# the times for which a query to be run
query_running_times = 5
running_time_output_filepath = 'running_time.csv'


def cat_query_running_time(query):
    command_head = '/usr/local/pgsql/bin/psql -h localhost -p 5431 -U postgres_15_sc imdb -c "explain analyze {}"'
    command = str.format(command_head, query)
    planning_time_list, execution_time_list, total_time_list = [], [], []

    for i in range(query_running_times):
        subp = subprocess.Popen([command], shell=True, stdout=subprocess.PIPE)
        (out, err) = subp.communicate()
        out_str_lines = out.decode().split('\n')
        out_str_lines_len = len(out_str_lines)
        planning_time_str, execution_time_str = out_str_lines[out_str_lines_len - 5], out_str_lines[
            out_str_lines_len - 4]
        planning_time = float(planning_time_str.split(':')[1].strip().split(' ')[0])
        execution_time = float(execution_time_str.split(':')[1].strip().split(' ')[0])
        planning_time_list.append(planning_time)
        execution_time_list.append(execution_time)
        total_time_list.append(planning_time + execution_time)
    return [planning_time_list, execution_time_list, total_time_list]


# do some statistic computation and output result
def output_running_time(running_time):
    with open(running_time_output_filepath, 'a+') as f:
        for benchmark in benchmarks:
            f.write(benchmark + 'Benchmark,\n')
            bench_running_time = running_time.get(benchmark)
            for query in bench_queries:
                f.write(',' + query + ',\n')
                # query running time is consist of planning time list, execution time list and list of sum of both time
                query_running_time = bench_running_time.get(query)
                planning_time_list, execution_time_list, total_time_list = \
                    query_running_time[0], query_running_time[1], query_running_time[2]
                planning_time_str, execution_time_str, total_time_str = ',,planning time,', ',,execution time,', \
                                                                        ',,total time,'
                for i in range(query_running_times):
                    planning_time_str += str(planning_time_list[i]) + ','
                    execution_time_str += str(execution_time_list[i]) + ','
                    total_time_str += str(total_time_list[i]) + ','
                planning_time_str += '\n'
                execution_time_str += '\n'
                total_time_str += '\n'
                f.write(planning_time_str + execution_time_str + total_time_str)


if __name__ == '__main__':
    # run query and get running time
    running_time = dict()
    for benchmark in benchmarks:
        bench_queries = queries.get(benchmark)
        bench_running_time = dict()
        for query in bench_queries:
            print('[INFO] query: ' + query)
            # query running time is consist of planning time list, execution time list and list of sum of both time
            query_text = open(query, 'r').read()
            query_running_time = cat_query_running_time(query_text)
            bench_running_time.update({query: query_running_time})
        running_time.update({benchmark: bench_running_time})

    # output running time to output file specified in running_time_output_filepath
    output_running_time(running_time)
