#include "postgres.h"
#include "miscadmin.h"

double get_truth_cardinality(int total_relids);
double get_truth_cardinality_6joins_query_1(int total_relids);
double get_truth_cardinality_6joins_query_2(int total_relids);
double get_truth_cardinality_6joins_query_3(int total_relids);
double get_truth_cardinality_6joins_query_4(int total_relids);
double get_truth_cardinality_6joins_query_5(int total_relids);
double get_truth_cardinality_6joins_query_6(int total_relids);
double get_truth_cardinality_6joins_query_7(int total_relids);
double get_truth_cardinality_6joins_query_8(int total_relids);
double get_truth_cardinality_6joins_query_9(int total_relids);
double get_truth_cardinality_6joins_query_10(int total_relids);
double get_truth_cardinality_ssb_query_1_1(int total_relids);
double get_truth_cardinality_ssb_query_1_2(int total_relids);
double get_truth_cardinality_ssb_query_1_3(int total_relids);
double get_truth_cardinality_ssb_query_1_4(int total_relids);
double get_truth_cardinality_ssb_query_1_5(int total_relids);
double get_truth_cardinality_ssb_query_1_6(int total_relids);
double get_truth_cardinality_ssb_query_1_7(int total_relids);
double get_truth_cardinality_ssb_query_1_8(int total_relids);
double get_truth_cardinality_ssb_query_1_9(int total_relids);
double get_truth_cardinality_ssb_query_1_10(int total_relids);
double get_truth_cardinality_ssb_query_1_11(int total_relids);
double get_truth_cardinality_ssb_query_1_12(int total_relids);
double get_truth_cardinality_ssb_query_1_13(int total_relids);

double
get_truth_cardinality(int total_relids)
{
    switch (benchmark) {
        case 1: // 6_join in IMDB
            switch (query_order) {
                case 1:
                    return get_truth_cardinality_6joins_query_1(total_relids);
                case 2:
                    return get_truth_cardinality_6joins_query_2(total_relids);
                case 3:
                    return get_truth_cardinality_6joins_query_3(total_relids);
                case 4:
                    return get_truth_cardinality_6joins_query_4(total_relids);
                case 5:
                    return get_truth_cardinality_6joins_query_5(total_relids);
                case 6:
                    return get_truth_cardinality_6joins_query_6(total_relids);
                case 7:
                    return get_truth_cardinality_6joins_query_7(total_relids);
                case 8:
                    return get_truth_cardinality_6joins_query_8(total_relids);
                case 9:
                    return get_truth_cardinality_6joins_query_9(total_relids);
                case 10:
                    return get_truth_cardinality_6joins_query_10(total_relids);
                default:
                    return -1;
            }
            break;
        case 2: // ssb_1
            switch (query_order) {
                case 1:
                    return get_truth_cardinality_ssb_query_1_1(total_relids);
                case 2:
                    return get_truth_cardinality_ssb_query_1_2(total_relids);
                case 3:
                    return get_truth_cardinality_ssb_query_1_3(total_relids);
                case 4:
                    return get_truth_cardinality_ssb_query_1_4(total_relids);
                case 5:
                    return get_truth_cardinality_ssb_query_1_5(total_relids);
                case 6:
                    return get_truth_cardinality_ssb_query_1_6(total_relids);
                case 7:
                    return get_truth_cardinality_ssb_query_1_7(total_relids);
                case 8:
                    return get_truth_cardinality_ssb_query_1_8(total_relids);
                case 9:
                    return get_truth_cardinality_ssb_query_1_9(total_relids);
                case 10:
                    return get_truth_cardinality_ssb_query_1_10(total_relids);
                case 11:
                    return get_truth_cardinality_ssb_query_1_11(total_relids);
                case 12:
                    return get_truth_cardinality_ssb_query_1_12(total_relids);
                case 13:
                    return get_truth_cardinality_ssb_query_1_13(total_relids);
            }
            break;
        default:
            return -1;
    }
    return -1;
}

// [title, movie_companies, cast_info, movie_info_idx, movie_keyword, keyword, movie_link, ]
double
get_truth_cardinality_6joins_query_1(int total_relids)
{
	switch (total_relids) {
		// title
		case 2:
			return 151511;
		// movie_companies
		case 4:
			return 2054355;
		// cast_info
		case 8:
			return 4008037;
		// movie_info_idx
		case 16:
			return 377871;
		// movie_keyword
		case 32:
			return 3484458;
		// keyword
		case 64:
			return 134170;
		// movie_link
		case 128:
			return 16088;
		// title, movie_companies
		case 6:
			return 289940;
		// title, cast_info
		case 10:
			return 60728;
		// title, movie_info_idx
		case 18:
			return 9;
		// title, movie_keyword
		case 34:
			return 268874;
		// title, movie_link
		case 130:
			return 0;
		// movie_keyword, keyword
		case 96:
			return 3484458;
		// title, movie_companies, cast_info
		case 14:
			return 159980;
		// title, movie_companies, movie_info_idx
		case 22:
			return 3;
		// title, movie_companies, movie_keyword
		case 38:
			return 1309603;
		// title, movie_companies, movie_link
		case 134:
			return 0;
		// title, cast_info, movie_info_idx
		case 26:
			return 12;
		// title, cast_info, movie_keyword
		case 42:
			return 301666;
		// title, cast_info, movie_link
		case 138:
			return 0;
		// title, movie_info_idx, movie_keyword
		case 50:
			return 27;
		// title, movie_info_idx, movie_link
		case 146:
			return 0;
		// title, movie_keyword, keyword
		case 98:
			return 268874;
		// title, movie_keyword, movie_link
		case 162:
			return 0;
		// title, movie_companies, cast_info, movie_info_idx
		case 30:
			return 6;
		// title, movie_companies, cast_info, movie_keyword
		case 46:
			return 1677292;
		// title, movie_companies, cast_info, movie_link
		case 142:
			return 0;
		// title, movie_companies, movie_info_idx, movie_keyword
		case 54:
			return 3;
		// title, movie_companies, movie_info_idx, movie_link
		case 150:
			return 0;
		// title, movie_companies, movie_keyword, keyword
		case 102:
			return 1309603;
		// title, movie_companies, movie_keyword, movie_link
		case 166:
			return 0;
		// title, cast_info, movie_info_idx, movie_keyword
		case 58:
			return 18;
		// title, cast_info, movie_info_idx, movie_link
		case 154:
			return 0;
		// title, cast_info, movie_keyword, keyword
		case 106:
			return 301666;
		// title, cast_info, movie_keyword, movie_link
		case 170:
			return 0;
		// title, movie_info_idx, movie_keyword, keyword
		case 114:
			return 27;
		// title, movie_info_idx, movie_keyword, movie_link
		case 178:
			return 0;
		// title, movie_keyword, keyword, movie_link
		case 226:
			return 0;
		// title, movie_companies, cast_info, movie_info_idx, movie_keyword
		case 62:
			return 6;
		// title, movie_companies, cast_info, movie_info_idx, movie_link
		case 158:
			return 0;
		// title, movie_companies, cast_info, movie_keyword, keyword
		case 110:
			return 1677292;
		// title, movie_companies, cast_info, movie_keyword, movie_link
		case 174:
			return 0;
		// title, movie_companies, movie_info_idx, movie_keyword, keyword
		case 118:
			return 3;
		// title, movie_companies, movie_info_idx, movie_keyword, movie_link
		case 182:
			return 0;
		// title, movie_companies, movie_keyword, keyword, movie_link
		case 230:
			return 0;
		// title, cast_info, movie_info_idx, movie_keyword, keyword
		case 122:
			return 18;
		// title, cast_info, movie_info_idx, movie_keyword, movie_link
		case 186:
			return 0;
		// title, cast_info, movie_keyword, keyword, movie_link
		case 234:
			return 0;
		// title, movie_info_idx, movie_keyword, keyword, movie_link
		case 242:
			return 0;
		// title, movie_companies, cast_info, movie_info_idx, movie_keyword, keyword
		case 126:
			return 6;
		// title, movie_companies, cast_info, movie_info_idx, movie_keyword, movie_link
		case 190:
			return 0;
		// title, movie_companies, cast_info, movie_keyword, keyword, movie_link
		case 238:
			return 0;
		// title, movie_companies, movie_info_idx, movie_keyword, keyword, movie_link
		case 246:
			return 0;
		// title, cast_info, movie_info_idx, movie_keyword, keyword, movie_link
		case 250:
			return 0;
		// title, movie_companies, cast_info, movie_info_idx, movie_keyword, keyword, movie_link
		case 254:
			return 0;
	};
}

