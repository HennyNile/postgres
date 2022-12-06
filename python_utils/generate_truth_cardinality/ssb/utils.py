import itertools
import os
import subprocess

from Query import Query


def parse_query_text(query_path, query_lines):
    # remove ;
    query_lines[-1] = query_lines[-1].split(';')[0]

    # flag = 0, select; flag = 1, tables; flag = 2, join and predicates;
    flag = -1
    select = ''
    tables = []
    joins = []
    predicates = []
    join_count = 0
    for line in query_lines:
        line = line.strip()
        if line == '':
            continue
        elif line == 'select':
            flag = 0
            continue
        elif line == 'from':
            flag = 1
            continue
        elif line == 'where':
            flag = 2
            continue
        elif line == 'group by':
            break

        if flag == 0:
            select += line.strip() + ' '
        elif flag == 1:
            for table in line.split(','):
                tables.append(table.strip())
        elif flag == 2:
            if len(line.split('and', 1)) == 2:
                join_predicate = line.split('and', 1)[1].strip()
            else:
                join_predicate = line.strip()

            if join_count < len(tables) - 1:
                joins.append(join_predicate)
                join_count += 1
            else:
                predicates.append(join_predicate)

    # create a Query
    query = Query()
    # set query_path
    query.set_query_path(query_path)
    # set select
    query.set_select(select)
    # set tables
    query.set_tables(tables)
    # set joins
    query.set_joins(joins)
    # set predicates
    query.set_predicates(predicates)

    return query


def get_table_encode_map(tables):
    encode_map = dict()
    for i in range(len(tables)):
        encode_map.update({tables[i]: 2**(i+1)})
    return encode_map


def generate_sub_queries_rcount(query):
    tables = query.tables
    sub_queries_text = dict()
    select = 'select count(*) from '
    sub_queries_count = 0
    for join_table_count in range(1, len(tables) + 1):
        for com in itertools.combinations(tables, join_table_count):
            query_text = select
            joins_predicates = []

            join_tables_set = set()
            for com2table in itertools.combinations(com, 2):
                tables_key = com2table[0] + com2table[1]
                joins = query.joins.get(tables_key)
                if joins is not None:
                    join_tables_set.add(com2table[0])
                    join_tables_set.add(com2table[1])
                    for join in joins:
                        joins_predicates.append(join)

            continue_flag = False
            if (join_table_count > 1) and len(joins_predicates) == 0:
                continue_flag = True

            if join_table_count > 1:
                for table in com:
                    if table not in join_tables_set:
                        continue_flag = True
                        break
            if continue_flag:
                continue

            sub_queries_count += 1

            for table in com:
                query_text += table + ", "
                predicates = query.predicates.get(table)
                if predicates is not None:
                    for predicate in predicates:
                        joins_predicates.append(predicate)
            query_text = query_text[:len(query_text) - 2]

            if len(joins_predicates) > 0:
                query_text += ' where ' + joins_predicates[0]
                for i in range(1, len(joins_predicates)):
                    query_text += ' and ' + joins_predicates[i]
            query_text += ';'
            sub_queries_text.update({com: query_text})
    print('total ' + str(sub_queries_count) + ' sub queries.')
    return sub_queries_text


def execute_sub_queries_rcount(queries, sub_queries_rcount_list, factors):
    command_head = '/usr/local/pgsql/bin/psql -h localhost -p 5431 -U postgres_15_sc ssb_{} -c "{}"'
    output_file_path = 'truth_cardinality_ssb.txt'
    output_file = open(output_file_path, 'w+')
    output_file.write('SSB Benchmark\n')
    truth_cardinalities = dict()
    for factor in factors:
        output_file.write('  factor = ' + str(factor) + '\n')
        truth_cardinality = dict()
        query_order = 1
        for i in range(len(queries)):
            query_path = queries[i].query_path
            sub_queries_rcount = sub_queries_rcount_list.get(query_path)
        # for query_path, sub_queries_rcount in sub_queries_rcount_list.items():
            print('[INFO] FACTOR: ' + str(factor))
            print('[INFO] Query ' + str(query_order) + ' : ' + query_path)
            query_order += 1
            # if count_2 == 1:
            #     break
            # count_2 += 1
            # count_1 = 0
            coms = []
            res = []
            query_count = 0
            for com, query in sub_queries_rcount.items():
                query_count += 1
                print(query_count, com)
                # if count_1 == 1:
                #     break
                # count_1 += 1
                coms.append(com)
                command = str.format(command_head, factor, query)
                subp = subprocess.Popen([command], shell=True, stdout=subprocess.PIPE)
                (out, err) = subp.communicate()
                result_card = out.decode().split('\n')[2].strip()
                res.append(result_card)
            if len(res) != len(coms):
                print('[ERROR] Meet a error during parsing result')
                exit()

            output_file.write('    ' + query_path + '\n')
            cardinalities = dict()
            table_encode_map = get_table_encode_map(queries[i].tables)
            for j in range(len(res)):
                table_encode = 0
                for table in coms[j]:
                    table_encode += table_encode_map.get(table)
                cardinalities.update({coms[j]: [table_encode, res[j]]})
                # print('[INFO] truth cardinality')
                # print(coms[j])
                # print(res[j])
                output_file.write('      ')
                output_file.write(coms[j].__str__())
                output_file.write(': ' + str(res[j]) + '\n')
            truth_cardinality.update({query_path: cardinalities})
        truth_cardinalities.update({factor: truth_cardinality})
        # break
    output_file.close()
    return truth_cardinalities

    # truth_cardinalities, factors, queries, start_query_order


def generate_c_code(truth_cardinalities, factors, queries, start_query_order):
    all_c_code = ''
    output_file_path = 'generated_c_code_ssb.txt'
    query_order = start_query_order
    for factor in factors:
        query_order = start_query_order
        truth_cardinality = truth_cardinalities.get(factor)
        if truth_cardinality is None:
            continue
        for query in queries:
            c_code = ''
            query_path = query.query_path
            tables = query.tables
            table_names = [table for table in tables]
            cardinality = truth_cardinality.get(query_path)
            c_code += '// ['
            for table in tables:
                c_code += table + ', '
            c_code += ']\n'

            c_code += str.format('double\nget_truth_cardinality_ssb_query_{}_{}(int total_relids)\n', factor,
                                 query_order)
            c_code += '{\n'
            c_code += '\tswitch (total_relids) {\n'
            for join_table_count in range(1, len(tables) + 1):
                for com in itertools.combinations(table_names, join_table_count):
                    if cardinality.get(com) is None:
                        continue
                    com_text = com[0]
                    for i in range(1, len(com)):
                        com_text += ', ' + com[i]
                    c_code += str.format('\t\t// {}\n', com_text)
                    single_cardinality = cardinality.get(com)
                    c_code += str.format('\t\tcase {}:\n\t\t\treturn {};\n', single_cardinality[0],
                                         single_cardinality[1])
            c_code += '\t};\n}\n\n'
            with open(output_file_path, 'a+') as f:
                f.write(c_code)
                f.close()
            all_c_code += c_code
            query_order += 1
    return all_c_code

