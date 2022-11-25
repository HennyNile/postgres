class Query:
    def __init__(self):
        self.query_path = None
        self.select = None
        self.tables = []
        self.tables_dict = dict()
        self.joins = dict()
        self.predicates = dict()

    def set_query_path(self, query_path):
        self.query_path = query_path

    def set_select(self, select):
        self.select = select

    def set_tables(self, tables):
        self.tables = tables
        for table in tables:
            self.tables_dict.update({table[1]: table[0]})
            self.predicates.update({table[0]: list()})

    def set_joins(self, joins):
        for join in joins:
            join_keys = join.split('=')
            join_tables = []
            for key in join_keys:
                t_c = key.split('.')
                join_tables.append(self.tables_dict.get(t_c[0].strip()))
            init_joins = self.joins.get(join_tables[0]+join_tables[1])
            if init_joins is not None:
                self.joins.update({join_tables[0] + join_tables[1]: init_joins.append(join),
                                   join_tables[1] + join_tables[0]: init_joins.append(join)})
            else:
                self.joins.update({join_tables[0]+join_tables[1]: [join], join_tables[1]+join_tables[0]: [join]})

    def set_predicates(self, predicates):
        for predicate in predicates:
            table_key = predicate.split('.')[0].strip()
            table = self.tables_dict.get(table_key)
            self.predicates.get(table).append(predicate)

    def self_print(self):
        print('select:\n', self.select)
        print('tables:\n', self.tables)
        print('joins:\n', self.joins)
        print('predicates:\n', self.predicates)