// [title, movie_companies, cast_info, movie_info_idx, movie_keyword, keyword, movie_link, ]
double
get_truth_cardinality_6joins_query_2(int total_relids)
{
	switch (total_relids) {
		// title
		case 2:
			return 151511;
		// movie_companies
		case 4:
			return 2054355;
		// cast_info
		case 8:
			return 4008037;
		// movie_info_idx
		case 16:
			return 377871;
		// movie_keyword
		case 32:
			return 3484458;
		// keyword
		case 64:
			return 134170;
		// movie_link
		case 128:
			return 16088;
		// title, movie_companies
		case 6:
			return 289940;
		// title, cast_info
		case 10:
			return 60728;
		// title, movie_info_idx
		case 18:
			return 9;
		// title, movie_keyword
		case 34:
			return 268874;
		// title, movie_link
		case 130:
			return 0;
		// movie_keyword, keyword
		case 96:
			return 3484458;
		// title, movie_companies, cast_info
		case 14:
			return 159980;
		// title, movie_companies, movie_info_idx
		case 22:
			return 3;
		// title, movie_companies, movie_keyword
		case 38:
			return 1309603;
		// title, movie_companies, movie_link
		case 134:
			return 0;
		// title, cast_info, movie_info_idx
		case 26:
			return 12;
		// title, cast_info, movie_keyword
		case 42:
			return 301666;
		// title, cast_info, movie_link
		case 138:
			return 0;
		// title, movie_info_idx, movie_keyword
		case 50:
			return 27;
		// title, movie_info_idx, movie_link
		case 146:
			return 0;
		// title, movie_keyword, keyword
		case 98:
			return 268874;
		// title, movie_keyword, movie_link
		case 162:
			return 0;
		// title, movie_companies, cast_info, movie_info_idx
		case 30:
			return 6;
		// title, movie_companies, cast_info, movie_keyword
		case 46:
			return 1677292;
		// title, movie_companies, cast_info, movie_link
		case 142:
			return 0;
		// title, movie_companies, movie_info_idx, movie_keyword
		case 54:
			return 3;
		// title, movie_companies, movie_info_idx, movie_link
		case 150:
			return 0;
		// title, movie_companies, movie_keyword, keyword
		case 102:
			return 1309603;
		// title, movie_companies, movie_keyword, movie_link
		case 166:
			return 0;
		// title, cast_info, movie_info_idx, movie_keyword
		case 58:
			return 18;
		// title, cast_info, movie_info_idx, movie_link
		case 154:
			return 0;
		// title, cast_info, movie_keyword, keyword
		case 106:
			return 301666;
		// title, cast_info, movie_keyword, movie_link
		case 170:
			return 0;
		// title, movie_info_idx, movie_keyword, keyword
		case 114:
			return 27;
		// title, movie_info_idx, movie_keyword, movie_link
		case 178:
			return 0;
		// title, movie_keyword, keyword, movie_link
		case 226:
			return 0;
		// title, movie_companies, cast_info, movie_info_idx, movie_keyword
		case 62:
			return 6;
		// title, movie_companies, cast_info, movie_info_idx, movie_link
		case 158:
			return 0;
		// title, movie_companies, cast_info, movie_keyword, keyword
		case 110:
			return 1677292;
		// title, movie_companies, cast_info, movie_keyword, movie_link
		case 174:
			return 0;
		// title, movie_companies, movie_info_idx, movie_keyword, keyword
		case 118:
			return 3;
		// title, movie_companies, movie_info_idx, movie_keyword, movie_link
		case 182:
			return 0;
		// title, movie_companies, movie_keyword, keyword, movie_link
		case 230:
			return 0;
		// title, cast_info, movie_info_idx, movie_keyword, keyword
		case 122:
			return 18;
		// title, cast_info, movie_info_idx, movie_keyword, movie_link
		case 186:
			return 0;
		// title, cast_info, movie_keyword, keyword, movie_link
		case 234:
			return 0;
		// title, movie_info_idx, movie_keyword, keyword, movie_link
		case 242:
			return 0;
		// title, movie_companies, cast_info, movie_info_idx, movie_keyword, keyword
		case 126:
			return 6;
		// title, movie_companies, cast_info, movie_info_idx, movie_keyword, movie_link
		case 190:
			return 0;
		// title, movie_companies, cast_info, movie_keyword, keyword, movie_link
		case 238:
			return 0;
		// title, movie_companies, movie_info_idx, movie_keyword, keyword, movie_link
		case 246:
			return 0;
		// title, cast_info, movie_info_idx, movie_keyword, keyword, movie_link
		case 250:
			return 0;
		// title, movie_companies, cast_info, movie_info_idx, movie_keyword, keyword, movie_link
		case 254:
			return 0;
	};
}

// [title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword, movie_link, ]
double
get_truth_cardinality_6joins_query_3(int total_relids)
{
	switch (total_relids) {
		// title
		case 2:
			return 101194;
		// movie_companies
		case 4:
			return 776679;
		// cast_info
		case 8:
			return 2728943;
		// movie_info
		case 16:
			return 2754826;
		// movie_info_idx
		case 32:
			return 1294471;
		// movie_keyword
		case 64:
			return 2253065;
		// movie_link
		case 128:
			return 9542;
		// title, movie_companies
		case 6:
			return 35118;
		// title, cast_info
		case 10:
			return 45433;
		// title, movie_info
		case 18:
			return 44427;
		// title, movie_info_idx
		case 34:
			return 18537;
		// title, movie_keyword
		case 66:
			return 22295;
		// title, movie_link
		case 130:
			return 0;
		// title, movie_companies, cast_info
		case 14:
			return 17212;
		// title, movie_companies, movie_info
		case 22:
			return 38519;
		// title, movie_companies, movie_info_idx
		case 38:
			return 12186;
		// title, movie_companies, movie_keyword
		case 70:
			return 56175;
		// title, movie_companies, movie_link
		case 134:
			return 0;
		// title, cast_info, movie_info
		case 26:
			return 47490;
		// title, cast_info, movie_info_idx
		case 42:
			return 15066;
		// title, cast_info, movie_keyword
		case 74:
			return 30615;
		// title, cast_info, movie_link
		case 138:
			return 0;
		// title, movie_info, movie_info_idx
		case 50:
			return 33747;
		// title, movie_info, movie_keyword
		case 82:
			return 103340;
		// title, movie_info, movie_link
		case 146:
			return 0;
		// title, movie_info_idx, movie_keyword
		case 98:
			return 27411;
		// title, movie_info_idx, movie_link
		case 162:
			return 0;
		// title, movie_keyword, movie_link
		case 194:
			return 0;
		// title, movie_companies, cast_info, movie_info
		case 30:
			return 76260;
		// title, movie_companies, cast_info, movie_info_idx
		case 46:
			return 14679;
		// title, movie_companies, cast_info, movie_keyword
		case 78:
			return 126039;
		// title, movie_companies, cast_info, movie_link
		case 142:
			return 0;
		// title, movie_companies, movie_info, movie_info_idx
		case 54:
			return 78585;
		// title, movie_companies, movie_info, movie_keyword
		case 86:
			return 1170931;
		// title, movie_companies, movie_info, movie_link
		case 150:
			return 0;
		// title, movie_companies, movie_info_idx, movie_keyword
		case 102:
			return 129633;
		// title, movie_companies, movie_info_idx, movie_link
		case 166:
			return 0;
		// title, movie_companies, movie_keyword, movie_link
		case 198:
			return 0;
		// title, cast_info, movie_info, movie_info_idx
		case 58:
			return 63063;
		// title, cast_info, movie_info, movie_keyword
		case 90:
			return 310451;
		// title, cast_info, movie_info, movie_link
		case 154:
			return 0;
		// title, cast_info, movie_info_idx, movie_keyword
		case 106:
			return 44367;
		// title, cast_info, movie_info_idx, movie_link
		case 170:
			return 0;
		// title, cast_info, movie_keyword, movie_link
		case 202:
			return 0;
		// title, movie_info, movie_info_idx, movie_keyword
		case 114:
			return 277353;
		// title, movie_info, movie_info_idx, movie_link
		case 178:
			return 0;
		// title, movie_info, movie_keyword, movie_link
		case 210:
			return 0;
		// title, movie_info_idx, movie_keyword, movie_link
		case 226:
			return 0;
		// title, movie_companies, cast_info, movie_info, movie_info_idx
		case 62:
			return 207447;
		// title, movie_companies, cast_info, movie_info, movie_keyword
		case 94:
			return 4441683;
		// title, movie_companies, cast_info, movie_info, movie_link
		case 158:
			return 0;
		// title, movie_companies, cast_info, movie_info_idx, movie_keyword
		case 110:
			return 328362;
		// title, movie_companies, cast_info, movie_info_idx, movie_link
		case 174:
			return 0;
		// title, movie_companies, cast_info, movie_keyword, movie_link
		case 206:
			return 0;
		// title, movie_companies, movie_info, movie_info_idx, movie_keyword
		case 118:
			return 3476061;
		// title, movie_companies, movie_info, movie_info_idx, movie_link
		case 182:
			return 0;
		// title, movie_companies, movie_info, movie_keyword, movie_link
		case 214:
			return 0;
		// title, movie_companies, movie_info_idx, movie_keyword, movie_link
		case 230:
			return 0;
		// title, cast_info, movie_info, movie_info_idx, movie_keyword
		case 122:
			return 879081;
		// title, cast_info, movie_info, movie_info_idx, movie_link
		case 186:
			return 0;
		// title, cast_info, movie_info, movie_keyword, movie_link
		case 218:
			return 0;
		// title, cast_info, movie_info_idx, movie_keyword, movie_link
		case 234:
			return 0;
		// title, movie_info, movie_info_idx, movie_keyword, movie_link
		case 242:
			return 0;
		// title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword
		case 126:
			return 13263750;
		// title, movie_companies, cast_info, movie_info, movie_info_idx, movie_link
		case 190:
			return 0;
		// title, movie_companies, cast_info, movie_info, movie_keyword, movie_link
		case 222:
			return 0;
		// title, movie_companies, cast_info, movie_info_idx, movie_keyword, movie_link
		case 238:
			return 0;
		// title, movie_companies, movie_info, movie_info_idx, movie_keyword, movie_link
		case 246:
			return 0;
		// title, cast_info, movie_info, movie_info_idx, movie_keyword, movie_link
		case 250:
			return 0;
		// title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword, movie_link
		case 254:
			return 0;
	};
}

