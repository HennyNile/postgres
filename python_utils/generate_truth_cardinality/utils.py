import itertools
import os
import subprocess

import astropy.utils

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
        line = line.strip(' \n').lower()
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
            # for table in line.split(','):
            table = line.split(',')[0]
            table_names = table.split(' ')
            tables.append([table_names[0], table_names[1]])
        elif flag == 2:
            if len(line.split('and', 1)) == 2:
                predicate = line.split('and', 1)[0].strip()
            else:
                predicate = line.strip(' ;')

            if '<=' in predicate:
                if '.' in predicate.split('<=')[1]:
                    joins.append(predicate)
                else:
                    predicates.append(predicate)
            elif '<' in predicate:
                if '.' in predicate.split('<')[1]:
                    joins.append(predicate)
                else:
                    predicates.append(predicate)
            elif '>=' in predicate:
                if '.' in predicate.split('>=')[1]:
                    joins.append(predicate)
                else:
                    predicates.append(predicate)
            elif '>' in predicate:
                if '.' in predicate.split('>')[1]:
                    joins.append(predicate)
                else:
                    predicates.append(predicate)
            elif '=' in predicate:
                if '.' in predicate.split('=')[1]:
                    joins.append(predicate)
                else:
                    predicates.append(predicate)

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
        encode_map.update({tables[i][0]: 2**(i+1)})
    return encode_map


def generate_sub_queries_rcount(query):
    tables = query.tables
    joins = query.joins
    sub_queries_text = dict()
    select = 'select count(*) from '
    sub_queries_count = 0
    for join_table_count in range(1, len(joins) + 1):
        for com in itertools.combinations(tables, join_table_count):
            query_text = select
            joins_predicates = []

            join_tables_set = set()
            for com2table in itertools.combinations(com, 2):
                tables_key = com2table[0][0] + com2table[1][0]
                joins = query.joins.get(tables_key)
                if joins is not None:
                    join_tables_set.add(com2table[0][0])
                    join_tables_set.add(com2table[1][0])
                    for join in joins:
                        joins_predicates.append(join)

            continue_flag = False
            if (join_table_count > 1) and len(joins_predicates) == 0:
                continue_flag = True

            if join_table_count > 1:
                for table in com:
                    if table[0] not in join_tables_set:
                        continue_flag = True
                        break
            if continue_flag:
                continue

            sub_queries_count += 1

            for table in com:
                query_text += table[0] + " " + table[1] + ", "
                predicates = query.predicates.get(table[0])
                if predicates is not None:
                    for predicate in predicates:
                        joins_predicates.append(predicate)
            query_text = query_text[:len(query_text) - 2]

            if len(joins_predicates) > 0:
                query_text += ' where ' + joins_predicates[0]
                for i in range(1, len(joins_predicates)):
                    query_text += ' and ' + joins_predicates[i]
            query_text += ';'
            sub_queries_text.update({tuple([t[0] for t in com]): query_text})
    print('total ' + str(sub_queries_count) + ' sub queries.')
    return sub_queries_text


def execute_sub_queries_rcount(queries, sub_queries_rcount_list):
    command_head = '/usr/local/pgsql/bin/psql -h localhost -p 5431 -U postgres_15_sc imdb -c "{}"'

    output_file_path = 'truth_cardinality.txt'
    output_file = open(output_file_path, 'w+')

    # query_orders = []
    truth_cardinality = dict()
    for i in range(len(queries)):
        query_path = queries[i].query_path
        sub_queries_rcount = sub_queries_rcount_list.get(query_path)
    # for query_path, sub_queries_rcount in sub_queries_rcount_list.items():
        print('[INFO] Query : ' + query_path)
        coms = []
        res = []
        query_count = 0
        for com, query in sub_queries_rcount.items():
            query_count += 1
            print(query_count, com)
            coms.append(com)
            command = str.format(command_head, query)
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
            output_file.write('      ' + coms[j].__str__() + ': ' + str(res[j]) + '\n')
            output_file.write('      ' + str(table_encode) + ': ' + str(res[j]) + '\n')
        truth_cardinality.update({query_path: cardinalities})
    output_file.close()
    return truth_cardinality


def tables2bitmap(tables, benchmark):
    # benchmark = 0, ssb; benchmark = 1, tpc-h
    bitmap = 0
    if benchmark == 0:
        # ssb
        # [lineorder, part, customer, supplier, dates]
        if 'lineorder' in tables:
            bitmap += 16
        if 'part' in tables:
            bitmap += 8
        if 'customer' in tables:
            bitmap += 4
        if 'supplier' in tables:
            bitmap += 2
        if 'dates' in tables:
            bitmap += 1
    elif benchmark == 1:
        # tpc-h
        # [lineitem, part, customer, supplier, orders, partsupp, region, nation]
        if 'lineitem' in tables:
            bitmap += 128
        if 'part' in tables:
            bitmap += 64
        if 'customer' in tables:
            bitmap += 32
        if 'supplier' in tables:
            bitmap += 16
        if 'orders' in tables:
            bitmap += 8
        if 'partsupp' in tables:
            bitmap += 4
        if 'region' in tables:
            bitmap += 2
        if 'nation' in tables:
            bitmap += 1
    return bitmap


    # tpc-h
    return bitmap


