class Query:
    def __init__(self):
        self.query_path = None
        self.select = None
        self.tables = []  # [[table_name1, table_key1], [table_name2, table_key2], ...]
        self.tables_dict = dict()  # {table_key: table_name}
        self.joins = dict()  # {table_key1+table_key2: [join_predicates]}
        self.predicates = dict()  # {table_key: [filter_predicates]}
        self.join_tables = dict()  # {table_key: [join_table_keys]}
        self.join_column_tables = dict()  # {table_key: {column_key:[[table_keys],[column_keys]]}}

    def set_query_path(self, query_path):
        self.query_path = query_path

    def set_select(self, select):
        self.select = select

    def set_tables(self, tables):
        self.tables = tables
        for table in tables:
            self.tables_dict.update({table[1]: table[0]})
            self.predicates.update({table[1]: list()})
            self.join_tables.update({table[1]: list()})
            self.join_column_tables.update({table[1]: dict()})

    def set_joins(self, joins):
        for join in joins:
            join_table_keys = join[0]
            join_columns_keys = join[1]
            join_text = join[2]

            # add join column to join_column_tables if not in
            if self.join_column_tables.get(join_table_keys[0]).get(join_columns_keys[0]) is None:
                self.join_column_tables.get(join_table_keys[0]).update(
                    {join_columns_keys[0]: [[join_table_keys[1]], [join_columns_keys[1]]]})
            else:
                tables_columns = self.join_column_tables.get(join_table_keys[0]).get(join_columns_keys[0])
                find = False
                for i in range(len(tables_columns[0])):
                    if join_table_keys[1] == tables_columns[0][i] and join_columns_keys[1] == tables_columns[1][i]:
                        find = True
                if not find:
                    tables_columns[0].append(join_table_keys[1])
                    tables_columns[1].append(join_columns_keys[1])

            if self.join_column_tables.get(join_table_keys[1]).get(join_columns_keys[1]) is None:
                self.join_column_tables.get(join_table_keys[1]).update(
                    {join_columns_keys[1]: [[join_table_keys[0]], [join_columns_keys[0]]]})
            else:
                tables_columns = self.join_column_tables.get(join_table_keys[1]).get(join_columns_keys[1])
                find = False
                for i in range(len(tables_columns[0])):
                    if join_table_keys[0] == tables_columns[0][i] and join_columns_keys[0] == tables_columns[1][i]:
                        find = True
                        break
                if not find:
                    tables_columns[0].append(join_table_keys[0])
                    tables_columns[1].append(join_columns_keys[0])

            # check neighbor join tables
            tables_columns_1 = self.join_column_tables.get(join_table_keys[0]).get(join_columns_keys[0])
            tables_columns_2 = self.join_column_tables.get(join_table_keys[1]).get(join_columns_keys[1])
            # print("table_columns_1", tables_columns_1)
            # print("table_columns_2", tables_columns_2)
            for i in range(len(tables_columns_1[0])):
                find = False
                if tables_columns_1[0][i] == join_table_keys[1]:
                    continue
                for j in range(len(tables_columns_2[0])):
                    if tables_columns_1[0][i] == tables_columns_2[0][j] and tables_columns_1[1][i] == tables_columns_2[1][j]:
                        find = True
                        break
                if not find:
                    tables_columns_2[0].append(tables_columns_1[0][i])
                    tables_columns_2[1].append(tables_columns_1[1][i])
                    tables_columns_3 = self.join_column_tables.get(tables_columns_1[0][i]).get(tables_columns_1[1][i])
                    find = False
                    for l in range(len(tables_columns_3[0])):
                        if join_table_keys[1] == tables_columns_3[0][l] and join_columns_keys[1] == tables_columns_3[1][l]:
                            find = True
                            break
                    if not find:
                        tables_columns_3[0].append(join_table_keys[1])
                        tables_columns_3[1].append(join_columns_keys[1])

            for i in range(len(tables_columns_2[0])):
                find = False
                if tables_columns_2[0][i] == join_table_keys[0]:
                    continue
                for j in range(len(tables_columns_1[0])):
                    if tables_columns_2[0][i] == tables_columns_1[0][j] and tables_columns_2[1][i] == tables_columns_1[1][j]:
                        find = True
                        break
                if not find:
                    tables_columns_1[0].append(tables_columns_2[0][i])
                    tables_columns_1[1].append(tables_columns_2[1][i])
                    tables_columns_3 = self.join_column_tables.get(tables_columns_2[0][i]).get(tables_columns_2[1][i])
                    find = False
                    for l in range(len(tables_columns_3[0])):
                        if join_table_keys[0] == tables_columns_3[0][l] and join_columns_keys[0] == tables_columns_3[1][l]:
                            find = True
                            break
                    if not find:
                        tables_columns_3[0].append(join_table_keys[0])
                        tables_columns_3[1].append(join_columns_keys[0])

            # # initialize Query.joins
            # init_joins = self.joins.get(join_table_keys[0] + join_table_keys[1])
            # if init_joins is not None:
            #     self.joins.update({join_table_keys[0] + join_table_keys[1]: init_joins.append(join_text),
            #                        join_table_keys[1] + join_table_keys[0]: init_joins.append(join_text)})
            # else:
            #     self.joins.update({join_table_keys[0] + join_table_keys[1]: [join_text],
            #                        join_table_keys[1] + join_table_keys[0]: [join_text]})

        # initialize Query.join_tables and Query.joins
        tables = self.tables
        join_key_set = set()
        for table in tables:
            tables_columns_items = list(self.join_column_tables.get(table[1]).items())
            join_table_keys = set()
            for tables_columns_item in tables_columns_items:
                table_1_key = table[1]
                column_1_key = tables_columns_item[0]
                for i in range(len(tables_columns_item[1][0])):
                    table_2_key = tables_columns_item[1][0][i]
                    column_2_key = tables_columns_item[1][1][i]
                    if table_1_key+column_1_key+table_2_key+column_2_key not in join_key_set:
                        join_table_keys.add(table_2_key)
                        join_key_set.add(table_1_key+column_1_key+table_2_key+column_2_key)
                        join_key_set.add(table_2_key+column_2_key+table_1_key+column_1_key)
                        init_joins = self.joins.get(table_1_key + table_2_key)
                        join_text = table_1_key + '.' + column_1_key + '=' + table_2_key + '.' + column_2_key
                        if init_joins is not None:
                            self.joins.update({table_1_key + table_2_key: init_joins.append(join_text),
                                               table_2_key + table_1_key: init_joins.append(join_text)})
                        else:
                            self.joins.update({table_1_key + table_2_key: [join_text],
                                               table_2_key + table_1_key: [join_text]})
            self.join_tables.update({table[1]: list(join_table_keys)})

    def set_predicates(self, predicates):
        for predicate in predicates:
            table_key, predicate_text = predicate[0], predicate[1]
            self.predicates.get(table_key).append(predicate_text)
            # table = self.tables_dict.get(table_key)
            # predicate_text = predicate[1]
            # self.predicates.get(table).append(predicate_text)

    def self_print(self):
        print('select:\n', self.select)
        print('tables:\n', self.tables)
        print('joins:\n', self.joins)
        print('predicates:\n', self.predicates)

    def check_subJoin(self, tables_key):
        # root node to walk graph
        root_key = tables_key[0]
        join_graph_tables_key = []

        # walk graph with BFS
        index = 0
        queue = [root_key]
        while index < len(queue):
            node_key = queue[index]
            index += 1
            # check whether this table is included into graph
            if node_key in join_graph_tables_key:
                continue
            join_graph_tables_key.append(node_key)
            join_tables = self.join_tables.get(node_key)
            for table_key in join_tables:
                if table_key not in join_graph_tables_key and table_key not in queue and table_key in tables_key:
                    queue.append(table_key)

        # print('join_graph_tables_key =', join_graph_tables_key, ', tables_key =', tables_key)
        if len(join_graph_tables_key) == len(tables_key):
            return True
        else:
            return False