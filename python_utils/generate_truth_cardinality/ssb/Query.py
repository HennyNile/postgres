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
            self.tables_dict.update({table[0]: table})
            self.predicates.update({table: list()})

    def set_joins(self, joins):
        for join in joins:
            join_keys = join.split('=')
            join_tables = []
            for key in join_keys:
                join_tables.append(self.tables_dict.get(key.strip()[0]))
            init_joins = self.joins.get(join_tables[0] + join_tables[1])
            if init_joins is not None:
                self.joins.update({join_tables[0]+join_tables[1]: init_joins.append(join), 
                                   join_tables[1]+join_tables[0]: init_joins.append(join)})
            else:
                self.joins.update({join_tables[0] + join_tables[1]: [join], join_tables[1] + join_tables[0]: [join]})
            
    def set_predicates(self, predicates):
        for predicate in predicates:
            table_key = ''
            if predicate[0] == '(':
                table_key = predicate[1]
            else:
                table_key = predicate[0]
            table = self.tables_dict.get(table_key)
            self.predicates.get(table).append(predicate)

    def self_print(self):
        print('select:\n', self.select)
        print('tables:\n', self.tables)
        print('joins:\n', self.joins)
        print('predicates:\n', self.predicates)