def generate_c_code(truth_cardinality, queries, start_query_order):
    all_c_code = ''
    output_file_path = 'generated_c_code.txt'
    query_order = start_query_order
    for query in queries:
        c_code = ''
        query_path = query.query_path
        tables = query.tables
        table_names = [table[0] for table in tables]
        cardinality = truth_cardinality.get(query_path)
        c_code += '// ['
        for table in tables:
            c_code += table[0] + ', '
        c_code += ']\n'

        c_code += str.format('double\nget_truth_cardinality_6joins_query_{}(int total_relids)\n', query_order)
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
                c_code += str.format('\t\tcase {}:\n\t\t\treturn {};\n', single_cardinality[0], single_cardinality[1])
        c_code += '\t};\n}\n\n'
        with open(output_file_path, 'a+') as f:
            f.write(c_code)
            f.close()
        all_c_code += c_code
        query_order += 1
    return all_c_code


def init_queries_tpch():
    # query 2, 7, 8, 11, 13, 14, 15 - 22 create view or table self join, difficult to feed truth cardinality, skip them.
    # cardinality into other 9 queries.
    queries = []
    queries.append(generate_tpc_query_1())
    queries.append(generate_tpc_query_3())
    queries.append(generate_tpc_query_4())
    # queries.append(generate_tpc_query_5())
    queries.append(generate_tpc_query_6())
    queries.append(generate_tpc_query_9())
    queries.append(generate_tpc_query_10())
    queries.append(generate_tpc_query_12())
    queries.append(generate_tpc_query_14())
    return queries


def generate_tpc_query_1():
    query = Query()
    query.query_path = './../queries/tpch/1.sql'
    query.tables.append('lineitem')
    query.predicates.update({'lineitem': list()})
    query.predicates.get('lineitem').append("l_shipdate <= '1998-09-02'")
    return query


def generate_tpc_query_3():
    query = Query()
    query.query_path = './../queries/tpch/3.sql'
    query.tables.append('customer')
    query.tables.append('orders')
    query.tables.append('lineitem')
    query.joins.update({'customerorders': ['c_custkey = o_custkey'],
                        'orderscustomer': ['c_custkey = o_custkey'],
                        'lineitemorders': ['l_orderkey = o_orderkey'],
                        'orderslineitem': ['l_orderkey = o_orderkey']})
    query.predicates.update({'customer': list(), 'orders': list(), 'lineitem': list()})
    query.predicates.get('customer').append("c_mktsegment = 'BUILDING'")
    query.predicates.get('orders').append("o_orderdate < '1995-03-22'")
    query.predicates.get('lineitem').append("l_shipdate > '1995-03-22'")
    return query


def generate_tpc_query_4():
    query = Query()
    query.query_path = './../queries/tpch/4.sql'
    query.tables.append('orders')
    query.tables.append('lineitem')
    query.joins.update({'lineitemorders': ['l_orderkey = o_orderkey'],
                        'orderslineitem': ['l_orderkey = o_orderkey']})
    query.predicates.update({'orders': list(), 'lineitem': list()})
    query.predicates.get('orders').append("o_orderdate >= '1996-05-01'")
    query.predicates.get('orders').append("o_orderdate < '1996-08-01'")
    query.predicates.get('lineitem').append("l_commitdate < l_receiptdate")
    return query


def generate_tpc_query_5():
    query = Query()
    query.query_path = './../queries/tpch/5.sql'
    query.tables.append('customer')
    query.tables.append('orders')
    query.tables.append('lineitem')
    query.tables.append('supplier')
    query.tables.append('nation')
    query.tables.append('region')
    query.joins.update({'customerorders': ['c_custkey = o_custkey'],
                        'orderscustomer': ['c_custkey = o_custkey'],
                        'lineitemorders': ['l_orderkey = o_orderkey'],
                        'orderslineitem': ['l_orderkey = o_orderkey'],
                        'lineitemsupplier': ['l_suppkey = s_suppkey'],
                        'supplierlineitem': ['l_suppkey = s_suppkey'],
                        'customersupplier': ['c_nationkey = s_nationkey'],
                        'suppliercustomer': ['c_nationkey = s_nationkey'],
                        'suppliernation': ['s_nationkey = n_nationkey'],
                        'nationsupplier': ['s_nationkey = n_nationkey'],
                        'nationregion': ['n_regionkey = r_regionkey'],
                        'regionnation': ['n_regionkey = r_regionkey']
                        })
    query.predicates.update({'region': list(), 'orders': list()})
    query.predicates.get('region').append("r_name = 'AFRICA'")
    query.predicates.get('orders').append("o_orderdate >= '1993-01-01'")
    query.predicates.get('orders').append("o_orderdate < '1994-01-01'")
    return query