// [title, movie_companies, movie_info, movie_info_idx, movie_keyword, keyword, movie_link, ]
double
get_truth_cardinality_6joins_query_4(int total_relids)
{
	switch (total_relids) {
		// title
		case 2:
			return 924605;
		// movie_companies
		case 4:
			return 732951;
		// movie_info
		case 8:
			return 474443;
		// movie_info_idx
		case 16:
			return 868475;
		// movie_keyword
		case 32:
			return 3048560;
		// keyword
		case 64:
			return 134170;
		// movie_link
		case 128:
			return 10429;
		// title, movie_companies
		case 6:
			return 351459;
		// title, movie_info
		case 10:
			return 355817;
		// title, movie_info_idx
		case 18:
			return 366666;
		// title, movie_keyword
		case 34:
			return 1430198;
		// title, movie_link
		case 130:
			return 4048;
		// movie_keyword, keyword
		case 96:
			return 3048560;
		// title, movie_companies, movie_info
		case 14:
			return 267953;
		// title, movie_companies, movie_info_idx
		case 22:
			return 554028;
		// title, movie_companies, movie_keyword
		case 38:
			return 4766771;
		// title, movie_companies, movie_link
		case 134:
			return 18832;
		// title, movie_info, movie_info_idx
		case 26:
			return 214563;
		// title, movie_info, movie_keyword
		case 42:
			return 1126037;
		// title, movie_info, movie_link
		case 138:
			return 2857;
		// title, movie_info_idx, movie_keyword
		case 50:
			return 2355993;
		// title, movie_info_idx, movie_link
		case 146:
			return 10656;
		// title, movie_keyword, keyword
		case 98:
			return 1430198;
		// title, movie_keyword, movie_link
		case 162:
			return 55035;
		// title, movie_companies, movie_info, movie_info_idx
		case 30:
			return 490581;
		// title, movie_companies, movie_info, movie_keyword
		case 46:
			return 5429029;
		// title, movie_companies, movie_info, movie_link
		case 142:
			return 21031;
		// title, movie_companies, movie_info_idx, movie_keyword
		case 54:
			return 13676310;
		// title, movie_companies, movie_info_idx, movie_link
		case 150:
			return 55836;
		// title, movie_companies, movie_keyword, keyword
		case 102:
			return 4766771;
		// title, movie_companies, movie_keyword, movie_link
		case 166:
			return 470549;
		// title, movie_info, movie_info_idx, movie_keyword
		case 58:
			return 2039916;
		// title, movie_info, movie_info_idx, movie_link
		case 154:
			return 8259;
		// title, movie_info, movie_keyword, keyword
		case 106:
			return 1126037;
		// title, movie_info, movie_keyword, movie_link
		case 170:
			return 51769;
		// title, movie_info_idx, movie_keyword, keyword
		case 114:
			return 2355993;
		// title, movie_info_idx, movie_keyword, movie_link
		case 178:
			return 163164;
		// title, movie_keyword, keyword, movie_link
		case 226:
			return 55035;
		// title, movie_companies, movie_info, movie_info_idx, movie_keyword
		case 62:
			return 15873720;
		// title, movie_companies, movie_info, movie_info_idx, movie_link
		case 158:
			return 62832;
		// title, movie_companies, movie_info, movie_keyword, keyword
		case 110:
			return 5429029;
		// title, movie_companies, movie_info, movie_keyword, movie_link
		case 174:
			return 518386;
		// title, movie_companies, movie_info_idx, movie_keyword, keyword
		case 118:
			return 13676310;
		// title, movie_companies, movie_info_idx, movie_keyword, movie_link
		case 182:
			return 1410744;
		// title, movie_companies, movie_keyword, keyword, movie_link
		case 230:
			return 470549;
		// title, movie_info, movie_info_idx, movie_keyword, keyword
		case 122:
			return 2039916;
		// title, movie_info, movie_info_idx, movie_keyword, movie_link
		case 186:
			return 154812;
		// title, movie_info, movie_keyword, keyword, movie_link
		case 234:
			return 51769;
		// title, movie_info_idx, movie_keyword, keyword, movie_link
		case 242:
			return 163164;
		// title, movie_companies, movie_info, movie_info_idx, movie_keyword, keyword
		case 126:
			return 15873720;
		// title, movie_companies, movie_info, movie_info_idx, movie_keyword, movie_link
		case 190:
			return 1554774;
		// title, movie_companies, movie_info, movie_keyword, keyword, movie_link
		case 238:
			return 518386;
		// title, movie_companies, movie_info_idx, movie_keyword, keyword, movie_link
		case 246:
			return 1410744;
		// title, movie_info, movie_info_idx, movie_keyword, keyword, movie_link
		case 250:
			return 154812;
		// title, movie_companies, movie_info, movie_info_idx, movie_keyword, keyword, movie_link
		case 254:
			return 1554774;
	};
}

