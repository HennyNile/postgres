import os
import sys


def load_queries(dirpath):
    path = os.walk(dirpath)
    current_dir_obj = path.__next__()
    query_paths = current_dir_obj[2]

    # sort the path, solid the query order
    query_paths.sort()

    queries = []
    for query_path in query_paths:
        with open(dirpath + query_path, 'r+') as f:
            queries.append(f.read())
    return query_paths, queries


def load_JOB():
    dir_path = sys.path[-1] + 'queries/job/'
    return load_queries(dir_path)


def load_JOB_light():
    dir_path = sys.path[-1] + 'queries/job-light/'
    query_paths, queries = load_queries(dir_path)
    queries = queries[0].split('\n')
    query_paths = ['job-light-' + str(i+1) for i in range(len(queries))]
    return query_paths, queries


def load_cost_running_time(filepath):
    cost_list, running_time_list = [], []
    with open(filepath, 'r+') as f:
        lines = f.readlines()
        for line in lines:
            parts = line.split(',')
            cost = float(parts[1].strip())
            running_time = float(parts[2].strip())
            cost_list.append(cost)
            running_time_list.append(running_time)
    return cost_list, running_time_list
