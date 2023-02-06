class Query:
    def __init__(self):
        self.query_path = None
        self.select = None
        self.tables = []
        self.tables_dict = dict()
        self.joins = dict()
        self.predicates = dict()
        self.join_tables = dict()

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

    def set_joins(self, joins):
        for join in joins:
            join_table_keys = join[0]
            init_joins = self.joins.get(join_table_keys[0]+join_table_keys[1])
            join_text = join[1]
            if join_table_keys[0] not in self.join_tables.get(join_table_keys[1]):
                self.join_tables.get(join_table_keys[1]).append(join_table_keys[0])
            if join_table_keys[1] not in self.join_tables.get(join_table_keys[0]):
                self.join_tables.get(join_table_keys[0]).append(join_table_keys[1])
            if init_joins is not None:
                self.joins.update({join_table_keys[0] + join_table_keys[1]: init_joins.append(join_text),
                                   join_table_keys[1] + join_table_keys[0]: init_joins.append(join_text)})
            else:
                self.joins.update({join_table_keys[0] + join_table_keys[1]: [join_text],
                                   join_table_keys[1] + join_table_keys[0]: [join_text]})

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


