#include "postgres.h"
#include "miscadmin.h"

int** cardinalities;

void generate_cardinality(){
    if(card_type==2){
        system("zsh -i test.sh \"SELECT COUNT(*) FROM movie_companies mc,title t,movie_info_idx mi_idx WHERE "
               "t.id=mc.movie_id AND t.id=mi_idx.movie_id AND mi_idx.info_type_id=113 AND mc.company_type_id=2 "
               "AND t.production_year>2005 AND t.production_year<2010;\" Neurocard neurocard");
    }
}

double get_cardinality(int total_relids){
    if(cardinalities==NULL){
        generate_cardinality()
    }


}