// [title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword, keyword, ]
double
get_truth_cardinality_6joins_query_5(int total_relids)
{
	switch (total_relids) {
		// title
		case 2:
			return 2455780;
		// movie_companies
		case 4:
			return 1777005;
		// cast_info
		case 8:
			return 316118;
		// movie_info
		case 16:
			return 3224148;
		// movie_info_idx
		case 32:
			return 880658;
		// movie_keyword
		case 64:
			return 1;
		// keyword
		case 128:
			return 134170;
		// title, movie_companies
		case 6:
			return 1754884;
		// title, cast_info
		case 10:
			return 313691;
		// title, movie_info
		case 18:
			return 3210310;
		// title, movie_info_idx
		case 34:
			return 880631;
		// title, movie_keyword
		case 66:
			return 1;
		// movie_keyword, keyword
		case 192:
			return 1;
		// title, movie_companies, cast_info
		case 14:
			return 509280;
		// title, movie_companies, movie_info
		case 22:
			return 19987012;
		// title, movie_companies, movie_info_idx
		case 38:
			return 2076720;
		// title, movie_companies, movie_keyword
		case 70:
			return 3;
		// title, cast_info, movie_info
		case 26:
			return 1637596;
		// title, cast_info, movie_info_idx
		case 42:
			return 273269;
		// title, cast_info, movie_keyword
		case 74:
			return 1;
		// title, movie_info, movie_info_idx
		case 50:
			return 5815203;
		// title, movie_info, movie_keyword
		case 82:
			return 45;
		// title, movie_info_idx, movie_keyword
		case 98:
			return 3;
		// title, movie_keyword, keyword
		case 194:
			return 1;
		// title, movie_companies, cast_info, movie_info
		case 30:
			return 15878330;
		// title, movie_companies, cast_info, movie_info_idx
		case 46:
			return 998856;
		// title, movie_companies, cast_info, movie_keyword
		case 78:
			return 3;
		// title, movie_companies, movie_info, movie_info_idx
		case 54:
			return 56827044;
		// title, movie_companies, movie_info, movie_keyword
		case 86:
			return 135;
		// title, movie_companies, movie_info_idx, movie_keyword
		case 102:
			return 9;
		// title, movie_companies, movie_keyword, keyword
		case 198:
			return 3;
		// title, cast_info, movie_info, movie_info_idx
		case 58:
			return 3892966;
		// title, cast_info, movie_info, movie_keyword
		case 90:
			return 45;
		// title, cast_info, movie_info_idx, movie_keyword
		case 106:
			return 3;
		// title, cast_info, movie_keyword, keyword
		case 202:
			return 1;
		// title, movie_info, movie_info_idx, movie_keyword
		case 114:
			return 135;
		// title, movie_info, movie_keyword, keyword
		case 210:
			return 45;
		// title, movie_info_idx, movie_keyword, keyword
		case 226:
			return 3;
		// title, movie_companies, cast_info, movie_info, movie_info_idx
		case 62:
			return 47241050;
		// title, movie_companies, cast_info, movie_info, movie_keyword
		case 94:
			return 135;
		// title, movie_companies, cast_info, movie_info_idx, movie_keyword
		case 110:
			return 9;
		// title, movie_companies, cast_info, movie_keyword, keyword
		case 206:
			return 3;
		// title, movie_companies, movie_info, movie_info_idx, movie_keyword
		case 118:
			return 405;
		// title, movie_companies, movie_info, movie_keyword, keyword
		case 214:
			return 135;
		// title, movie_companies, movie_info_idx, movie_keyword, keyword
		case 230:
			return 9;
		// title, cast_info, movie_info, movie_info_idx, movie_keyword
		case 122:
			return 135;
		// title, cast_info, movie_info, movie_keyword, keyword
		case 218:
			return 45;
		// title, cast_info, movie_info_idx, movie_keyword, keyword
		case 234:
			return 3;
		// title, movie_info, movie_info_idx, movie_keyword, keyword
		case 242:
			return 135;
		// title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword
		case 126:
			return 405;
		// title, movie_companies, cast_info, movie_info, movie_keyword, keyword
		case 222:
			return 135;
		// title, movie_companies, cast_info, movie_info_idx, movie_keyword, keyword
		case 238:
			return 9;
		// title, movie_companies, movie_info, movie_info_idx, movie_keyword, keyword
		case 246:
			return 405;
		// title, cast_info, movie_info, movie_info_idx, movie_keyword, keyword
		case 250:
			return 135;
		// title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword, keyword
		case 254:
			return 405;
	};
}

// [title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword, keyword, ]
double
get_truth_cardinality_6joins_query_6(int total_relids)
{
	switch (total_relids) {
		// title
		case 2:
			return 1831;
		// movie_companies
		case 4:
			return 448239;
		// cast_info
		case 8:
			return 276403;
		// movie_info
		case 16:
			return 1325361;
		// movie_info_idx
		case 32:
			return 652233;
		// movie_keyword
		case 64:
			return 1593129;
		// keyword
		case 128:
			return 134170;
		// title, movie_companies
		case 6:
			return 965;
		// title, cast_info
		case 10:
			return 346;
		// title, movie_info
		case 18:
			return 1846;
		// title, movie_info_idx
		case 34:
			return 2006;
		// title, movie_keyword
		case 66:
			return 9298;
		// movie_keyword, keyword
		case 192:
			return 1593129;
		// title, movie_companies, cast_info
		case 14:
			return 183;
		// title, movie_companies, movie_info
		case 22:
			return 987;
		// title, movie_companies, movie_info_idx
		case 38:
			return 1512;
		// title, movie_companies, movie_keyword
		case 70:
			return 10192;
		// title, cast_info, movie_info
		case 26:
			return 351;
		// title, cast_info, movie_info_idx
		case 42:
			return 635;
		// title, cast_info, movie_keyword
		case 74:
			return 2924;
		// title, movie_info, movie_info_idx
		case 50:
			return 2036;
		// title, movie_info, movie_keyword
		case 82:
			return 9320;
		// title, movie_info_idx, movie_keyword
		case 98:
			return 24126;
		// title, movie_keyword, keyword
		case 194:
			return 9298;
		// title, movie_companies, cast_info, movie_info
		case 30:
			return 185;
		// title, movie_companies, cast_info, movie_info_idx
		case 46:
			return 462;
		// title, movie_companies, cast_info, movie_keyword
		case 78:
			return 3160;
		// title, movie_companies, movie_info, movie_info_idx
		case 54:
			return 1548;
		// title, movie_companies, movie_info, movie_keyword
		case 86:
			return 10235;
		// title, movie_companies, movie_info_idx, movie_keyword
		case 102:
			return 26895;
		// title, movie_companies, movie_keyword, keyword
		case 198:
			return 10192;
		// title, cast_info, movie_info, movie_info_idx
		case 58:
			return 644;
		// title, cast_info, movie_info, movie_keyword
		case 90:
			return 2924;
		// title, cast_info, movie_info_idx, movie_keyword
		case 106:
			return 8019;
		// title, cast_info, movie_keyword, keyword
		case 202:
			return 2924;
		// title, movie_info, movie_info_idx, movie_keyword
		case 114:
			return 24189;
		// title, movie_info, movie_keyword, keyword
		case 210:
			return 9320;
		// title, movie_info_idx, movie_keyword, keyword
		case 226:
			return 24126;
		// title, movie_companies, cast_info, movie_info, movie_info_idx
		case 62:
			return 468;
		// title, movie_companies, cast_info, movie_info, movie_keyword
		case 94:
			return 3160;
		// title, movie_companies, cast_info, movie_info_idx, movie_keyword
		case 110:
			return 8724;
		// title, movie_companies, cast_info, movie_keyword, keyword
		case 206:
			return 3160;
		// title, movie_companies, movie_info, movie_info_idx, movie_keyword
		case 118:
			return 27021;
		// title, movie_companies, movie_info, movie_keyword, keyword
		case 214:
			return 10235;
		// title, movie_companies, movie_info_idx, movie_keyword, keyword
		case 230:
			return 26895;
		// title, cast_info, movie_info, movie_info_idx, movie_keyword
		case 122:
			return 8019;
		// title, cast_info, movie_info, movie_keyword, keyword
		case 218:
			return 2924;
		// title, cast_info, movie_info_idx, movie_keyword, keyword
		case 234:
			return 8019;
		// title, movie_info, movie_info_idx, movie_keyword, keyword
		case 242:
			return 24189;
		// title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword
		case 126:
			return 8724;
		// title, movie_companies, cast_info, movie_info, movie_keyword, keyword
		case 222:
			return 3160;
		// title, movie_companies, cast_info, movie_info_idx, movie_keyword, keyword
		case 238:
			return 8724;
		// title, movie_companies, movie_info, movie_info_idx, movie_keyword, keyword
		case 246:
			return 27021;
		// title, cast_info, movie_info, movie_info_idx, movie_keyword, keyword
		case 250:
			return 8019;
		// title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword, keyword
		case 254:
			return 8724;
	};
}

