import os
import sys


def load_queries(dirpath):
    path = os.walk(dirpath)
    current_dir_obj = path.__next__()
    query_paths = current_dir_obj[2]
    queries = []
    for query_path in query_paths:
        with open(dirpath + query_path, 'r+') as f:
            queries.append(f.read())
    return query_paths, queries


def load_JOB():
    dir_path = sys.path[-1] + 'queries/job/'
    return load_queries(dir_path)