def generate_tpc_query_6():
    query = Query()
    query.query_path = './../queries/tpch/6.sql'
    query.tables.append('lineitem')
    query.predicates.update({'lineitem': list()})
    query.predicates.get('lineitem').append("l_shipdate >= '1993-01-01'")
    query.predicates.get('lineitem').append("l_shipdate < '1994-01-01'")
    query.predicates.get('lineitem').append("l_discount between 0.06 - 0.01 and 0.06 + 0.01")
    query.predicates.get('lineitem').append("l_quantity < 25")
    return query


def generate_tpc_query_9():
    query = Query()
    query.query_path = './../queries/tpch/9.sql'
    query.tables.append('part')
    query.tables.append('supplier')
    query.tables.append('lineitem')
    query.tables.append('partsupp')
    query.tables.append('orders')
    query.tables.append('nation')
    query.joins.update({'supplierlineitem': ['s_suppkey = l_suppkey'],
                        'lineitemsupplier': ['s_suppkey = l_suppkey'],
                        'partsupplineitem': ['ps_suppkey = l_suppkey', 'ps_partkey = l_partkey'],
                        'lineitempartsupp': ['ps_suppkey = l_suppkey', 'ps_partkey = l_partkey'],
                        'partlineitem': ['p_partkey = l_partkey'],
                        'lineitempart': ['p_partkey = l_partkey'],
                        'lineitemorders': ['l_orderkey = o_orderkey'],
                        'orderslineitem': ['l_orderkey = o_orderkey'],
                        'suppliernation': ['s_nationkey = n_nationkey'],
                        'nationsupplier': ['s_nationkey = n_nationkey']
                        })
    query.predicates.update({'part': list()})
    query.predicates.get('part').append("p_name like '%plum%'")
    return query


def generate_tpc_query_10():
    query = Query()
    query.query_path = './../queries/tpch/10.sql'
    query.tables.append('customer')
    query.tables.append('orders')
    query.tables.append('lineitem')
    query.tables.append('nation')
    query.joins.update({'customerorders': ['c_custkey = o_custkey'],
                        'orderscustomer': ['c_custkey = o_custkey'],
                        'lineitemorders': ['l_orderkey = o_orderkey'],
                        'orderslineitem': ['l_orderkey = o_orderkey'],
                        'customernation': ['c_nationkey = n_nationkey'],
                        'nationcustomer': ['c_nationkey = n_nationkey']
                        })
    query.predicates.update({'lineitem': list(), 'orders': list()})
    query.predicates.get('lineitem').append("l_returnflag = 'R'")
    query.predicates.get('orders').append("o_orderdate >= '1993-07-01'")
    query.predicates.get('orders').append("o_orderdate < '1993-10-01'")
    return query


def generate_tpc_query_11():
    query = Query()
    query.query_path = './../queries/tpch/11.sql'
    query.tables.append('partsupp')
    query.tables.append('supplier')
    query.tables.append('nation')
    query.joins.update({'partsuppsupplier': ['ps_suppkey = s_suppkey'],
                        'supplierpartsupp': ['ps_suppkey = s_suppkey'],
                        'suppliernation': ['s_nationkey = n_nationkey'],
                        'nationsupplier': ['s_nationkey = n_nationkey'],
                        })
    query.predicates.update({'nation': list()})
    query.predicates.get('nation').append("n_name = 'GERMANY'")
    return query


def generate_tpc_query_12():
    query = Query()
    query.query_path = './../queries/tpch/12.sql'
    query.tables.append('orders')
    query.tables.append('lineitem')
    query.joins.update({'lineitemorders': ['l_orderkey = o_orderkey'],
                        'orderslineitem': ['l_orderkey = o_orderkey']
                        })
    query.predicates.update({'lineitem': list(), 'orders': list()})
    query.predicates.get('lineitem').append("l_shipmode in ('REG AIR', 'MAIL')")
    query.predicates.get('lineitem').append("l_commitdate < l_receiptdate")
    query.predicates.get('lineitem').append("l_shipdate < l_commitdate")
    query.predicates.get('lineitem').append("l_receiptdate >= '1995-01-01'")
    query.predicates.get('lineitem').append("l_receiptdate < '1996-01-01'")
    return query


def generate_tpc_query_14():
    query = Query()
    query.query_path = './../queries/tpch/14.sql'
    query.tables.append('lineitem')
    query.tables.append('part')
    query.joins.update({'lineitempart': ['l_partkey = p_partkey'],
                        'partlineitem': ['l_partkey = p_partkey']
                        })
    query.predicates.update({'lineitem': list()})
    query.predicates.get('lineitem').append("l_shipdate >= '1995-08-01'")
    query.predicates.get('lineitem').append("l_shipdate < '1995-09-01'")
    return query