// [title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword, keyword, ]
double
get_truth_cardinality_6joins_query_7(int total_relids)
{
    switch (total_relids) {
        // title
        case 2:
            return 2456186;
            // movie_companies
        case 4:
            return 1222722;
            // cast_info
        case 8:
            return 773674;
            // movie_info
        case 16:
            return 5073256;
            // movie_info_idx
        case 32:
            return 729304;
            // movie_keyword
        case 64:
            return 1;
            // keyword
        case 128:
            return 134170;
            // title, movie_companies
        case 6:
            return 1218414;
            // title, cast_info
        case 10:
            return 763713;
            // title, movie_info
        case 18:
            return 5049047;
            // title, movie_info_idx
        case 34:
            return 729214;
            // title, movie_keyword
        case 66:
            return 1;
            // movie_keyword, keyword
        case 192:
            return 1;
            // title, movie_companies, cast_info
        case 14:
            return 785115;
            // title, movie_companies, movie_info
        case 22:
            return 27404409;
            // title, movie_companies, movie_info_idx
        case 38:
            return 1373290;
            // title, movie_companies, movie_keyword
        case 70:
            return 12;
            // title, cast_info, movie_info
        case 26:
            return 3477546;
            // title, cast_info, movie_info_idx
        case 42:
            return 543883;
            // title, cast_info, movie_keyword
        case 74:
            return 1;
            // title, movie_info, movie_info_idx
        case 50:
            return 6118004;
            // title, movie_info, movie_keyword
        case 82:
            return 16;
            // title, movie_info_idx, movie_keyword
        case 98:
            return 3;
            // title, movie_keyword, keyword
        case 194:
            return 1;
            // title, movie_companies, cast_info, movie_info
        case 30:
            return 27596758;
            // title, movie_companies, cast_info, movie_info_idx
        case 46:
            return 1288677;
            // title, movie_companies, cast_info, movie_keyword
        case 78:
            return 12;
            // title, movie_companies, movie_info, movie_info_idx
        case 54:
            return 64643584;
            // title, movie_companies, movie_info, movie_keyword
        case 86:
            return 192;
            // title, movie_companies, movie_info_idx, movie_keyword
        case 102:
            return 36;
            // title, movie_companies, movie_keyword, keyword
        case 198:
            return 12;
            // title, cast_info, movie_info, movie_info_idx
        case 58:
            return 6051280;
            // title, cast_info, movie_info, movie_keyword
        case 90:
            return 16;
            // title, cast_info, movie_info_idx, movie_keyword
        case 106:
            return 3;
            // title, cast_info, movie_keyword, keyword
        case 202:
            return 1;
            // title, movie_info, movie_info_idx, movie_keyword
        case 114:
            return 48;
            // title, movie_info, movie_keyword, keyword
        case 210:
            return 16;
            // title, movie_info_idx, movie_keyword, keyword
        case 226:
            return 3;
            // title, movie_companies, cast_info, movie_info, movie_info_idx
        case 62:
            return 69562837;
            // title, movie_companies, cast_info, movie_info, movie_keyword
        case 94:
            return 192;
            // title, movie_companies, cast_info, movie_info_idx, movie_keyword
        case 110:
            return 36;
            // title, movie_companies, cast_info, movie_keyword, keyword
        case 206:
            return 12;
            // title, movie_companies, movie_info, movie_info_idx, movie_keyword
        case 118:
            return 576;
            // title, movie_companies, movie_info, movie_keyword, keyword
        case 214:
            return 192;
            // title, movie_companies, movie_info_idx, movie_keyword, keyword
        case 230:
            return 36;
            // title, cast_info, movie_info, movie_info_idx, movie_keyword
        case 122:
            return 48;
            // title, cast_info, movie_info, movie_keyword, keyword
        case 218:
            return 16;
            // title, cast_info, movie_info_idx, movie_keyword, keyword
        case 234:
            return 3;
            // title, movie_info, movie_info_idx, movie_keyword, keyword
        case 242:
            return 48;
            // title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword
        case 126:
            return 576;
            // title, movie_companies, cast_info, movie_info, movie_keyword, keyword
        case 222:
            return 192;
            // title, movie_companies, cast_info, movie_info_idx, movie_keyword, keyword
        case 238:
            return 36;
            // title, movie_companies, movie_info, movie_info_idx, movie_keyword, keyword
        case 246:
            return 576;
            // title, cast_info, movie_info, movie_info_idx, movie_keyword, keyword
        case 250:
            return 48;
            // title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword, keyword
        case 254:
            return 576;
    };
}

// [title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword, movie_link, ]
double
get_truth_cardinality_6joins_query_8(int total_relids)
{
    switch (total_relids) {
        // title
        case 2:
            return 160017;
            // movie_companies
        case 4:
            return 1996340;
            // cast_info
        case 8:
            return 2728943;
            // movie_info
        case 16:
            return 2550794;
            // movie_info_idx
        case 32:
            return 1380035;
            // movie_keyword
        case 64:
            return 2310056;
            // movie_link
        case 128:
            return 1246;
            // title, movie_companies
        case 6:
            return 93943;
            // title, cast_info
        case 10:
            return 173365;
            // title, movie_info
        case 18:
            return 101166;
            // title, movie_info_idx
        case 34:
            return 62055;
            // title, movie_keyword
        case 66:
            return 91669;
            // title, movie_link
        case 130:
            return 84;
            // title, movie_companies, cast_info
        case 14:
            return 154440;
            // title, movie_companies, movie_info
        case 22:
            return 755070;
            // title, movie_companies, movie_info_idx
        case 38:
            return 132148;
            // title, movie_companies, movie_keyword
        case 70:
            return 320463;
            // title, movie_companies, movie_link
        case 134:
            return 72;
            // title, cast_info, movie_info
        case 26:
            return 222246;
            // title, cast_info, movie_info_idx
        case 42:
            return 118153;
            // title, cast_info, movie_keyword
        case 74:
            return 198264;
            // title, cast_info, movie_link
        case 138:
            return 103;
            // title, movie_info, movie_info_idx
        case 50:
            return 195898;
            // title, movie_info, movie_keyword
        case 82:
            return 1334594;
            // title, movie_info, movie_link
        case 146:
            return 90;
            // title, movie_info_idx, movie_keyword
        case 98:
            return 177714;
            // title, movie_info_idx, movie_link
        case 162:
            return 156;
            // title, movie_keyword, movie_link
        case 194:
            return 66;
            // title, movie_companies, cast_info, movie_info
        case 30:
            return 2110643;
            // title, movie_companies, cast_info, movie_info_idx
        case 46:
            return 280472;
            // title, movie_companies, cast_info, movie_keyword
        case 78:
            return 832280;
            // title, movie_companies, cast_info, movie_link
        case 142:
            return 110;
            // title, movie_companies, movie_info, movie_info_idx
        case 54:
            return 2221202;
            // title, movie_companies, movie_info, movie_keyword
        case 86:
            return 19194416;
            // title, movie_companies, movie_info, movie_link
        case 150:
            return 88;
            // title, movie_companies, movie_info_idx, movie_keyword
        case 102:
            return 905066;
            // title, movie_companies, movie_info_idx, movie_link
        case 166:
            return 159;
            // title, movie_companies, movie_keyword, movie_link
        case 198:
            return 176;
            // title, cast_info, movie_info, movie_info_idx
        case 58:
            return 522612;
            // title, cast_info, movie_info, movie_keyword
        case 90:
            return 4162484;
            // title, cast_info, movie_info, movie_link
        case 154:
            return 148;
            // title, cast_info, movie_info_idx, movie_keyword
        case 106:
            return 450605;
            // title, cast_info, movie_info_idx, movie_link
        case 170:
            return 261;
            // title, cast_info, movie_keyword, movie_link
        case 202:
            return 180;
            // title, movie_info, movie_info_idx, movie_keyword
        case 114:
            return 3959535;
            // title, movie_info, movie_info_idx, movie_link
        case 178:
            return 183;
            // title, movie_info, movie_keyword, movie_link
        case 210:
            return 398;
            // title, movie_info_idx, movie_keyword, movie_link
        case 226:
            return 153;
            // title, movie_companies, cast_info, movie_info, movie_info_idx
        case 62:
            return 6288599;
            // title, movie_companies, cast_info, movie_info, movie_keyword
        case 94:
            return 57902616;
            // title, movie_companies, cast_info, movie_info, movie_link
        case 158:
            return 250;
            // title, movie_companies, cast_info, movie_info_idx, movie_keyword
        case 110:
            return 2439663;
            // title, movie_companies, cast_info, movie_info_idx, movie_link
        case 174:
            return 288;
            // title, movie_companies, cast_info, movie_keyword, movie_link
        case 206:
            return 710;
            // title, movie_companies, movie_info, movie_info_idx, movie_keyword
        case 118:
            return 59111363;
            // title, movie_companies, movie_info, movie_info_idx, movie_link
        case 182:
            return 201;
            // title, movie_companies, movie_info, movie_keyword, movie_link
        case 214:
            return 1344;
            // title, movie_companies, movie_info_idx, movie_keyword, movie_link
        case 230:
            return 489;
            // title, cast_info, movie_info, movie_info_idx, movie_keyword
        case 122:
            return 12442822;
            // title, cast_info, movie_info, movie_info_idx, movie_link
        case 186:
            return 372;
            // title, cast_info, movie_info, movie_keyword, movie_link
        case 218:
            return 1560;
            // title, cast_info, movie_info_idx, movie_keyword, movie_link
        case 234:
            return 540;
            // title, movie_info, movie_info_idx, movie_keyword, movie_link
        case 242:
            return 1179;
            // title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword
        case 126:
            return 176375129;
            // title, movie_companies, cast_info, movie_info, movie_info_idx, movie_link
        case 190:
            return 678;
            // title, movie_companies, cast_info, movie_info, movie_keyword, movie_link
        case 222:
            return 6210;
            // title, movie_companies, cast_info, movie_info_idx, movie_keyword, movie_link
        case 238:
            return 2130;
            // title, movie_companies, movie_info, movie_info_idx, movie_keyword, movie_link
        case 246:
            return 4023;
            // title, cast_info, movie_info, movie_info_idx, movie_keyword, movie_link
        case 250:
            return 4680;
            // title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword, movie_link
        case 254:
            return 18630;
    };
}

