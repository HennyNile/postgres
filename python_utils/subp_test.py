import os
import subprocess

if __name__ == '__main__':
    command_head = '/usr/local/pgsql/bin/psql -h localhost -p 5431 -U postgres_15_sc imdb -c "query"'
    query = "select count(*) from title t where t.production_year<1945;"
    command = command_head.replace('query', query)

    subp = subprocess.Popen([command], shell=True, stdout=subprocess.PIPE)
    (out, err) = subp.communicate()
    out_str = out.decode()
    outs_str = out_str.split('\n')
    result_card = outs_str[2].strip()
    print(result_card, len(result_card))
