import os
import subprocess

if __name__ == '__main__':
    command_head = '/usr/local/pgsql/bin/psql -h localhost -p 5431 -U postgres_15_sc imdb -c "{}"'
    query = "explain analyze select count(*) from title t where t.production_year<1945;"
    command = str.format(command_head, query)

    subp = subprocess.Popen([command], shell=True, stdout=subprocess.PIPE)
    (out, err) = subp.communicate()
    out_str = out.decode()
    # print(out_str)
    out_str_lines = out_str.split('\n')
    out_str_lines_len = len(out_str_lines)
    planning_time_str, execution_time_str = out_str_lines[out_str_lines_len-5], out_str_lines[out_str_lines_len-4]
    planning_time = float(planning_time_str.split(':')[1].strip().split(' ')[0])
    execution_time = float(execution_time_str.split(':')[1].strip().split(' ')[0])
    print('planning_time='+str(planning_time)+'ms;')