// [title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword, movie_link, ]
double
get_truth_cardinality_6joins_query_9(int total_relids)
{
    switch (total_relids) {
        // title
        case 2:
            return 16571;
            // movie_companies
        case 4:
            return 1894985;
            // cast_info
        case 8:
            return 898389;
            // movie_info
        case 16:
            return 2510346;
            // movie_info_idx
        case 32:
            return 1366293;
            // movie_keyword
        case 64:
            return 4523930;
            // movie_link
        case 128:
            return 23528;
            // title, movie_companies
        case 6:
            return 15592;
            // title, cast_info
        case 10:
            return 5968;
            // title, movie_info
        case 18:
            return 25086;
            // title, movie_info_idx
        case 34:
            return 12313;
            // title, movie_keyword
        case 66:
            return 38838;
            // title, movie_link
        case 130:
            return 159;
            // title, movie_companies, cast_info
        case 14:
            return 10118;
            // title, movie_companies, movie_info
        case 22:
            return 321507;
            // title, movie_companies, movie_info_idx
        case 38:
            return 26743;
            // title, movie_companies, movie_keyword
        case 70:
            return 231099;
            // title, movie_companies, movie_link
        case 134:
            return 555;
            // title, cast_info, movie_info
        case 26:
            return 22011;
            // title, cast_info, movie_info_idx
        case 42:
            return 8778;
            // title, cast_info, movie_keyword
        case 74:
            return 29515;
            // title, cast_info, movie_link
        case 138:
            return 21;
            // title, movie_info, movie_info_idx
        case 50:
            return 70017;
            // title, movie_info, movie_keyword
        case 82:
            return 1347901;
            // title, movie_info, movie_link
        case 146:
            return 620;
            // title, movie_info_idx, movie_keyword
        case 98:
            return 93117;
            // title, movie_info_idx, movie_link
        case 162:
            return 159;
            // title, movie_keyword, movie_link
        case 194:
            return 905;
            // title, movie_companies, cast_info, movie_info
        case 30:
            return 319701;
            // title, movie_companies, cast_info, movie_info_idx
        case 46:
            return 22118;
            // title, movie_companies, cast_info, movie_keyword
        case 78:
            return 218405;
            // title, movie_companies, cast_info, movie_link
        case 142:
            return 32;
            // title, movie_companies, movie_info, movie_info_idx
        case 54:
            return 1017250;
            // title, movie_companies, movie_info, movie_keyword
        case 86:
            return 30014834;
            // title, movie_companies, movie_info, movie_link
        case 150:
            return 6286;
            // title, movie_companies, movie_info_idx, movie_keyword
        case 102:
            return 689697;
            // title, movie_companies, movie_info_idx, movie_link
        case 166:
            return 1548;
            // title, movie_companies, movie_keyword, movie_link
        case 198:
            return 4626;
            // title, cast_info, movie_info, movie_info_idx
        case 58:
            return 65498;
            // title, cast_info, movie_info, movie_keyword
        case 90:
            return 1349167;
            // title, cast_info, movie_info, movie_link
        case 154:
            return 65;
            // title, cast_info, movie_info_idx, movie_keyword
        case 106:
            return 82501;
            // title, cast_info, movie_info_idx, movie_link
        case 170:
            return 57;
            // title, cast_info, movie_keyword, movie_link
        case 202:
            return 273;
            // title, movie_info, movie_info_idx, movie_keyword
        case 114:
            return 4204015;
            // title, movie_info, movie_info_idx, movie_link
        case 178:
            return 1164;
            // title, movie_info, movie_keyword, movie_link
        case 210:
            return 5465;
            // title, movie_info_idx, movie_keyword, movie_link
        case 226:
            return 1128;
            // title, movie_companies, cast_info, movie_info, movie_info_idx
        case 62:
            return 1015022;
            // title, movie_companies, cast_info, movie_info, movie_keyword
        case 94:
            return 30130086;
            // title, movie_companies, cast_info, movie_info, movie_link
        case 158:
            return 75;
            // title, movie_companies, cast_info, movie_info_idx, movie_keyword
        case 110:
            return 669452;
            // title, movie_companies, cast_info, movie_info_idx, movie_link
        case 174:
            return 75;
            // title, movie_companies, cast_info, movie_keyword, movie_link
        case 206:
            return 350;
            // title, movie_companies, movie_info, movie_info_idx, movie_keyword
        case 118:
            return 98975649;
            // title, movie_companies, movie_info, movie_info_idx, movie_link
        case 182:
            return 18585;
            // title, movie_companies, movie_info, movie_keyword, movie_link
        case 214:
            return 54657;
            // title, movie_companies, movie_info_idx, movie_keyword, movie_link
        case 230:
            return 11679;
            // title, cast_info, movie_info, movie_info_idx, movie_keyword
        case 122:
            return 4232813;
            // title, cast_info, movie_info, movie_info_idx, movie_link
        case 186:
            return 192;
            // title, cast_info, movie_info, movie_keyword, movie_link
        case 218:
            return 1225;
            // title, cast_info, movie_info_idx, movie_keyword, movie_link
        case 234:
            return 774;
            // title, movie_info, movie_info_idx, movie_keyword, movie_link
        case 242:
            return 10131;
            // title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword
        case 126:
            return 99298994;
            // title, movie_companies, cast_info, movie_info, movie_info_idx, movie_link
        case 190:
            return 213;
            // title, movie_companies, cast_info, movie_info, movie_keyword, movie_link
        case 222:
            return 1285;
            // title, movie_companies, cast_info, movie_info_idx, movie_keyword, movie_link
        case 238:
            return 897;
            // title, movie_companies, movie_info, movie_info_idx, movie_keyword, movie_link
        case 246:
            return 149385;
            // title, cast_info, movie_info, movie_info_idx, movie_keyword, movie_link
        case 250:
            return 3657;
            // title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword, movie_link
        case 254:
            return 3783;
    };
}

