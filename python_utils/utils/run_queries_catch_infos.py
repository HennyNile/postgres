import subprocess

from .Query import Query, get_table_encode_map
from .generate_template_code import generate_c_code
from .load_data import load_JOB

# vm configuration
db_user = 'postgres_15_sc'
db = 'imdb'
port = 5431
default_command_head = str.format('/usr/local/pgsql/bin/psql -U {} -p {} -d {}', db_user, port, db) + ' -c "{}"'


# dbg19 configuration
# db = 'imdb'
# port = 5431
# default_command_head = str.format('/home/dbgroup/workspace/liqilong/LBO/pg15/bin/psql -p {} -d {}', port, db) \
#                        + ' -c "{}"'


def modify_pg_conf_parameters(enable_truth_card=False, benchmark=0, query_order=0):
    command_head = default_command_head

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
                              enable_truth_card=False, benchmark=0, enable_print_plan=False):
    command_head = default_command_head
    cost_list, running_time_list = [], []
    query_order = start_query_order
    store_file = open(store_filepath, 'a+')
    for i in range(start_query_order, end_query_order):
        modify_pg_conf_parameters(enable_truth_card=enable_truth_card, benchmark=benchmark, query_order=i)
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
        print('[INFO] query ' + str(i) + ': ' + str(running_time / run_times) + 'ms')
        store_file.write(str(i) + ', ' + str(cost) + ', ' + str(running_time / run_times) + '\n')
        store_file.flush()
        cost_list.append(cost)
        running_time_list.append(running_time / run_times)
    return cost_list, running_time_list


def run_cat_card(queries):
    command_head = default_command_head
    result_cards = []
    for query in queries:
        command = str.format(command_head, query)
        subp = subprocess.Popen([command], shell=True, stdout=subprocess.PIPE)
        (out, err) = subp.communicate()
        result_card = out.decode().split('\n')[2].strip()
        result_cards.append(result_card)
    return result_cards


def run_cat_subquery_card(query_paths, queries, start_query_order, end_query_order, log_filepath='subquery_card.log',
                          generated_code_filepath='generated_code.txt'):
    # 0. disable truth card
    modify_pg_conf_parameters(enable_truth_card=False)

    # 1. parse queries
    parsed_queries = []
    assert len(query_paths) == len(queries)
    for i in range(start_query_order, end_query_order):
        parsed_query = Query()
        parsed_query.parse_query(query_paths[i], queries[i])
        parsed_queries.append(parsed_query)

    # 2. generate all sub queries which is used to get truth cardinality
    queries = parsed_queries
    sub_queries_rcount_list = dict()
    for query in queries:
        sub_queries_rcount_list.update({query.query_path: query.generate_sub_queries_rcount()})
        # print(query.query_path)

    # 3. run all sub queries and get truth cardinality
    truth_cardinality = dict()
    log_file = open(log_filepath, 'a+')
    for i in range(len(queries)):
        query = queries[i]
        print('[INFO] query ' + str(i) + ':' + query.query_path)
        sub_queries_rcount = sub_queries_rcount_list.get(query.query_path)
        coms = []
        queries_text = []
        for com, query_text in sub_queries_rcount.items():
            coms.append(com)
            queries_text.append(query_text)
        result_cards = run_cat_card(queries_text)
        assert len(coms) == len(result_cards)

        log_file.write('    ' + query.query_path + '\n')
        cardinalities = dict()
        table_encode_map = get_table_encode_map(query.tables)
        for j in range(len(coms)):
            table_encode = 0
            for table_key in coms[j]:
                table_encode += table_encode_map.get(table_key)
            cardinalities.update({coms[j]: [table_encode, result_cards[j]]})
            log_file.write('      ' + coms[j].__str__() + ': ' + str(result_cards[j]) + '\n')
            log_file.write('      ' + str(table_encode) + ': ' + str(result_cards[j]) + '\n')
        log_file.flush()
        truth_cardinality.update({query.query_path: cardinalities})
    log_file.close()

    # 4. generate corresponding c code
    c_code = generate_c_code(truth_cardinality, queries, start_query_order,
                             generated_code_filepath=generated_code_filepath)
    pass
