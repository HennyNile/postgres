import subprocess

db_user = 'postgres_15_sc'
db = 'imdb'
port = 5431


def modify_pg_conf_parameters(enable_truth_card=False, benchmark=0, query_order=0):
    command_head = str.format('/usr/local/pgsql/bin/psql -U {} -p {} -d {}', db_user, port, db) + ' -c "{}"'

    # modify enable_truth_card
    cmd = 'alter system set enable_truth_card=false;'
    if enable_truth_card:
        cmd = 'alter system set enable_truth_card=true;'
    subp = subprocess.Popen([command_head.format(cmd)], shell=True, stdout=subprocess.PIPE)
    subp.communicate()

    if enable_truth_card:
        # modify benchmark
        cmd = 'alter system set benchmark={};'.format(benchmark)
        subp = subprocess.Popen([command_head.format(cmd)], shell=True, stdout=subprocess.PIPE)
        subp.communicate()

        # modify query_order
        cmd = 'alter system set query_order={};'.format(query_order)
        subp = subprocess.Popen([command_head.format(cmd)], shell=True, stdout=subprocess.PIPE)
        subp.communicate()

    # reload conf
    cmd = 'select pg_reload_conf();'
    subp = subprocess.Popen([command_head.format(cmd)], shell=True, stdout=subprocess.PIPE)
    subp.communicate()


def run_cat_cost_running_time(queries, run_times, start_query_order, end_query_order, store_filepath,
                              enable_truth_card=False, benchmark=0, enable_print_plan=False, ):
    command_head = str.format('/usr/local/pgsql/bin/psql -U {} -p {} -d {}', db_user, port, db) + ' -c "{}"'
    cost_list, running_time_list = [], []
    query_order = start_query_order
    store_file = open(store_filepath, 'a+')
    for i in range(start_query_order, end_query_order):
        modify_pg_conf_parameters(enable_truth_card=enable_truth_card, benchmark=benchmark, query_order=query_order)
        query_order += 1
        query = queries[i]
        print('[INFO] query ' + str(i))
        # print('[INFO] query ' + str(i) + ': ' + query)
        # run query and catch running time
        command = str.format(command_head, "explain analyze " + query)
        running_time = 0
        cost = 0
        for _ in range(run_times):
            subp = subprocess.Popen([command], shell=True, stdout=subprocess.PIPE)
            (out, err) = subp.communicate()
            out_str_lines = out.decode().split('\n')
            if enable_print_plan:
                print(out.decode())
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
        print('[INFO] query ' + str(i) + ': ' + str(running_time/run_times) + 'ms')
        store_file.write(str(i) + ', ' + str(cost) + ', ' + str(running_time/run_times) + '\n')
        store_file.flush()
        cost_list.append(cost)
        running_time_list.append(running_time/run_times)
    return cost_list, running_time_list