// [title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword, movie_link, ]
double
get_truth_cardinality_6joins_query_10(int total_relids)
{
    switch (total_relids) {
        // title
        case 2:
            return 2452703;
            // movie_companies
        case 4:
            return 832941;
            // cast_info
        case 8:
            return 3121735;
            // movie_info
        case 16:
            return 18214;
            // movie_info_idx
        case 32:
            return 1380035;
            // movie_keyword
        case 64:
            return 2469841;
            // movie_link
        case 128:
            return 5454;
            // title, movie_companies
        case 6:
            return 829064;
            // title, cast_info
        case 10:
            return 3073679;
            // title, movie_info
        case 18:
            return 18213;
            // title, movie_info_idx
        case 34:
            return 1379852;
            // title, movie_keyword
        case 66:
            return 2452086;
            // title, movie_link
        case 130:
            return 5412;
            // title, movie_companies, cast_info
        case 14:
            return 4272087;
            // title, movie_companies, movie_info
        case 22:
            return 137840;
            // title, movie_companies, movie_info_idx
        case 38:
            return 1448534;
            // title, movie_companies, movie_keyword
        case 70:
            return 12394802;
            // title, movie_companies, movie_link
        case 134:
            return 11231;
            // title, cast_info, movie_info
        case 26:
            return 531702;
            // title, cast_info, movie_info_idx
        case 42:
            return 4482363;
            // title, cast_info, movie_keyword
        case 74:
            return 17053333;
            // title, cast_info, movie_link
        case 138:
            return 21147;
            // title, movie_info, movie_info_idx
        case 50:
            return 54926;
            // title, movie_info, movie_keyword
        case 82:
            return 723681;
            // title, movie_info, movie_link
        case 146:
            return 5;
            // title, movie_info_idx, movie_keyword
        case 98:
            return 5474320;
            // title, movie_info_idx, movie_link
        case 162:
            return 9696;
            // title, movie_keyword, movie_link
        case 194:
            return 41554;
            // title, movie_companies, cast_info, movie_info
        case 30:
            return 5105637;
            // title, movie_companies, cast_info, movie_info_idx
        case 46:
            return 11266078;
            // title, movie_companies, cast_info, movie_keyword
        case 78:
            return 241740618;
            // title, movie_companies, cast_info, movie_link
        case 142:
            return 80566;
            // title, movie_companies, movie_info, movie_info_idx
        case 54:
            return 421079;
            // title, movie_companies, movie_info, movie_keyword
        case 86:
            return 16247833;
            // title, movie_companies, movie_info, movie_link
        case 150:
            return 21;
            // title, movie_companies, movie_info_idx, movie_keyword
        case 102:
            return 36361299;
            // title, movie_companies, movie_info_idx, movie_link
        case 166:
            return 32826;
            // title, movie_companies, movie_keyword, movie_link
        case 198:
            return 369600;
            // title, cast_info, movie_info, movie_info_idx
        case 58:
            return 1628391;
            // title, cast_info, movie_info, movie_keyword
        case 90:
            return 27471477;
            // title, cast_info, movie_info, movie_link
        case 154:
            return 14;
            // title, cast_info, movie_info_idx, movie_keyword
        case 106:
            return 49633577;
            // title, cast_info, movie_info_idx, movie_link
        case 170:
            return 52158;
            // title, cast_info, movie_keyword, movie_link
        case 202:
            return 253810;
            // title, movie_info, movie_info_idx, movie_keyword
        case 114:
            return 2206660;
            // title, movie_info, movie_info_idx, movie_link
        case 178:
            return 15;
            // title, movie_info, movie_keyword, movie_link
        case 210:
            return 71;
            // title, movie_info_idx, movie_keyword, movie_link
        case 226:
            return 120672;
            // title, movie_companies, cast_info, movie_info, movie_info_idx
        case 62:
            return 15598706;
            // title, movie_companies, cast_info, movie_info, movie_keyword
        case 94:
            return 732992798;
            // title, movie_companies, cast_info, movie_info, movie_link
        case 158:
            return 66;
            // title, movie_companies, cast_info, movie_info_idx, movie_keyword
        case 110:
            return 737830643;
            // title, movie_companies, cast_info, movie_info_idx, movie_link
        case 174:
            return 240042;
            // title, movie_companies, cast_info, movie_keyword, movie_link
        case 206:
            return 2569919;
            // title, movie_companies, movie_info, movie_info_idx, movie_keyword
        case 118:
            return 49962496;
            // title, movie_companies, movie_info, movie_info_idx, movie_link
        case 182:
            return 63;
            // title, movie_companies, movie_info, movie_keyword, movie_link
        case 214:
            return 309;
            // title, movie_companies, movie_info_idx, movie_keyword, movie_link
        case 230:
            return 1107654;
            // title, cast_info, movie_info, movie_info_idx, movie_keyword
        case 122:
            return 83832652;
            // title, cast_info, movie_info, movie_info_idx, movie_link
        case 186:
            return 42;
            // title, cast_info, movie_info, movie_keyword, movie_link
        case 218:
            return 206;
            // title, cast_info, movie_info_idx, movie_keyword, movie_link
        case 234:
            return 754707;
            // title, movie_info, movie_info_idx, movie_keyword, movie_link
        case 242:
            return 213;
            // title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword
        case 126:
            return 2247463163;
            // title, movie_companies, cast_info, movie_info, movie_info_idx, movie_link
        case 190:
            return 198;
            // title, movie_companies, cast_info, movie_info, movie_keyword, movie_link
        case 222:
            return 1002;
            // title, movie_companies, cast_info, movie_info_idx, movie_keyword, movie_link
        case 238:
            return 7708053;
            // title, movie_companies, movie_info, movie_info_idx, movie_keyword, movie_link
        case 246:
            return 927;
            // title, cast_info, movie_info, movie_info_idx, movie_keyword, movie_link
        case 250:
            return 618;
            // title, movie_companies, cast_info, movie_info, movie_info_idx, movie_keyword, movie_link
        case 254:
            return 3006;
    };
}

// [lineorder, dates, ]
double
get_truth_cardinality_ssb_query_1_1(int total_relids)
{
    switch (total_relids) {
        // lineorder
        case 2:
            return 785941;
            // dates
        case 4:
            return 365;
            // lineorder, dates
        case 6:
            return 119142;
    };
}

// [lineorder, dates, ]
double
get_truth_cardinality_ssb_query_1_2(int total_relids)
{
    switch (total_relids) {
        // lineorder
        case 2:
            return 327924;
            // dates
        case 4:
            return 31;
            // lineorder, dates
        case 6:
            return 4287;
    };
}

// [lineorder, dates, ]
double
get_truth_cardinality_ssb_query_1_3(int total_relids)
{
    switch (total_relids) {
        // lineorder
        case 2:
            return 328056;
            // dates
        case 4:
            return 7;
            // lineorder, dates
        case 6:
            return 909;
    };
}

// [lineorder, dates, part, supplier, ]
double
get_truth_cardinality_ssb_query_1_4(int total_relids)
{
    switch (total_relids) {
        // lineorder
        case 2:
            return 6001171;
            // dates
        case 4:
            return 2556;
            // part
        case 8:
            return 7883;
            // supplier
        case 16:
            return 378;
            // lineorder, dates
        case 6:
            return 6001171;
            // lineorder, part
        case 10:
            return 236816;
            // lineorder, supplier
        case 18:
            return 1134371;
            // lineorder, dates, part
        case 14:
            return 236816;
            // lineorder, dates, supplier
        case 22:
            return 1134371;
            // lineorder, part, supplier
        case 26:
            return 44575;
            // lineorder, dates, part, supplier
        case 30:
            return 44575;
    };
}

// [lineorder, dates, part, supplier, ]
double
get_truth_cardinality_ssb_query_1_5(int total_relids)
{
    switch (total_relids) {
        // lineorder
        case 2:
            return 6001171;
            // dates
        case 4:
            return 2556;
            // part
        case 8:
            return 1584;
            // supplier
        case 16:
            return 449;
            // lineorder, dates
        case 6:
            return 6001171;
            // lineorder, part
        case 10:
            return 47301;
            // lineorder, supplier
        case 18:
            return 1347130;
            // lineorder, dates, part
        case 14:
            return 47301;
            // lineorder, dates, supplier
        case 22:
            return 1347130;
            // lineorder, part, supplier
        case 26:
            return 10542;
            // lineorder, dates, part, supplier
        case 30:
            return 10542;
    };
}

// [lineorder, dates, part, supplier, ]
double
get_truth_cardinality_ssb_query_1_6(int total_relids)
{
    switch (total_relids) {
        // lineorder
        case 2:
            return 6001171;
            // dates
        case 4:
            return 2556;
            // part
        case 8:
            return 216;
            // supplier
        case 16:
            return 380;
            // lineorder, dates
        case 6:
            return 6001171;
            // lineorder, part
        case 10:
            return 6497;
            // lineorder, supplier
        case 18:
            return 1140311;
            // lineorder, dates, part
        case 14:
            return 6497;
            // lineorder, dates, supplier
        case 22:
            return 1140311;
            // lineorder, part, supplier
        case 26:
            return 1234;
            // lineorder, dates, part, supplier
        case 30:
            return 1234;
    };
}

// [customer, lineorder, supplier, dates, ]
double
get_truth_cardinality_ssb_query_1_7(int total_relids)
{
    switch (total_relids) {
        // customer
        case 2:
            return 6051;
            // lineorder
        case 4:
            return 6001171;
            // supplier
        case 8:
            return 449;
            // dates
        case 16:
            return 2192;
            // customer, lineorder
        case 6:
            return 1207529;
            // lineorder, supplier
        case 12:
            return 1347130;
            // lineorder, dates
        case 20:
            return 5466178;
            // customer, lineorder, supplier
        case 14:
            return 270707;
            // customer, lineorder, dates
        case 22:
            return 1100441;
            // lineorder, supplier, dates
        case 28:
            return 1226959;
            // customer, lineorder, supplier, dates
        case 30:
            return 246764;
    };
}

// [customer, lineorder, supplier, dates, ]
double
get_truth_cardinality_ssb_query_1_8(int total_relids)
{
    switch (total_relids) {
        // customer
        case 2:
            return 1260;
            // lineorder
        case 4:
            return 6001171;
            // supplier
        case 8:
            return 76;
            // dates
        case 16:
            return 2192;
            // customer, lineorder
        case 6:
            return 246734;
            // lineorder, supplier
        case 12:
            return 228595;
            // lineorder, dates
        case 20:
            return 5466178;
            // customer, lineorder, supplier
        case 14:
            return 9434;
            // customer, lineorder, dates
        case 22:
            return 224157;
            // lineorder, supplier, dates
        case 28:
            return 208374;
            // customer, lineorder, supplier, dates
        case 30:
            return 8597;
    };
}

// [customer, lineorder, supplier, dates, ]
double
get_truth_cardinality_ssb_query_1_9(int total_relids)
{
    switch (total_relids) {
        // customer
        case 2:
            return 259;
            // lineorder
        case 4:
            return 6001171;
            // supplier
        case 8:
            return 19;
            // dates
        case 16:
            return 2192;
            // customer, lineorder
        case 6:
            return 50123;
            // lineorder, supplier
        case 12:
            return 56901;
            // lineorder, dates
        case 20:
            return 5466178;
            // customer, lineorder, supplier
        case 14:
            return 481;
            // customer, lineorder, dates
        case 22:
            return 45466;
            // lineorder, supplier, dates
        case 28:
            return 51893;
            // customer, lineorder, supplier, dates
        case 30:
            return 437;
    };
}

// [customer, lineorder, supplier, dates, ]
double
get_truth_cardinality_ssb_query_1_10(int total_relids)
{
    switch (total_relids) {
        // customer
        case 2:
            return 259;
            // lineorder
        case 4:
            return 6001171;
            // supplier
        case 8:
            return 19;
            // dates
        case 16:
            return 31;
            // customer, lineorder
        case 6:
            return 50123;
            // lineorder, supplier
        case 12:
            return 56901;
            // lineorder, dates
        case 20:
            return 77451;
            // customer, lineorder, supplier
        case 14:
            return 481;
            // customer, lineorder, dates
        case 22:
            return 639;
            // lineorder, supplier, dates
        case 28:
            return 762;
            // customer, lineorder, supplier, dates
        case 30:
            return 7;
    };
}

// [dates, customer, supplier, part, lineorder, ]
double
get_truth_cardinality_ssb_query_1_11(int total_relids)
{
    switch (total_relids) {
        // dates
        case 2:
            return 2556;
            // customer
        case 4:
            return 5992;
            // supplier
        case 8:
            return 378;
            // part
        case 16:
            return 80045;
            // lineorder
        case 32:
            return 6001171;
            // dates, lineorder
        case 34:
            return 6001171;
            // customer, lineorder
        case 36:
            return 1192672;
            // supplier, lineorder
        case 40:
            return 1134371;
            // part, lineorder
        case 48:
            return 2399737;
            // dates, customer, lineorder
        case 38:
            return 1192672;
            // dates, supplier, lineorder
        case 42:
            return 1134371;
            // dates, part, lineorder
        case 50:
            return 2399737;
            // customer, supplier, lineorder
        case 44:
            return 226191;
            // customer, part, lineorder
        case 52:
            return 477315;
            // supplier, part, lineorder
        case 56:
            return 452835;
            // dates, customer, supplier, lineorder
        case 46:
            return 226191;
            // dates, customer, part, lineorder
        case 54:
            return 477315;
            // dates, supplier, part, lineorder
        case 58:
            return 452835;
            // customer, supplier, part, lineorder
        case 60:
            return 90319;
            // dates, customer, supplier, part, lineorder
        case 62:
            return 90319;
    };
}

// [dates, customer, supplier, part, lineorder, ]
double
get_truth_cardinality_ssb_query_1_12(int total_relids)
{
    switch (total_relids) {
        // dates
        case 2:
            return 729;
            // customer
        case 4:
            return 5992;
            // supplier
        case 8:
            return 378;
            // part
        case 16:
            return 80045;
            // lineorder
        case 32:
            return 6001171;
            // dates, lineorder
        case 34:
            return 1444984;
            // customer, lineorder
        case 36:
            return 1192672;
            // supplier, lineorder
        case 40:
            return 1134371;
            // part, lineorder
        case 48:
            return 2399737;
            // dates, customer, lineorder
        case 38:
            return 289530;
            // dates, supplier, lineorder
        case 42:
            return 272894;
            // dates, part, lineorder
        case 50:
            return 576558;
            // customer, supplier, lineorder
        case 44:
            return 226191;
            // customer, part, lineorder
        case 52:
            return 477315;
            // supplier, part, lineorder
        case 56:
            return 452835;
            // dates, customer, supplier, lineorder
        case 46:
            return 54796;
            // dates, customer, part, lineorder
        case 54:
            return 115496;
            // dates, supplier, part, lineorder
        case 58:
            return 108814;
            // customer, supplier, part, lineorder
        case 60:
            return 90319;
            // dates, customer, supplier, part, lineorder
        case 62:
            return 21872;
    };
}

// [dates, customer, supplier, part, lineorder, ]
double
get_truth_cardinality_ssb_query_1_13(int total_relids)
{
    switch (total_relids) {
        // dates
        case 2:
            return 729;
            // customer
        case 4:
            return 5992;
            // supplier
        case 8:
            return 76;
            // part
        case 16:
            return 8029;
            // lineorder
        case 32:
            return 6001171;
            // dates, lineorder
        case 34:
            return 1444984;
            // customer, lineorder
        case 36:
            return 1192672;
            // supplier, lineorder
        case 40:
            return 228595;
            // part, lineorder
        case 48:
            return 240759;
            // dates, customer, lineorder
        case 38:
            return 289530;
            // dates, supplier, lineorder
        case 42:
            return 54887;
            // dates, part, lineorder
        case 50:
            return 57671;
            // customer, supplier, lineorder
        case 44:
            return 45638;
            // customer, part, lineorder
        case 52:
            return 48002;
            // supplier, part, lineorder
        case 56:
            return 9252;
            // dates, customer, supplier, lineorder
        case 46:
            return 11002;
            // dates, customer, part, lineorder
        case 54:
            return 11664;
            // dates, supplier, part, lineorder
        case 58:
            return 2174;
            // customer, supplier, part, lineorder
        case 60:
            return 1850;
            // dates, customer, supplier, part, lineorder
        case 62:
            return 468;
    };
}


