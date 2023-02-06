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
double get_truth_cardinality_job_query_1(int total_relids);
double get_truth_cardinality_job_query_2(int total_relids);
double get_truth_cardinality_job_query_3(int total_relids);
double get_truth_cardinality_job_query_4(int total_relids);
double get_truth_cardinality_job_query_5(int total_relids);
double get_truth_cardinality_job_query_6(int total_relids);
double get_truth_cardinality_job_query_7(int total_relids);
double get_truth_cardinality_job_query_8(int total_relids);
double get_truth_cardinality_job_query_9(int total_relids);
double get_truth_cardinality_job_query_10(int total_relids);
double get_truth_cardinality_job_query_11(int total_relids);
double get_truth_cardinality_job_query_12(int total_relids);
double get_truth_cardinality_job_query_13(int total_relids);
double get_truth_cardinality_job_query_14(int total_relids);
double get_truth_cardinality_job_query_15(int total_relids);
double get_truth_cardinality_job_query_16(int total_relids);
double get_truth_cardinality_job_query_17(int total_relids);
double get_truth_cardinality_job_query_18(int total_relids);
double get_truth_cardinality_job_query_19(int total_relids);
double get_truth_cardinality_job_query_20(int total_relids);
double get_truth_cardinality_job_query_21(int total_relids);
double get_truth_cardinality_job_query_22(int total_relids);
double get_truth_cardinality_job_query_23(int total_relids);
double get_truth_cardinality_job_query_24(int total_relids);
double get_truth_cardinality_job_query_25(int total_relids);
double get_truth_cardinality_job_query_26(int total_relids);

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
        case 3: // JOB in IMDB
            switch (query_order) {
                case 1:
                    return get_truth_cardinality_job_query_1(total_relids);
                case 2:
                    return get_truth_cardinality_job_query_2(total_relids);
                case 3:
                    return get_truth_cardinality_job_query_3(total_relids);
                case 4:
                    return get_truth_cardinality_job_query_4(total_relids);
                case 5:
                    return get_truth_cardinality_job_query_5(total_relids);
                case 6:
                    return get_truth_cardinality_job_query_6(total_relids);
                case 7:
                    return get_truth_cardinality_job_query_7(total_relids);
                case 8:
                    return get_truth_cardinality_job_query_8(total_relids);
                case 9:
                    return get_truth_cardinality_job_query_9(total_relids);
                case 10:
                    return get_truth_cardinality_job_query_10(total_relids);
                case 11:
                    return get_truth_cardinality_job_query_11(total_relids);
                case 12:
                    return get_truth_cardinality_job_query_12(total_relids);
                case 13:
                    return get_truth_cardinality_job_query_13(total_relids);
                case 14:
                    return get_truth_cardinality_job_query_14(total_relids);
                case 15:
                    return get_truth_cardinality_job_query_15(total_relids);
                case 16:
                    return get_truth_cardinality_job_query_16(total_relids);
                case 17:
                    return get_truth_cardinality_job_query_17(total_relids);
                case 18:
                    return get_truth_cardinality_job_query_18(total_relids);
                case 19:
                    return get_truth_cardinality_job_query_19(total_relids);
                case 20:
                    return get_truth_cardinality_job_query_20(total_relids);
                case 21:
                    return get_truth_cardinality_job_query_21(total_relids);
                case 22:
                    return get_truth_cardinality_job_query_22(total_relids);
                case 23:
                    return get_truth_cardinality_job_query_23(total_relids);
                case 24:
                    return get_truth_cardinality_job_query_24(total_relids);
                case 25:
                    return get_truth_cardinality_job_query_25(total_relids);
                case 26:
                    return get_truth_cardinality_job_query_26(total_relids);
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

// [company_type ct, info_type it, movie_companies mc, movie_info_idx mi_idx, title t, ]
double
get_truth_cardinality_job_query_1(int total_relids)
{
	switch (total_relids) {
		// company_type ct
		case 2:
			return 1;
		// info_type it
		case 4:
			return 1;
		// movie_companies mc
		case 8:
			return 28889;
		// movie_info_idx mi_idx
		case 16:
			return 1380035;
		// title t
		case 32:
			return 2528312;
		// company_type ct, movie_companies mc
		case 10:
			return 28657;
		// info_type it, movie_info_idx mi_idx
		case 20:
			return 250;
		// movie_companies mc, movie_info_idx mi_idx
		case 24:
			return 62658;
		// movie_companies mc, title t
		case 40:
			return 28889;
		// movie_info_idx mi_idx, title t
		case 48:
			return 1380035;
		// company_type ct, movie_companies mc, movie_info_idx mi_idx
		case 26:
			return 62017;
		// company_type ct, movie_companies mc, title t
		case 42:
			return 28657;
		// info_type it, movie_companies mc, movie_info_idx mi_idx
		case 28:
			return 147;
		// info_type it, movie_info_idx mi_idx, title t
		case 52:
			return 250;
		// movie_companies mc, movie_info_idx mi_idx, title t
		case 56:
			return 62658;
		// company_type ct, info_type it, movie_companies mc, movie_info_idx mi_idx
		case 30:
			return 142;
		// company_type ct, movie_companies mc, movie_info_idx mi_idx, title t
		case 58:
			return 62017;
		// info_type it, movie_companies mc, movie_info_idx mi_idx, title t
		case 60:
			return 147;
		// company_type ct, info_type it, movie_companies mc, movie_info_idx mi_idx, title t
		case 62:
			return 142;
	};
}

// [company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t, ]
double
get_truth_cardinality_job_query_2(int total_relids)
{
	switch (total_relids) {
		// company_name cn
		case 2:
			return 9775;
		// keyword k
		case 4:
			return 1;
		// movie_companies mc
		case 8:
			return 2609129;
		// movie_keyword mk
		case 16:
			return 4523930;
		// title t
		case 32:
			return 2528312;
		// company_name cn, movie_companies mc
		case 10:
			return 148132;
		// keyword k, movie_keyword mk
		case 20:
			return 41840;
		// movie_companies mc, movie_keyword mk
		case 24:
			return 34863638;
		// movie_companies mc, title t
		case 40:
			return 2609129;
		// movie_keyword mk, title t
		case 48:
			return 4523930;
		// company_name cn, movie_companies mc, movie_keyword mk
		case 26:
			return 2108405;
		// company_name cn, movie_companies mc, title t
		case 42:
			return 148132;
		// keyword k, movie_companies mc, movie_keyword mk
		case 28:
			return 148552;
		// keyword k, movie_keyword mk, title t
		case 52:
			return 41840;
		// movie_companies mc, movie_keyword mk, title t
		case 56:
			return 34863638;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 30:
			return 7834;
		// company_name cn, movie_companies mc, movie_keyword mk, title t
		case 58:
			return 2108405;
		// keyword k, movie_companies mc, movie_keyword mk, title t
		case 60:
			return 148552;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 62:
			return 7834;
	};
}

// [keyword k, movie_info mi, movie_keyword mk, title t, ]
double
get_truth_cardinality_job_query_3(int total_relids)
{
	switch (total_relids) {
		// keyword k
		case 2:
			return 30;
		// movie_info mi
		case 4:
			return 153897;
		// movie_keyword mk
		case 8:
			return 4523930;
		// title t
		case 16:
			return 1012920;
		// keyword k, movie_keyword mk
		case 10:
			return 12951;
		// movie_info mi, movie_keyword mk
		case 12:
			return 612026;
		// movie_info mi, title t
		case 20:
			return 48168;
		// movie_keyword mk, title t
		case 24:
			return 1253091;
		// keyword k, movie_info mi, movie_keyword mk
		case 14:
			return 1766;
		// keyword k, movie_keyword mk, title t
		case 26:
			return 2235;
		// movie_info mi, movie_keyword mk, title t
		case 28:
			return 167111;
		// keyword k, movie_info mi, movie_keyword mk, title t
		case 30:
			return 206;
	};
}

// [info_type it, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t, ]
double
get_truth_cardinality_job_query_4(int total_relids)
{
	switch (total_relids) {
		// info_type it
		case 2:
			return 1;
		// keyword k
		case 4:
			return 30;
		// movie_info_idx mi_idx
		case 8:
			return 523319;
		// movie_keyword mk
		case 16:
			return 4523930;
		// title t
		case 32:
			return 1012920;
		// info_type it, movie_info_idx mi_idx
		case 10:
			return 352990;
		// keyword k, movie_keyword mk
		case 20:
			return 12951;
		// movie_info_idx mi_idx, movie_keyword mk
		case 24:
			return 3974322;
		// movie_info_idx mi_idx, title t
		case 40:
			return 161022;
		// movie_keyword mk, title t
		case 48:
			return 1253091;
		// info_type it, movie_info_idx mi_idx, movie_keyword mk
		case 26:
			return 2881657;
		// info_type it, movie_info_idx mi_idx, title t
		case 42:
			return 106021;
		// keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 28:
			return 8463;
		// keyword k, movie_keyword mk, title t
		case 52:
			return 2235;
		// movie_info_idx mi_idx, movie_keyword mk, title t
		case 56:
			return 970209;
		// info_type it, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 30:
			return 5820;
		// info_type it, movie_info_idx mi_idx, movie_keyword mk, title t
		case 58:
			return 697651;
		// keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 60:
			return 1148;
		// info_type it, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 62:
			return 740;
	};
}

// [company_type ct, info_type it, movie_companies mc, movie_info mi, title t, ]
double
get_truth_cardinality_job_query_5(int total_relids)
{
	switch (total_relids) {
		// company_type ct
		case 2:
			return 1;
		// info_type it
		case 4:
			return 113;
		// movie_companies mc
		case 8:
			return 24025;
		// movie_info mi
		case 16:
			return 153897;
		// title t
		case 32:
			return 1012920;
		// company_type ct, movie_companies mc
		case 10:
			return 0;
		// info_type it, movie_info mi
		case 20:
			return 153897;
		// movie_companies mc, movie_info mi
		case 24:
			return 2694;
		// movie_companies mc, title t
		case 40:
			return 3929;
		// movie_info mi, title t
		case 48:
			return 48168;
		// company_type ct, movie_companies mc, movie_info mi
		case 26:
			return 0;
		// company_type ct, movie_companies mc, title t
		case 42:
			return 0;
		// info_type it, movie_companies mc, movie_info mi
		case 28:
			return 2694;
		// info_type it, movie_info mi, title t
		case 52:
			return 48168;
		// movie_companies mc, movie_info mi, title t
		case 56:
			return 783;
		// company_type ct, info_type it, movie_companies mc, movie_info mi
		case 30:
			return 0;
		// company_type ct, movie_companies mc, movie_info mi, title t
		case 58:
			return 0;
		// info_type it, movie_companies mc, movie_info mi, title t
		case 60:
			return 783;
		// company_type ct, info_type it, movie_companies mc, movie_info mi, title t
		case 62:
			return 0;
	};
}

// [cast_info ci, keyword k, movie_keyword mk, name n, title t, ]
double
get_truth_cardinality_job_query_6(int total_relids)
{
	switch (total_relids) {
		// cast_info ci
		case 2:
			return 36244344;
		// keyword k
		case 4:
			return 1;
		// movie_keyword mk
		case 8:
			return 4523930;
		// name n
		case 16:
			return 2;
		// title t
		case 32:
			return 391666;
		// cast_info ci, movie_keyword mk
		case 10:
			return 215765477;
		// cast_info ci, name n
		case 18:
			return 486;
		// cast_info ci, title t
		case 34:
			return 5935230;
		// keyword k, movie_keyword mk
		case 12:
			return 14;
		// movie_keyword mk, title t
		case 40:
			return 299534;
		// cast_info ci, keyword k, movie_keyword mk
		case 14:
			return 1242;
		// cast_info ci, movie_keyword mk, name n
		case 26:
			return 10066;
		// cast_info ci, movie_keyword mk, title t
		case 42:
			return 17278181;
		// cast_info ci, name n, title t
		case 50:
			return 61;
		// keyword k, movie_keyword mk, title t
		case 44:
			return 11;
		// cast_info ci, keyword k, movie_keyword mk, name n
		case 30:
			return 6;
		// cast_info ci, keyword k, movie_keyword mk, title t
		case 46:
			return 1224;
		// cast_info ci, movie_keyword mk, name n, title t
		case 58:
			return 1194;
		// cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 62:
			return 6;
	};
}

// [aka_name an, cast_info ci, info_type it, link_type lt, movie_link ml, name n, person_info pi, title t, ]
double
get_truth_cardinality_job_query_7(int total_relids)
{
	switch (total_relids) {
		// aka_name an
		case 2:
			return 674692;
		// cast_info ci
		case 4:
			return 36244344;
		// info_type it
		case 8:
			return 1;
		// link_type lt
		case 16:
			return 1;
		// movie_link ml
		case 32:
			return 29997;
		// name n
		case 64:
			return 543291;
		// person_info pi
		case 128:
			return 64;
		// title t
		case 256:
			return 340186;
		// aka_name an, cast_info ci
		case 6:
			return 27144680;
		// aka_name an, name n
		case 66:
			return 88970;
		// aka_name an, person_info pi
		case 130:
			return 98;
		// cast_info ci, movie_link ml
		case 36:
			return 1845530;
		// cast_info ci, name n
		case 68:
			return 5504872;
		// cast_info ci, person_info pi
		case 132:
			return 8764;
		// cast_info ci, title t
		case 260:
			return 5255691;
		// info_type it, person_info pi
		case 136:
			return 64;
		// link_type lt, movie_link ml
		case 48:
			return 5186;
		// movie_link ml, title t
		case 288:
			return 6750;
		// name n, person_info pi
		case 192:
			return 17;
		// aka_name an, cast_info ci, movie_link ml
		case 38:
			return 1642879;
		// aka_name an, cast_info ci, name n
		case 70:
			return 5087952;
		// aka_name an, cast_info ci, person_info pi
		case 134:
			return 15021;
		// aka_name an, cast_info ci, title t
		case 262:
			return 4877691;
		// aka_name an, info_type it, person_info pi
		case 138:
			return 98;
		// aka_name an, name n, person_info pi
		case 194:
			return 20;
		// cast_info ci, info_type it, person_info pi
		case 140:
			return 8764;
		// cast_info ci, link_type lt, movie_link ml
		case 52:
			return 411769;
		// cast_info ci, movie_link ml, name n
		case 100:
			return 288531;
		// cast_info ci, movie_link ml, person_info pi
		case 164:
			return 787;
		// cast_info ci, movie_link ml, title t
		case 292:
			return 424640;
		// cast_info ci, name n, person_info pi
		case 196:
			return 2670;
		// cast_info ci, name n, title t
		case 324:
			return 848203;
		// cast_info ci, person_info pi, title t
		case 388:
			return 1401;
		// info_type it, name n, person_info pi
		case 200:
			return 17;
		// link_type lt, movie_link ml, title t
		case 304:
			return 1467;
		// aka_name an, cast_info ci, info_type it, person_info pi
		case 142:
			return 15021;
		// aka_name an, cast_info ci, link_type lt, movie_link ml
		case 54:
			return 348475;
		// aka_name an, cast_info ci, movie_link ml, name n
		case 102:
			return 326096;
		// aka_name an, cast_info ci, movie_link ml, person_info pi
		case 166:
			return 1175;
		// aka_name an, cast_info ci, movie_link ml, title t
		case 294:
			return 407992;
		// aka_name an, cast_info ci, name n, person_info pi
		case 198:
			return 3354;
		// aka_name an, cast_info ci, name n, title t
		case 326:
			return 934353;
		// aka_name an, cast_info ci, person_info pi, title t
		case 390:
			return 2463;
		// aka_name an, info_type it, name n, person_info pi
		case 202:
			return 20;
		// cast_info ci, info_type it, movie_link ml, person_info pi
		case 172:
			return 787;
		// cast_info ci, info_type it, name n, person_info pi
		case 204:
			return 2670;
		// cast_info ci, info_type it, person_info pi, title t
		case 396:
			return 1401;
		// cast_info ci, link_type lt, movie_link ml, name n
		case 116:
			return 65223;
		// cast_info ci, link_type lt, movie_link ml, person_info pi
		case 180:
			return 249;
		// cast_info ci, link_type lt, movie_link ml, title t
		case 308:
			return 105262;
		// cast_info ci, movie_link ml, name n, person_info pi
		case 228:
			return 344;
		// cast_info ci, movie_link ml, name n, title t
		case 356:
			return 69697;
		// cast_info ci, movie_link ml, person_info pi, title t
		case 420:
			return 119;
		// cast_info ci, name n, person_info pi, title t
		case 452:
			return 390;
		// aka_name an, cast_info ci, info_type it, movie_link ml, person_info pi
		case 174:
			return 1175;
		// aka_name an, cast_info ci, info_type it, name n, person_info pi
		case 206:
			return 3354;
		// aka_name an, cast_info ci, info_type it, person_info pi, title t
		case 398:
			return 2463;
		// aka_name an, cast_info ci, link_type lt, movie_link ml, name n
		case 118:
			return 67308;
		// aka_name an, cast_info ci, link_type lt, movie_link ml, person_info pi
		case 182:
			return 351;
		// aka_name an, cast_info ci, link_type lt, movie_link ml, title t
		case 310:
			return 96434;
		// aka_name an, cast_info ci, movie_link ml, name n, person_info pi
		case 230:
			return 510;
		// aka_name an, cast_info ci, movie_link ml, name n, title t
		case 358:
			return 84059;
		// aka_name an, cast_info ci, movie_link ml, person_info pi, title t
		case 422:
			return 208;
		// aka_name an, cast_info ci, name n, person_info pi, title t
		case 454:
			return 552;
		// cast_info ci, info_type it, link_type lt, movie_link ml, person_info pi
		case 188:
			return 249;
		// cast_info ci, info_type it, movie_link ml, name n, person_info pi
		case 236:
			return 344;
		// cast_info ci, info_type it, movie_link ml, person_info pi, title t
		case 428:
			return 119;
		// cast_info ci, info_type it, name n, person_info pi, title t
		case 460:
			return 390;
		// cast_info ci, link_type lt, movie_link ml, name n, person_info pi
		case 244:
			return 103;
		// cast_info ci, link_type lt, movie_link ml, name n, title t
		case 372:
			return 17559;
		// cast_info ci, link_type lt, movie_link ml, person_info pi, title t
		case 436:
			return 32;
		// cast_info ci, movie_link ml, name n, person_info pi, title t
		case 484:
			return 54;
		// aka_name an, cast_info ci, info_type it, link_type lt, movie_link ml, person_info pi
		case 190:
			return 351;
		// aka_name an, cast_info ci, info_type it, movie_link ml, name n, person_info pi
		case 238:
			return 510;
		// aka_name an, cast_info ci, info_type it, movie_link ml, person_info pi, title t
		case 430:
			return 208;
		// aka_name an, cast_info ci, info_type it, name n, person_info pi, title t
		case 462:
			return 552;
		// aka_name an, cast_info ci, link_type lt, movie_link ml, name n, person_info pi
		case 246:
			return 151;
		// aka_name an, cast_info ci, link_type lt, movie_link ml, name n, title t
		case 374:
			return 19250;
		// aka_name an, cast_info ci, link_type lt, movie_link ml, person_info pi, title t
		case 438:
			return 57;
		// aka_name an, cast_info ci, movie_link ml, name n, person_info pi, title t
		case 486:
			return 110;
		// cast_info ci, info_type it, link_type lt, movie_link ml, name n, person_info pi
		case 252:
			return 103;
		// cast_info ci, info_type it, link_type lt, movie_link ml, person_info pi, title t
		case 444:
			return 32;
		// cast_info ci, info_type it, movie_link ml, name n, person_info pi, title t
		case 492:
			return 54;
		// cast_info ci, link_type lt, movie_link ml, name n, person_info pi, title t
		case 500:
			return 14;
		// aka_name an, cast_info ci, info_type it, link_type lt, movie_link ml, name n, person_info pi
		case 254:
			return 151;
		// aka_name an, cast_info ci, info_type it, link_type lt, movie_link ml, person_info pi, title t
		case 446:
			return 57;
		// aka_name an, cast_info ci, info_type it, movie_link ml, name n, person_info pi, title t
		case 494:
			return 110;
		// aka_name an, cast_info ci, link_type lt, movie_link ml, name n, person_info pi, title t
		case 502:
			return 32;
		// cast_info ci, info_type it, link_type lt, movie_link ml, name n, person_info pi, title t
		case 508:
			return 14;
		// aka_name an, cast_info ci, info_type it, link_type lt, movie_link ml, name n, person_info pi, title t
		case 510:
			return 32;
	};
}

// [aka_name an1, cast_info ci, company_name cn, movie_companies mc, name n1, role_type rt, title t, ]
double
get_truth_cardinality_job_query_8(int total_relids)
{
	switch (total_relids) {
		// aka_name an1
		case 2:
			return 901343;
		// cast_info ci
		case 4:
			return 93095;
		// company_name cn
		case 8:
			return 6752;
		// movie_companies mc
		case 16:
			return 48897;
		// name n1
		case 32:
			return 20911;
		// role_type rt
		case 64:
			return 1;
		// title t
		case 128:
			return 2528312;
		// aka_name an1, cast_info ci
		case 6:
			return 208704;
		// aka_name an1, name n1
		case 34:
			return 4031;
		// cast_info ci, movie_companies mc
		case 20:
			return 19849;
		// cast_info ci, name n1
		case 36:
			return 938;
		// cast_info ci, role_type rt
		case 68:
			return 34848;
		// cast_info ci, title t
		case 132:
			return 93095;
		// company_name cn, movie_companies mc
		case 24:
			return 48328;
		// movie_companies mc, title t
		case 144:
			return 48897;
		// aka_name an1, cast_info ci, movie_companies mc
		case 22:
			return 46029;
		// aka_name an1, cast_info ci, name n1
		case 38:
			return 2575;
		// aka_name an1, cast_info ci, role_type rt
		case 70:
			return 75365;
		// aka_name an1, cast_info ci, title t
		case 134:
			return 208704;
		// cast_info ci, company_name cn, movie_companies mc
		case 28:
			return 19600;
		// cast_info ci, movie_companies mc, name n1
		case 52:
			return 191;
		// cast_info ci, movie_companies mc, role_type rt
		case 84:
			return 7532;
		// cast_info ci, movie_companies mc, title t
		case 148:
			return 19849;
		// cast_info ci, name n1, role_type rt
		case 100:
			return 394;
		// cast_info ci, name n1, title t
		case 164:
			return 938;
		// cast_info ci, role_type rt, title t
		case 196:
			return 34848;
		// company_name cn, movie_companies mc, title t
		case 152:
			return 48328;
		// aka_name an1, cast_info ci, company_name cn, movie_companies mc
		case 30:
			return 45554;
		// aka_name an1, cast_info ci, movie_companies mc, name n1
		case 54:
			return 660;
		// aka_name an1, cast_info ci, movie_companies mc, role_type rt
		case 86:
			return 17538;
		// aka_name an1, cast_info ci, movie_companies mc, title t
		case 150:
			return 46029;
		// aka_name an1, cast_info ci, name n1, role_type rt
		case 102:
			return 659;
		// aka_name an1, cast_info ci, name n1, title t
		case 166:
			return 2575;
		// aka_name an1, cast_info ci, role_type rt, title t
		case 198:
			return 75365;
		// cast_info ci, company_name cn, movie_companies mc, name n1
		case 60:
			return 190;
		// cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 92:
			return 7438;
		// cast_info ci, company_name cn, movie_companies mc, title t
		case 156:
			return 19600;
		// cast_info ci, movie_companies mc, name n1, role_type rt
		case 116:
			return 39;
		// cast_info ci, movie_companies mc, name n1, title t
		case 180:
			return 191;
		// cast_info ci, movie_companies mc, role_type rt, title t
		case 212:
			return 7532;
		// cast_info ci, name n1, role_type rt, title t
		case 228:
			return 394;
		// aka_name an1, cast_info ci, company_name cn, movie_companies mc, name n1
		case 62:
			return 658;
		// aka_name an1, cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 94:
			return 17379;
		// aka_name an1, cast_info ci, company_name cn, movie_companies mc, title t
		case 158:
			return 45554;
		// aka_name an1, cast_info ci, movie_companies mc, name n1, role_type rt
		case 118:
			return 64;
		// aka_name an1, cast_info ci, movie_companies mc, name n1, title t
		case 182:
			return 660;
		// aka_name an1, cast_info ci, movie_companies mc, role_type rt, title t
		case 214:
			return 17538;
		// aka_name an1, cast_info ci, name n1, role_type rt, title t
		case 230:
			return 659;
		// cast_info ci, company_name cn, movie_companies mc, name n1, role_type rt
		case 124:
			return 38;
		// cast_info ci, company_name cn, movie_companies mc, name n1, title t
		case 188:
			return 190;
		// cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 220:
			return 7438;
		// cast_info ci, movie_companies mc, name n1, role_type rt, title t
		case 244:
			return 39;
		// aka_name an1, cast_info ci, company_name cn, movie_companies mc, name n1, role_type rt
		case 126:
			return 62;
		// aka_name an1, cast_info ci, company_name cn, movie_companies mc, name n1, title t
		case 190:
			return 658;
		// aka_name an1, cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 222:
			return 17379;
		// aka_name an1, cast_info ci, movie_companies mc, name n1, role_type rt, title t
		case 246:
			return 64;
		// cast_info ci, company_name cn, movie_companies mc, name n1, role_type rt, title t
		case 252:
			return 38;
		// aka_name an1, cast_info ci, company_name cn, movie_companies mc, name n1, role_type rt, title t
		case 254:
			return 62;
	};
}

// [aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt, title t, ]
double
get_truth_cardinality_job_query_9(int total_relids)
{
	switch (total_relids) {
		// aka_name an
		case 2:
			return 901343;
		// char_name chn
		case 4:
			return 3140339;
		// cast_info ci
		case 8:
			return 867477;
		// company_name cn
		case 16:
			return 84843;
		// movie_companies mc
		case 32:
			return 590994;
		// name n
		case 64:
			return 6768;
		// role_type rt
		case 128:
			return 1;
		// title t
		case 256:
			return 1107888;
		// aka_name an, cast_info ci
		case 10:
			return 1806603;
		// aka_name an, name n
		case 66:
			return 1558;
		// char_name chn, cast_info ci
		case 12:
			return 801259;
		// cast_info ci, movie_companies mc
		case 40:
			return 311161;
		// cast_info ci, name n
		case 72:
			return 728;
		// cast_info ci, role_type rt
		case 136:
			return 276166;
		// cast_info ci, title t
		case 264:
			return 357789;
		// company_name cn, movie_companies mc
		case 48:
			return 542096;
		// movie_companies mc, title t
		case 288:
			return 166911;
		// aka_name an, char_name chn, cast_info ci
		case 14:
			return 1732265;
		// aka_name an, cast_info ci, movie_companies mc
		case 42:
			return 753924;
		// aka_name an, cast_info ci, name n
		case 74:
			return 425;
		// aka_name an, cast_info ci, role_type rt
		case 138:
			return 503508;
		// aka_name an, cast_info ci, title t
		case 266:
			return 678618;
		// char_name chn, cast_info ci, movie_companies mc
		case 44:
			return 284907;
		// char_name chn, cast_info ci, name n
		case 76:
			return 630;
		// char_name chn, cast_info ci, role_type rt
		case 140:
			return 255651;
		// char_name chn, cast_info ci, title t
		case 268:
			return 334052;
		// cast_info ci, company_name cn, movie_companies mc
		case 56:
			return 289200;
		// cast_info ci, movie_companies mc, name n
		case 104:
			return 355;
		// cast_info ci, movie_companies mc, role_type rt
		case 168:
			return 86056;
		// cast_info ci, movie_companies mc, title t
		case 296:
			return 113661;
		// cast_info ci, name n, role_type rt
		case 200:
			return 727;
		// cast_info ci, name n, title t
		case 328:
			return 300;
		// cast_info ci, role_type rt, title t
		case 392:
			return 118723;
		// company_name cn, movie_companies mc, title t
		case 304:
			return 144120;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc
		case 46:
			return 717888;
		// aka_name an, char_name chn, cast_info ci, name n
		case 78:
			return 387;
		// aka_name an, char_name chn, cast_info ci, role_type rt
		case 142:
			return 483319;
		// aka_name an, char_name chn, cast_info ci, title t
		case 270:
			return 656621;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc
		case 58:
			return 724742;
		// aka_name an, cast_info ci, movie_companies mc, name n
		case 106:
			return 373;
		// aka_name an, cast_info ci, movie_companies mc, role_type rt
		case 170:
			return 183017;
		// aka_name an, cast_info ci, movie_companies mc, title t
		case 298:
			return 268353;
		// aka_name an, cast_info ci, name n, role_type rt
		case 202:
			return 425;
		// aka_name an, cast_info ci, name n, title t
		case 330:
			return 155;
		// aka_name an, cast_info ci, role_type rt, title t
		case 394:
			return 198897;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc
		case 60:
			return 265661;
		// char_name chn, cast_info ci, movie_companies mc, name n
		case 108:
			return 322;
		// char_name chn, cast_info ci, movie_companies mc, role_type rt
		case 172:
			return 77832;
		// char_name chn, cast_info ci, movie_companies mc, title t
		case 300:
			return 105487;
		// char_name chn, cast_info ci, name n, role_type rt
		case 204:
			return 630;
		// char_name chn, cast_info ci, name n, title t
		case 332:
			return 249;
		// char_name chn, cast_info ci, role_type rt, title t
		case 396:
			return 111970;
		// cast_info ci, company_name cn, movie_companies mc, name n
		case 120:
			return 333;
		// cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 184:
			return 79662;
		// cast_info ci, company_name cn, movie_companies mc, title t
		case 312:
			return 104698;
		// cast_info ci, movie_companies mc, name n, role_type rt
		case 232:
			return 351;
		// cast_info ci, movie_companies mc, name n, title t
		case 360:
			return 135;
		// cast_info ci, movie_companies mc, role_type rt, title t
		case 424:
			return 33168;
		// cast_info ci, name n, role_type rt, title t
		case 456:
			return 300;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc
		case 62:
			return 691534;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, name n
		case 110:
			return 348;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, role_type rt
		case 174:
			return 172717;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, title t
		case 302:
			return 256408;
		// aka_name an, char_name chn, cast_info ci, name n, role_type rt
		case 206:
			return 387;
		// aka_name an, char_name chn, cast_info ci, name n, title t
		case 334:
			return 139;
		// aka_name an, char_name chn, cast_info ci, role_type rt, title t
		case 398:
			return 193183;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, name n
		case 122:
			return 359;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 186:
			return 175140;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, title t
		case 314:
			return 257344;
		// aka_name an, cast_info ci, movie_companies mc, name n, role_type rt
		case 234:
			return 373;
		// aka_name an, cast_info ci, movie_companies mc, name n, title t
		case 362:
			return 130;
		// aka_name an, cast_info ci, movie_companies mc, role_type rt, title t
		case 426:
			return 72647;
		// aka_name an, cast_info ci, name n, role_type rt, title t
		case 458:
			return 155;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, name n
		case 124:
			return 305;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 188:
			return 72285;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, title t
		case 316:
			return 97340;
		// char_name chn, cast_info ci, movie_companies mc, name n, role_type rt
		case 236:
			return 322;
		// char_name chn, cast_info ci, movie_companies mc, name n, title t
		case 364:
			return 124;
		// char_name chn, cast_info ci, movie_companies mc, role_type rt, title t
		case 428:
			return 30707;
		// char_name chn, cast_info ci, name n, role_type rt, title t
		case 460:
			return 249;
		// cast_info ci, company_name cn, movie_companies mc, name n, role_type rt
		case 248:
			return 329;
		// cast_info ci, company_name cn, movie_companies mc, name n, title t
		case 376:
			return 125;
		// cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 440:
			return 30619;
		// cast_info ci, movie_companies mc, name n, role_type rt, title t
		case 488:
			return 135;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, name n
		case 126:
			return 341;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 190:
			return 165654;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, title t
		case 318:
			return 246321;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, name n, role_type rt
		case 238:
			return 348;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, name n, title t
		case 366:
			return 123;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, role_type rt, title t
		case 430:
			return 69248;
		// aka_name an, char_name chn, cast_info ci, name n, role_type rt, title t
		case 462:
			return 139;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt
		case 250:
			return 359;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, name n, title t
		case 378:
			return 127;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 442:
			return 69895;
		// aka_name an, cast_info ci, movie_companies mc, name n, role_type rt, title t
		case 490:
			return 130;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt
		case 252:
			return 305;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, title t
		case 380:
			return 115;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 444:
			return 28368;
		// char_name chn, cast_info ci, movie_companies mc, name n, role_type rt, title t
		case 492:
			return 124;
		// cast_info ci, company_name cn, movie_companies mc, name n, role_type rt, title t
		case 504:
			return 125;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt
		case 254:
			return 341;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, title t
		case 382:
			return 121;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 446:
			return 66713;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, name n, role_type rt, title t
		case 494:
			return 123;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt, title t
		case 506:
			return 127;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt, title t
		case 508:
			return 115;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt, title t
		case 510:
			return 121;
	};
}

// [char_name chn, cast_info ci, company_name cn, company_type ct, movie_companies mc, role_type rt, title t, ]
double
get_truth_cardinality_job_query_10(int total_relids)
{
	switch (total_relids) {
		// char_name chn
		case 2:
			return 3140339;
		// cast_info ci
		case 4:
			return 32288;
		// company_name cn
		case 8:
			return 1361;
		// company_type ct
		case 16:
			return 4;
		// movie_companies mc
		case 32:
			return 2609129;
		// role_type rt
		case 64:
			return 1;
		// title t
		case 128:
			return 1012920;
		// char_name chn, cast_info ci
		case 6:
			return 31690;
		// cast_info ci, movie_companies mc
		case 36:
			return 115066;
		// cast_info ci, role_type rt
		case 68:
			return 25874;
		// cast_info ci, title t
		case 132:
			return 6478;
		// company_name cn, movie_companies mc
		case 40:
			return 8790;
		// company_type ct, movie_companies mc
		case 48:
			return 2609129;
		// movie_companies mc, title t
		case 160:
			return 829639;
		// char_name chn, cast_info ci, movie_companies mc
		case 38:
			return 109768;
		// char_name chn, cast_info ci, role_type rt
		case 70:
			return 25523;
		// char_name chn, cast_info ci, title t
		case 134:
			return 6300;
		// cast_info ci, company_name cn, movie_companies mc
		case 44:
			return 377;
		// cast_info ci, company_type ct, movie_companies mc
		case 52:
			return 115066;
		// cast_info ci, movie_companies mc, role_type rt
		case 100:
			return 88489;
		// cast_info ci, movie_companies mc, title t
		case 164:
			return 20369;
		// cast_info ci, role_type rt, title t
		case 196:
			return 5288;
		// company_name cn, company_type ct, movie_companies mc
		case 56:
			return 8790;
		// company_name cn, movie_companies mc, title t
		case 168:
			return 4539;
		// company_type ct, movie_companies mc, title t
		case 176:
			return 829639;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc
		case 46:
			return 337;
		// char_name chn, cast_info ci, company_type ct, movie_companies mc
		case 54:
			return 109768;
		// char_name chn, cast_info ci, movie_companies mc, role_type rt
		case 102:
			return 86127;
		// char_name chn, cast_info ci, movie_companies mc, title t
		case 166:
			return 18771;
		// char_name chn, cast_info ci, role_type rt, title t
		case 198:
			return 5189;
		// cast_info ci, company_name cn, company_type ct, movie_companies mc
		case 60:
			return 377;
		// cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 108:
			return 275;
		// cast_info ci, company_name cn, movie_companies mc, title t
		case 172:
			return 151;
		// cast_info ci, company_type ct, movie_companies mc, role_type rt
		case 116:
			return 88489;
		// cast_info ci, company_type ct, movie_companies mc, title t
		case 180:
			return 20369;
		// cast_info ci, movie_companies mc, role_type rt, title t
		case 228:
			return 14489;
		// company_name cn, company_type ct, movie_companies mc, title t
		case 184:
			return 4539;
		// char_name chn, cast_info ci, company_name cn, company_type ct, movie_companies mc
		case 62:
			return 337;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 110:
			return 265;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, title t
		case 174:
			return 135;
		// char_name chn, cast_info ci, company_type ct, movie_companies mc, role_type rt
		case 118:
			return 86127;
		// char_name chn, cast_info ci, company_type ct, movie_companies mc, title t
		case 182:
			return 18771;
		// char_name chn, cast_info ci, movie_companies mc, role_type rt, title t
		case 230:
			return 13694;
		// cast_info ci, company_name cn, company_type ct, movie_companies mc, role_type rt
		case 124:
			return 275;
		// cast_info ci, company_name cn, company_type ct, movie_companies mc, title t
		case 188:
			return 151;
		// cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 236:
			return 112;
		// cast_info ci, company_type ct, movie_companies mc, role_type rt, title t
		case 244:
			return 14489;
		// char_name chn, cast_info ci, company_name cn, company_type ct, movie_companies mc, role_type rt
		case 126:
			return 265;
		// char_name chn, cast_info ci, company_name cn, company_type ct, movie_companies mc, title t
		case 190:
			return 135;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 238:
			return 104;
		// char_name chn, cast_info ci, company_type ct, movie_companies mc, role_type rt, title t
		case 246:
			return 13694;
		// cast_info ci, company_name cn, company_type ct, movie_companies mc, role_type rt, title t
		case 252:
			return 112;
		// char_name chn, cast_info ci, company_name cn, company_type ct, movie_companies mc, role_type rt, title t
		case 254:
			return 104;
	};
}

// [company_name cn, company_type ct, keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t, ]
double
get_truth_cardinality_job_query_11(int total_relids)
{
	switch (total_relids) {
		// company_name cn
		case 2:
			return 48302;
		// company_type ct
		case 4:
			return 1;
		// keyword k
		case 8:
			return 1;
		// link_type lt
		case 16:
			return 2;
		// movie_companies mc
		case 32:
			return 1271989;
		// movie_keyword mk
		case 64:
			return 4523930;
		// movie_link ml
		case 128:
			return 29997;
		// title t
		case 256:
			return 910581;
		// company_name cn, movie_companies mc
		case 34:
			return 240875;
		// company_type ct, movie_companies mc
		case 36:
			return 1193928;
		// keyword k, movie_keyword mk
		case 72:
			return 10544;
		// link_type lt, movie_link ml
		case 144:
			return 2315;
		// movie_companies mc, movie_keyword mk
		case 96:
			return 6719220;
		// movie_companies mc, movie_link ml
		case 160:
			return 43026;
		// movie_companies mc, title t
		case 288:
			return 546306;
		// movie_keyword mk, movie_link ml
		case 192:
			return 288192;
		// movie_keyword mk, title t
		case 320:
			return 2011296;
		// movie_link ml, title t
		case 384:
			return 13627;
		// company_name cn, company_type ct, movie_companies mc
		case 38:
			return 224256;
		// company_name cn, movie_companies mc, movie_keyword mk
		case 98:
			return 1483541;
		// company_name cn, movie_companies mc, movie_link ml
		case 162:
			return 3079;
		// company_name cn, movie_companies mc, title t
		case 290:
			return 95217;
		// company_type ct, movie_companies mc, movie_keyword mk
		case 100:
			return 5975292;
		// company_type ct, movie_companies mc, movie_link ml
		case 164:
			return 36283;
		// company_type ct, movie_companies mc, title t
		case 292:
			return 500448;
		// keyword k, movie_companies mc, movie_keyword mk
		case 104:
			return 14331;
		// keyword k, movie_keyword mk, movie_link ml
		case 200:
			return 251;
		// keyword k, movie_keyword mk, title t
		case 328:
			return 5541;
		// link_type lt, movie_companies mc, movie_link ml
		case 176:
			return 5069;
		// link_type lt, movie_keyword mk, movie_link ml
		case 208:
			return 17543;
		// link_type lt, movie_link ml, title t
		case 400:
			return 1332;
		// movie_companies mc, movie_keyword mk, movie_link ml
		case 224:
			return 732182;
		// movie_companies mc, movie_keyword mk, title t
		case 352:
			return 3185481;
		// movie_companies mc, movie_link ml, title t
		case 416:
			return 25214;
		// movie_keyword mk, movie_link ml, title t
		case 448:
			return 170868;
		// company_name cn, company_type ct, movie_companies mc, movie_keyword mk
		case 102:
			return 1337515;
		// company_name cn, company_type ct, movie_companies mc, movie_link ml
		case 166:
			return 2801;
		// company_name cn, company_type ct, movie_companies mc, title t
		case 294:
			return 86330;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 106:
			return 2802;
		// company_name cn, link_type lt, movie_companies mc, movie_link ml
		case 178:
			return 1200;
		// company_name cn, movie_companies mc, movie_keyword mk, movie_link ml
		case 226:
			return 49014;
		// company_name cn, movie_companies mc, movie_keyword mk, title t
		case 354:
			return 682359;
		// company_name cn, movie_companies mc, movie_link ml, title t
		case 418:
			return 1860;
		// company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 108:
			return 11915;
		// company_type ct, link_type lt, movie_companies mc, movie_link ml
		case 180:
			return 4393;
		// company_type ct, movie_companies mc, movie_keyword mk, movie_link ml
		case 228:
			return 610301;
		// company_type ct, movie_companies mc, movie_keyword mk, title t
		case 356:
			return 2693976;
		// company_type ct, movie_companies mc, movie_link ml, title t
		case 420:
			return 19453;
		// keyword k, link_type lt, movie_keyword mk, movie_link ml
		case 216:
			return 199;
		// keyword k, movie_companies mc, movie_keyword mk, movie_link ml
		case 232:
			return 1173;
		// keyword k, movie_companies mc, movie_keyword mk, title t
		case 360:
			return 8138;
		// keyword k, movie_keyword mk, movie_link ml, title t
		case 456:
			return 199;
		// link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 240:
			return 54010;
		// link_type lt, movie_companies mc, movie_link ml, title t
		case 432:
			return 3313;
		// link_type lt, movie_keyword mk, movie_link ml, title t
		case 464:
			return 12059;
		// movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 480:
			return 437931;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 110:
			return 2293;
		// company_name cn, company_type ct, link_type lt, movie_companies mc, movie_link ml
		case 182:
			return 1152;
		// company_name cn, company_type ct, movie_companies mc, movie_keyword mk, movie_link ml
		case 230:
			return 40379;
		// company_name cn, company_type ct, movie_companies mc, movie_keyword mk, title t
		case 358:
			return 590369;
		// company_name cn, company_type ct, movie_companies mc, movie_link ml, title t
		case 422:
			return 1659;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk, movie_link ml
		case 234:
			return 452;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 362:
			return 1495;
		// company_name cn, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 242:
			return 9430;
		// company_name cn, link_type lt, movie_companies mc, movie_link ml, title t
		case 434:
			return 746;
		// company_name cn, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 482:
			return 29192;
		// company_type ct, keyword k, movie_companies mc, movie_keyword mk, movie_link ml
		case 236:
			return 1052;
		// company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 364:
			return 6646;
		// company_type ct, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 244:
			return 45210;
		// company_type ct, link_type lt, movie_companies mc, movie_link ml, title t
		case 436:
			return 2794;
		// company_type ct, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 484:
			return 330899;
		// keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 248:
			return 1021;
		// keyword k, link_type lt, movie_keyword mk, movie_link ml, title t
		case 472:
			return 152;
		// keyword k, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 488:
			return 845;
		// link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 496:
			return 40132;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk, movie_link ml
		case 238:
			return 422;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 366:
			return 1292;
		// company_name cn, company_type ct, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 246:
			return 8713;
		// company_name cn, company_type ct, link_type lt, movie_companies mc, movie_link ml, title t
		case 438:
			return 698;
		// company_name cn, company_type ct, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 486:
			return 26096;
		// company_name cn, keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 250:
			return 422;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 490:
			return 360;
		// company_name cn, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 498:
			return 7580;
		// company_type ct, keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 252:
			return 962;
		// company_type ct, keyword k, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 492:
			return 742;
		// company_type ct, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 500:
			return 32130;
		// keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 504:
			return 705;
		// company_name cn, company_type ct, keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 254:
			return 402;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 494:
			return 330;
		// company_name cn, company_type ct, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 502:
			return 6863;
		// company_name cn, keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 506:
			return 330;
		// company_type ct, keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 508:
			return 664;
		// company_name cn, company_type ct, keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 510:
			return 310;
	};
}

// [company_name cn, company_type ct, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t, ]
double
get_truth_cardinality_job_query_12(int total_relids)
{
	switch (total_relids) {
		// company_name cn
		case 2:
			return 84843;
		// company_type ct
		case 4:
			return 1;
		// info_type it1
		case 8:
			return 1;
		// info_type it2
		case 16:
			return 1;
		// movie_companies mc
		case 32:
			return 2609129;
		// movie_info mi
		case 64:
			return 274644;
		// movie_info_idx mi_idx
		case 128:
			return 53649;
		// title t
		case 256:
			return 445860;
		// company_name cn, movie_companies mc
		case 34:
			return 1153798;
		// company_type ct, movie_companies mc
		case 36:
			return 1334883;
		// info_type it1, movie_info mi
		case 72:
			return 272720;
		// info_type it2, movie_info_idx mi_idx
		case 144:
			return 15849;
		// movie_companies mc, movie_info mi
		case 96:
			return 736556;
		// movie_companies mc, movie_info_idx mi_idx
		case 160:
			return 181966;
		// movie_companies mc, title t
		case 288:
			return 392556;
		// movie_info mi, movie_info_idx mi_idx
		case 192:
			return 12228;
		// movie_info mi, title t
		case 320:
			return 36964;
		// movie_info_idx mi_idx, title t
		case 384:
			return 10834;
		// company_name cn, company_type ct, movie_companies mc
		case 38:
			return 552328;
		// company_name cn, movie_companies mc, movie_info mi
		case 98:
			return 261967;
		// company_name cn, movie_companies mc, movie_info_idx mi_idx
		case 162:
			return 84127;
		// company_name cn, movie_companies mc, title t
		case 290:
			return 154763;
		// company_type ct, movie_companies mc, movie_info mi
		case 100:
			return 319776;
		// company_type ct, movie_companies mc, movie_info_idx mi_idx
		case 164:
			return 73245;
		// company_type ct, movie_companies mc, title t
		case 292:
			return 194783;
		// info_type it1, movie_companies mc, movie_info mi
		case 104:
			return 699862;
		// info_type it1, movie_info mi, movie_info_idx mi_idx
		case 200:
			return 11841;
		// info_type it1, movie_info mi, title t
		case 328:
			return 36964;
		// info_type it2, movie_companies mc, movie_info_idx mi_idx
		case 176:
			return 64707;
		// info_type it2, movie_info mi, movie_info_idx mi_idx
		case 208:
			return 2137;
		// info_type it2, movie_info_idx mi_idx, title t
		case 400:
			return 4047;
		// movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 224:
			return 68435;
		// movie_companies mc, movie_info mi, title t
		case 352:
			return 108933;
		// movie_companies mc, movie_info_idx mi_idx, title t
		case 416:
			return 38602;
		// movie_info mi, movie_info_idx mi_idx, title t
		case 448:
			return 2213;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi
		case 102:
			return 104935;
		// company_name cn, company_type ct, movie_companies mc, movie_info_idx mi_idx
		case 166:
			return 40962;
		// company_name cn, company_type ct, movie_companies mc, title t
		case 294:
			return 81026;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi
		case 106:
			return 248253;
		// company_name cn, info_type it2, movie_companies mc, movie_info_idx mi_idx
		case 178:
			return 34371;
		// company_name cn, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 226:
			return 23002;
		// company_name cn, movie_companies mc, movie_info mi, title t
		case 354:
			return 31193;
		// company_name cn, movie_companies mc, movie_info_idx mi_idx, title t
		case 418:
			return 17441;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi
		case 108:
			return 315519;
		// company_type ct, info_type it2, movie_companies mc, movie_info_idx mi_idx
		case 180:
			return 24233;
		// company_type ct, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 228:
			return 20656;
		// company_type ct, movie_companies mc, movie_info mi, title t
		case 356:
			return 50247;
		// company_type ct, movie_companies mc, movie_info_idx mi_idx, title t
		case 420:
			return 15765;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx
		case 216:
			return 1943;
		// info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 232:
			return 57289;
		// info_type it1, movie_companies mc, movie_info mi, title t
		case 360:
			return 108933;
		// info_type it1, movie_info mi, movie_info_idx mi_idx, title t
		case 456:
			return 2213;
		// info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 240:
			return 17971;
		// info_type it2, movie_companies mc, movie_info_idx mi_idx, title t
		case 432:
			return 17301;
		// info_type it2, movie_info mi, movie_info_idx mi_idx, title t
		case 464:
			return 557;
		// movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 480:
			return 9682;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi
		case 110:
			return 102526;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info_idx mi_idx
		case 182:
			return 19791;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 230:
			return 7093;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, title t
		case 358:
			return 16143;
		// company_name cn, company_type ct, movie_companies mc, movie_info_idx mi_idx, title t
		case 422:
			return 10153;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 234:
			return 19451;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, title t
		case 362:
			return 31193;
		// company_name cn, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 242:
			return 5793;
		// company_name cn, info_type it2, movie_companies mc, movie_info_idx mi_idx, title t
		case 434:
			return 9068;
		// company_name cn, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 482:
			return 2890;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 236:
			return 19805;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, title t
		case 364:
			return 50247;
		// company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 244:
			return 2931;
		// company_type ct, info_type it2, movie_companies mc, movie_info_idx mi_idx, title t
		case 436:
			return 6610;
		// company_type ct, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 484:
			return 3834;
		// info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 248:
			return 10859;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, title t
		case 472:
			return 557;
		// info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 488:
			return 9682;
		// info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 496:
			return 1934;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 238:
			return 6556;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, title t
		case 366:
			return 16143;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 246:
			return 1579;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info_idx mi_idx, title t
		case 438:
			return 5674;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 486:
			return 1439;
		// company_name cn, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 250:
			return 3659;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 490:
			return 2890;
		// company_name cn, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 498:
			return 707;
		// company_type ct, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 252:
			return 2518;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 492:
			return 3834;
		// company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 500:
			return 708;
		// info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 504:
			return 1934;
		// company_name cn, company_type ct, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 254:
			return 1311;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 494:
			return 1439;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 502:
			return 397;
		// company_name cn, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 506:
			return 707;
		// company_type ct, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 508:
			return 708;
		// company_name cn, company_type ct, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 510:
			return 397;
	};
}

// [company_name cn, company_type ct, info_type it, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t, ]
double
get_truth_cardinality_job_query_13(int total_relids)
{
	switch (total_relids) {
		// company_name cn
		case 2:
			return 9775;
		// company_type ct
		case 4:
			return 1;
		// info_type it
		case 8:
			return 1;
		// info_type it2
		case 16:
			return 1;
		// kind_type kt
		case 32:
			return 1;
		// movie_companies mc
		case 64:
			return 2609129;
		// movie_info mi
		case 128:
			return 14835720;
		// movie_info_idx miidx
		case 256:
			return 1380035;
		// title t
		case 512:
			return 2528312;
		// company_name cn, movie_companies mc
		case 66:
			return 148132;
		// company_type ct, movie_companies mc
		case 68:
			return 1334883;
		// info_type it, movie_info_idx miidx
		case 264:
			return 459925;
		// info_type it2, movie_info mi
		case 144:
			return 3036719;
		// kind_type kt, title t
		case 544:
			return 662825;
		// movie_companies mc, movie_info mi
		case 192:
			return 67371414;
		// movie_companies mc, movie_info_idx miidx
		case 320:
			return 4073078;
		// movie_companies mc, title t
		case 576:
			return 2609129;
		// movie_info mi, movie_info_idx miidx
		case 384:
			return 20885030;
		// movie_info mi, title t
		case 640:
			return 14835720;
		// movie_info_idx miidx, title t
		case 768:
			return 1380035;
		// company_name cn, company_type ct, movie_companies mc
		case 70:
			return 71294;
		// company_name cn, movie_companies mc, movie_info mi
		case 194:
			return 4118374;
		// company_name cn, movie_companies mc, movie_info_idx miidx
		case 322:
			return 252250;
		// company_name cn, movie_companies mc, title t
		case 578:
			return 148132;
		// company_type ct, movie_companies mc, movie_info mi
		case 196:
			return 19468013;
		// company_type ct, movie_companies mc, movie_info_idx miidx
		case 324:
			return 1753403;
		// company_type ct, movie_companies mc, title t
		case 580:
			return 1334883;
		// info_type it, movie_companies mc, movie_info_idx miidx
		case 328:
			return 1354883;
		// info_type it, movie_info mi, movie_info_idx miidx
		case 392:
			return 6930334;
		// info_type it, movie_info_idx miidx, title t
		case 776:
			return 459925;
		// info_type it2, movie_companies mc, movie_info mi
		case 208:
			return 10905021;
		// info_type it2, movie_info mi, movie_info_idx miidx
		case 400:
			return 3367474;
		// info_type it2, movie_info mi, title t
		case 656:
			return 3036719;
		// kind_type kt, movie_companies mc, title t
		case 608:
			return 1307690;
		// kind_type kt, movie_info mi, title t
		case 672:
			return 8301049;
		// kind_type kt, movie_info_idx miidx, title t
		case 800:
			return 629900;
		// movie_companies mc, movie_info mi, movie_info_idx miidx
		case 448:
			return 177388547;
		// movie_companies mc, movie_info mi, title t
		case 704:
			return 67371414;
		// movie_companies mc, movie_info_idx miidx, title t
		case 832:
			return 4073078;
		// movie_info mi, movie_info_idx miidx, title t
		case 896:
			return 20885030;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi
		case 198:
			return 938848;
		// company_name cn, company_type ct, movie_companies mc, movie_info_idx miidx
		case 326:
			return 94568;
		// company_name cn, company_type ct, movie_companies mc, title t
		case 582:
			return 71294;
		// company_name cn, info_type it, movie_companies mc, movie_info_idx miidx
		case 330:
			return 83899;
		// company_name cn, info_type it2, movie_companies mc, movie_info mi
		case 210:
			return 723088;
		// company_name cn, kind_type kt, movie_companies mc, title t
		case 610:
			return 72141;
		// company_name cn, movie_companies mc, movie_info mi, movie_info_idx miidx
		case 450:
			return 11191850;
		// company_name cn, movie_companies mc, movie_info mi, title t
		case 706:
			return 4118374;
		// company_name cn, movie_companies mc, movie_info_idx miidx, title t
		case 834:
			return 252250;
		// company_type ct, info_type it, movie_companies mc, movie_info_idx miidx
		case 332:
			return 584222;
		// company_type ct, info_type it2, movie_companies mc, movie_info mi
		case 212:
			return 3243070;
		// company_type ct, kind_type kt, movie_companies mc, title t
		case 612:
			return 640620;
		// company_type ct, movie_companies mc, movie_info mi, movie_info_idx miidx
		case 452:
			return 42553106;
		// company_type ct, movie_companies mc, movie_info mi, title t
		case 708:
			return 19468013;
		// company_type ct, movie_companies mc, movie_info_idx miidx, title t
		case 836:
			return 1753403;
		// info_type it, info_type it2, movie_info mi, movie_info_idx miidx
		case 408:
			return 1118984;
		// info_type it, kind_type kt, movie_info_idx miidx, title t
		case 808:
			return 209880;
		// info_type it, movie_companies mc, movie_info mi, movie_info_idx miidx
		case 456:
			return 57984052;
		// info_type it, movie_companies mc, movie_info_idx miidx, title t
		case 840:
			return 1354883;
		// info_type it, movie_info mi, movie_info_idx miidx, title t
		case 904:
			return 6930334;
		// info_type it2, kind_type kt, movie_info mi, title t
		case 688:
			return 1083597;
		// info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx
		case 464:
			return 29157386;
		// info_type it2, movie_companies mc, movie_info mi, title t
		case 720:
			return 10905021;
		// info_type it2, movie_info mi, movie_info_idx miidx, title t
		case 912:
			return 3367474;
		// kind_type kt, movie_companies mc, movie_info mi, title t
		case 736:
			return 53714510;
		// kind_type kt, movie_companies mc, movie_info_idx miidx, title t
		case 864:
			return 2327681;
		// kind_type kt, movie_info mi, movie_info_idx miidx, title t
		case 928:
			return 13638164;
		// movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 960:
			return 177388547;
		// company_name cn, company_type ct, info_type it, movie_companies mc, movie_info_idx miidx
		case 334:
			return 31510;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info mi
		case 214:
			return 175621;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, title t
		case 614:
			return 32853;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_info_idx miidx
		case 454:
			return 2001907;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, title t
		case 710:
			return 938848;
		// company_name cn, company_type ct, movie_companies mc, movie_info_idx miidx, title t
		case 838:
			return 94568;
		// company_name cn, info_type it, movie_companies mc, movie_info mi, movie_info_idx miidx
		case 458:
			return 3659290;
		// company_name cn, info_type it, movie_companies mc, movie_info_idx miidx, title t
		case 842:
			return 83899;
		// company_name cn, info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx
		case 466:
			return 1975563;
		// company_name cn, info_type it2, movie_companies mc, movie_info mi, title t
		case 722:
			return 723088;
		// company_name cn, kind_type kt, movie_companies mc, movie_info mi, title t
		case 738:
			return 3354059;
		// company_name cn, kind_type kt, movie_companies mc, movie_info_idx miidx, title t
		case 866:
			return 146473;
		// company_name cn, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 962:
			return 11191850;
		// company_type ct, info_type it, movie_companies mc, movie_info mi, movie_info_idx miidx
		case 460:
			return 14091607;
		// company_type ct, info_type it, movie_companies mc, movie_info_idx miidx, title t
		case 844:
			return 584222;
		// company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx
		case 468:
			return 7548645;
		// company_type ct, info_type it2, movie_companies mc, movie_info mi, title t
		case 724:
			return 3243070;
		// company_type ct, kind_type kt, movie_companies mc, movie_info mi, title t
		case 740:
			return 13398803;
		// company_type ct, kind_type kt, movie_companies mc, movie_info_idx miidx, title t
		case 868:
			return 908567;
		// company_type ct, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 964:
			return 42553106;
		// info_type it, info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx
		case 472:
			return 9595757;
		// info_type it, info_type it2, movie_info mi, movie_info_idx miidx, title t
		case 920:
			return 1118984;
		// info_type it, kind_type kt, movie_companies mc, movie_info_idx miidx, title t
		case 872:
			return 773084;
		// info_type it, kind_type kt, movie_info mi, movie_info_idx miidx, title t
		case 936:
			return 4514712;
		// info_type it, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 968:
			return 57984052;
		// info_type it2, kind_type kt, movie_companies mc, movie_info mi, title t
		case 752:
			return 8699319;
		// info_type it2, kind_type kt, movie_info mi, movie_info_idx miidx, title t
		case 944:
			return 2184715;
		// info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 976:
			return 29157386;
		// kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 992:
			return 148621556;
		// company_name cn, company_type ct, info_type it, movie_companies mc, movie_info mi, movie_info_idx miidx
		case 462:
			return 662744;
		// company_name cn, company_type ct, info_type it, movie_companies mc, movie_info_idx miidx, title t
		case 846:
			return 31510;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx
		case 470:
			return 404319;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info mi, title t
		case 726:
			return 175621;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_info mi, title t
		case 742:
			return 661497;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_info_idx miidx, title t
		case 870:
			return 49448;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 966:
			return 2001907;
		// company_name cn, info_type it, info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx
		case 474:
			return 650584;
		// company_name cn, info_type it, kind_type kt, movie_companies mc, movie_info_idx miidx, title t
		case 874:
			return 48640;
		// company_name cn, info_type it, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 970:
			return 3659290;
		// company_name cn, info_type it2, kind_type kt, movie_companies mc, movie_info mi, title t
		case 754:
			return 585922;
		// company_name cn, info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 978:
			return 1975563;
		// company_name cn, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 994:
			return 9599039;
		// company_type ct, info_type it, info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx
		case 476:
			return 2504990;
		// company_type ct, info_type it, kind_type kt, movie_companies mc, movie_info_idx miidx, title t
		case 876:
			return 302610;
		// company_type ct, info_type it, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 972:
			return 14091607;
		// company_type ct, info_type it2, kind_type kt, movie_companies mc, movie_info mi, title t
		case 756:
			return 2250196;
		// company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 980:
			return 7548645;
		// company_type ct, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 996:
			return 31047995;
		// info_type it, info_type it2, kind_type kt, movie_info mi, movie_info_idx miidx, title t
		case 952:
			return 724731;
		// info_type it, info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 984:
			return 9595757;
		// info_type it, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 1000:
			return 48395055;
		// info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 1008:
			return 24740873;
		// company_name cn, company_type ct, info_type it, info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx
		case 478:
			return 134189;
		// company_name cn, company_type ct, info_type it, kind_type kt, movie_companies mc, movie_info_idx miidx, title t
		case 878:
			return 16470;
		// company_name cn, company_type ct, info_type it, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 974:
			return 662744;
		// company_name cn, company_type ct, info_type it2, kind_type kt, movie_companies mc, movie_info mi, title t
		case 758:
			return 128993;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 982:
			return 404319;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 998:
			return 1562656;
		// company_name cn, info_type it, info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 986:
			return 650584;
		// company_name cn, info_type it, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 1002:
			return 3128353;
		// company_name cn, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 1010:
			return 1692741;
		// company_type ct, info_type it, info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 988:
			return 2504990;
		// company_type ct, info_type it, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 1004:
			return 10256570;
		// company_type ct, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 1012:
			return 5792160;
		// info_type it, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 1016:
			return 8123586;
		// company_name cn, company_type ct, info_type it, info_type it2, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 990:
			return 134189;
		// company_name cn, company_type ct, info_type it, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 1006:
			return 516327;
		// company_name cn, company_type ct, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 1014:
			return 335055;
		// company_name cn, info_type it, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 1018:
			return 556310;
		// company_type ct, info_type it, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 1020:
			return 1919495;
		// company_name cn, company_type ct, info_type it, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx miidx, title t
		case 1022:
			return 111101;
	};
}

// [info_type it1, info_type it2, keyword k, kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t, ]
double
get_truth_cardinality_job_query_14(int total_relids)
{
	switch (total_relids) {
		// info_type it1
		case 2:
			return 1;
		// info_type it2
		case 4:
			return 1;
		// keyword k
		case 8:
			return 3;
		// kind_type kt
		case 16:
			return 1;
		// movie_info mi
		case 32:
			return 706674;
		// movie_info_idx mi_idx
		case 64:
			return 1342886;
		// movie_keyword mk
		case 128:
			return 4523930;
		// title t
		case 256:
			return 391666;
		// info_type it1, movie_info mi
		case 34:
			return 614251;
		// info_type it2, movie_info_idx mi_idx
		case 68:
			return 454230;
		// keyword k, movie_keyword mk
		case 136:
			return 37091;
		// kind_type kt, title t
		case 272:
			return 98992;
		// movie_info mi, movie_info_idx mi_idx
		case 96:
			return 751498;
		// movie_info mi, movie_keyword mk
		case 160:
			return 4060930;
		// movie_info mi, title t
		case 288:
			return 99589;
		// movie_info_idx mi_idx, movie_keyword mk
		case 192:
			return 10130503;
		// movie_info_idx mi_idx, title t
		case 320:
			return 127199;
		// movie_keyword mk, title t
		case 384:
			return 299534;
		// info_type it1, movie_info mi, movie_info_idx mi_idx
		case 98:
			return 632417;
		// info_type it1, movie_info mi, movie_keyword mk
		case 162:
			return 2892323;
		// info_type it1, movie_info mi, title t
		case 290:
			return 90826;
		// info_type it2, movie_info mi, movie_info_idx mi_idx
		case 100:
			return 253194;
		// info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 196:
			return 3403472;
		// info_type it2, movie_info_idx mi_idx, title t
		case 324:
			return 42711;
		// keyword k, movie_info mi, movie_keyword mk
		case 168:
			return 34372;
		// keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 200:
			return 94604;
		// keyword k, movie_keyword mk, title t
		case 392:
			return 2582;
		// kind_type kt, movie_info mi, title t
		case 304:
			return 60163;
		// kind_type kt, movie_info_idx mi_idx, title t
		case 336:
			return 51071;
		// kind_type kt, movie_keyword mk, title t
		case 400:
			return 164339;
		// movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 224:
			return 10189235;
		// movie_info mi, movie_info_idx mi_idx, title t
		case 352:
			return 59833;
		// movie_info mi, movie_keyword mk, title t
		case 416:
			return 199113;
		// movie_info_idx mi_idx, movie_keyword mk, title t
		case 448:
			return 519388;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx
		case 102:
			return 213239;
		// info_type it1, keyword k, movie_info mi, movie_keyword mk
		case 170:
			return 23916;
		// info_type it1, kind_type kt, movie_info mi, title t
		case 306:
			return 55882;
		// info_type it1, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 226:
			return 6867550;
		// info_type it1, movie_info mi, movie_info_idx mi_idx, title t
		case 354:
			return 52511;
		// info_type it1, movie_info mi, movie_keyword mk, title t
		case 418:
			return 175423;
		// info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 204:
			return 31800;
		// info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 340:
			return 17272;
		// info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 228:
			return 3351293;
		// info_type it2, movie_info mi, movie_info_idx mi_idx, title t
		case 356:
			return 20004;
		// info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 452:
			return 171521;
		// keyword k, kind_type kt, movie_keyword mk, title t
		case 408:
			return 1966;
		// keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 232:
			return 93054;
		// keyword k, movie_info mi, movie_keyword mk, title t
		case 424:
			return 1802;
		// keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 456:
			return 4554;
		// kind_type kt, movie_info mi, movie_info_idx mi_idx, title t
		case 368:
			return 29868;
		// kind_type kt, movie_info mi, movie_keyword mk, title t
		case 432:
			return 128014;
		// kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 464:
			return 325087;
		// movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 480:
			return 369597;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 230:
			return 2302523;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, title t
		case 358:
			return 17514;
		// info_type it1, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 234:
			return 62495;
		// info_type it1, keyword k, movie_info mi, movie_keyword mk, title t
		case 426:
			return 1614;
		// info_type it1, kind_type kt, movie_info mi, movie_info_idx mi_idx, title t
		case 370:
			return 25943;
		// info_type it1, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 434:
			return 111264;
		// info_type it1, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 482:
			return 326286;
		// info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 236:
			return 30642;
		// info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 460:
			return 1488;
		// info_type it2, kind_type kt, movie_info mi, movie_info_idx mi_idx, title t
		case 372:
			return 10078;
		// info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 468:
			return 109948;
		// info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 484:
			return 122068;
		// keyword k, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 440:
			return 1445;
		// keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 472:
			return 3403;
		// keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 488:
			return 3429;
		// kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 496:
			return 261381;
		// info_type it1, info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 238:
			return 20967;
		// info_type it1, info_type it2, kind_type kt, movie_info mi, movie_info_idx mi_idx, title t
		case 374:
			return 8746;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 486:
			return 107531;
		// info_type it1, keyword k, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 442:
			return 1281;
		// info_type it1, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 490:
			return 3005;
		// info_type it1, kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 498:
			return 224711;
		// info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 476:
			return 1147;
		// info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 492:
			return 1124;
		// info_type it2, kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 500:
			return 87997;
		// keyword k, kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 504:
			return 2620;
		// info_type it1, info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 494:
			return 985;
		// info_type it1, info_type it2, kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 502:
			return 75669;
		// info_type it1, keyword k, kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 506:
			return 2262;
		// info_type it2, keyword k, kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 508:
			return 878;
		// info_type it1, info_type it2, keyword k, kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 510:
			return 761;
	};
}

// [aka_title at, company_name cn, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t, ]
double
get_truth_cardinality_job_query_15(int total_relids)
{
	switch (total_relids) {
		// aka_title at
		case 2:
			return 361472;
		// company_name cn
		case 4:
			return 84843;
		// company_type ct
		case 8:
			return 4;
		// info_type it1
		case 16:
			return 1;
		// keyword k
		case 32:
			return 134170;
		// movie_companies mc
		case 64:
			return 61664;
		// movie_info mi
		case 128:
			return 1771;
		// movie_keyword mk
		case 256:
			return 4523930;
		// title t
		case 512:
			return 1381453;
		// aka_title at, movie_companies mc
		case 66:
			return 20965;
		// aka_title at, movie_info mi
		case 130:
			return 116;
		// aka_title at, movie_keyword mk
		case 258:
			return 6547234;
		// aka_title at, title t
		case 514:
			return 85960;
		// company_name cn, movie_companies mc
		case 68:
			return 43837;
		// company_type ct, movie_companies mc
		case 72:
			return 61664;
		// info_type it1, movie_info mi
		case 144:
			return 1771;
		// keyword k, movie_keyword mk
		case 288:
			return 4523930;
		// movie_companies mc, movie_info mi
		case 192:
			return 699;
		// movie_companies mc, movie_keyword mk
		case 320:
			return 457967;
		// movie_companies mc, title t
		case 576:
			return 52276;
		// movie_info mi, movie_keyword mk
		case 384:
			return 4429;
		// movie_info mi, title t
		case 640:
			return 1749;
		// movie_keyword mk, title t
		case 768:
			return 1970380;
		// aka_title at, company_name cn, movie_companies mc
		case 70:
			return 13699;
		// aka_title at, company_type ct, movie_companies mc
		case 74:
			return 20965;
		// aka_title at, info_type it1, movie_info mi
		case 146:
			return 116;
		// aka_title at, keyword k, movie_keyword mk
		case 290:
			return 6547234;
		// aka_title at, movie_companies mc, movie_info mi
		case 194:
			return 76;
		// aka_title at, movie_companies mc, movie_keyword mk
		case 322:
			return 686947;
		// aka_title at, movie_companies mc, title t
		case 578:
			return 10386;
		// aka_title at, movie_info mi, movie_keyword mk
		case 386:
			return 1124;
		// aka_title at, movie_info mi, title t
		case 642:
			return 111;
		// aka_title at, movie_keyword mk, title t
		case 770:
			return 1764494;
		// company_name cn, company_type ct, movie_companies mc
		case 76:
			return 43837;
		// company_name cn, movie_companies mc, movie_info mi
		case 196:
			return 668;
		// company_name cn, movie_companies mc, movie_keyword mk
		case 324:
			return 352583;
		// company_name cn, movie_companies mc, title t
		case 580:
			return 37167;
		// company_type ct, movie_companies mc, movie_info mi
		case 200:
			return 699;
		// company_type ct, movie_companies mc, movie_keyword mk
		case 328:
			return 457967;
		// company_type ct, movie_companies mc, title t
		case 584:
			return 52276;
		// info_type it1, movie_companies mc, movie_info mi
		case 208:
			return 699;
		// info_type it1, movie_info mi, movie_keyword mk
		case 400:
			return 4429;
		// info_type it1, movie_info mi, title t
		case 656:
			return 1749;
		// keyword k, movie_companies mc, movie_keyword mk
		case 352:
			return 457967;
		// keyword k, movie_info mi, movie_keyword mk
		case 416:
			return 4429;
		// keyword k, movie_keyword mk, title t
		case 800:
			return 1970380;
		// movie_companies mc, movie_info mi, movie_keyword mk
		case 448:
			return 1602;
		// movie_companies mc, movie_info mi, title t
		case 704:
			return 688;
		// movie_companies mc, movie_keyword mk, title t
		case 832:
			return 299667;
		// movie_info mi, movie_keyword mk, title t
		case 896:
			return 4309;
		// aka_title at, company_name cn, company_type ct, movie_companies mc
		case 78:
			return 13699;
		// aka_title at, company_name cn, movie_companies mc, movie_info mi
		case 198:
			return 71;
		// aka_title at, company_name cn, movie_companies mc, movie_keyword mk
		case 326:
			return 519010;
		// aka_title at, company_name cn, movie_companies mc, title t
		case 582:
			return 5134;
		// aka_title at, company_type ct, movie_companies mc, movie_info mi
		case 202:
			return 76;
		// aka_title at, company_type ct, movie_companies mc, movie_keyword mk
		case 330:
			return 686947;
		// aka_title at, company_type ct, movie_companies mc, title t
		case 586:
			return 10386;
		// aka_title at, info_type it1, movie_companies mc, movie_info mi
		case 210:
			return 76;
		// aka_title at, info_type it1, movie_info mi, movie_keyword mk
		case 402:
			return 1124;
		// aka_title at, info_type it1, movie_info mi, title t
		case 658:
			return 111;
		// aka_title at, keyword k, movie_companies mc, movie_keyword mk
		case 354:
			return 686947;
		// aka_title at, keyword k, movie_info mi, movie_keyword mk
		case 418:
			return 1124;
		// aka_title at, keyword k, movie_keyword mk, title t
		case 802:
			return 1764494;
		// aka_title at, movie_companies mc, movie_info mi, movie_keyword mk
		case 450:
			return 526;
		// aka_title at, movie_companies mc, movie_info mi, title t
		case 706:
			return 59;
		// aka_title at, movie_companies mc, movie_keyword mk, title t
		case 834:
			return 311249;
		// aka_title at, movie_info mi, movie_keyword mk, title t
		case 898:
			return 1024;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi
		case 204:
			return 668;
		// company_name cn, company_type ct, movie_companies mc, movie_keyword mk
		case 332:
			return 352583;
		// company_name cn, company_type ct, movie_companies mc, title t
		case 588:
			return 37167;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi
		case 212:
			return 668;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 356:
			return 352583;
		// company_name cn, movie_companies mc, movie_info mi, movie_keyword mk
		case 452:
			return 1473;
		// company_name cn, movie_companies mc, movie_info mi, title t
		case 708:
			return 659;
		// company_name cn, movie_companies mc, movie_keyword mk, title t
		case 836:
			return 213410;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi
		case 216:
			return 699;
		// company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 360:
			return 457967;
		// company_type ct, movie_companies mc, movie_info mi, movie_keyword mk
		case 456:
			return 1602;
		// company_type ct, movie_companies mc, movie_info mi, title t
		case 712:
			return 688;
		// company_type ct, movie_companies mc, movie_keyword mk, title t
		case 840:
			return 299667;
		// info_type it1, keyword k, movie_info mi, movie_keyword mk
		case 432:
			return 4429;
		// info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 464:
			return 1602;
		// info_type it1, movie_companies mc, movie_info mi, title t
		case 720:
			return 688;
		// info_type it1, movie_info mi, movie_keyword mk, title t
		case 912:
			return 4309;
		// keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 480:
			return 1602;
		// keyword k, movie_companies mc, movie_keyword mk, title t
		case 864:
			return 299667;
		// keyword k, movie_info mi, movie_keyword mk, title t
		case 928:
			return 4309;
		// movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 960:
			return 1512;
		// aka_title at, company_name cn, company_type ct, movie_companies mc, movie_info mi
		case 206:
			return 71;
		// aka_title at, company_name cn, company_type ct, movie_companies mc, movie_keyword mk
		case 334:
			return 519010;
		// aka_title at, company_name cn, company_type ct, movie_companies mc, title t
		case 590:
			return 5134;
		// aka_title at, company_name cn, info_type it1, movie_companies mc, movie_info mi
		case 214:
			return 71;
		// aka_title at, company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 358:
			return 519010;
		// aka_title at, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk
		case 454:
			return 482;
		// aka_title at, company_name cn, movie_companies mc, movie_info mi, title t
		case 710:
			return 57;
		// aka_title at, company_name cn, movie_companies mc, movie_keyword mk, title t
		case 838:
			return 192112;
		// aka_title at, company_type ct, info_type it1, movie_companies mc, movie_info mi
		case 218:
			return 76;
		// aka_title at, company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 362:
			return 686947;
		// aka_title at, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk
		case 458:
			return 526;
		// aka_title at, company_type ct, movie_companies mc, movie_info mi, title t
		case 714:
			return 59;
		// aka_title at, company_type ct, movie_companies mc, movie_keyword mk, title t
		case 842:
			return 311249;
		// aka_title at, info_type it1, keyword k, movie_info mi, movie_keyword mk
		case 434:
			return 1124;
		// aka_title at, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 466:
			return 526;
		// aka_title at, info_type it1, movie_companies mc, movie_info mi, title t
		case 722:
			return 59;
		// aka_title at, info_type it1, movie_info mi, movie_keyword mk, title t
		case 914:
			return 1024;
		// aka_title at, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 482:
			return 526;
		// aka_title at, keyword k, movie_companies mc, movie_keyword mk, title t
		case 866:
			return 311249;
		// aka_title at, keyword k, movie_info mi, movie_keyword mk, title t
		case 930:
			return 1024;
		// aka_title at, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 962:
			return 354;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi
		case 220:
			return 668;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 364:
			return 352583;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk
		case 460:
			return 1473;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, title t
		case 716:
			return 659;
		// company_name cn, company_type ct, movie_companies mc, movie_keyword mk, title t
		case 844:
			return 213410;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 468:
			return 1473;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, title t
		case 724:
			return 659;
		// company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 484:
			return 1473;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 868:
			return 213410;
		// company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 964:
			return 1398;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 472:
			return 1602;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, title t
		case 728:
			return 688;
		// company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 488:
			return 1602;
		// company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 872:
			return 299667;
		// company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 968:
			return 1512;
		// info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 496:
			return 1602;
		// info_type it1, keyword k, movie_info mi, movie_keyword mk, title t
		case 944:
			return 4309;
		// info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 976:
			return 1512;
		// keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 992:
			return 1512;
		// aka_title at, company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi
		case 222:
			return 71;
		// aka_title at, company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 366:
			return 519010;
		// aka_title at, company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk
		case 462:
			return 482;
		// aka_title at, company_name cn, company_type ct, movie_companies mc, movie_info mi, title t
		case 718:
			return 57;
		// aka_title at, company_name cn, company_type ct, movie_companies mc, movie_keyword mk, title t
		case 846:
			return 192112;
		// aka_title at, company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 470:
			return 482;
		// aka_title at, company_name cn, info_type it1, movie_companies mc, movie_info mi, title t
		case 726:
			return 57;
		// aka_title at, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 486:
			return 482;
		// aka_title at, company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 870:
			return 192112;
		// aka_title at, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 966:
			return 328;
		// aka_title at, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 474:
			return 526;
		// aka_title at, company_type ct, info_type it1, movie_companies mc, movie_info mi, title t
		case 730:
			return 59;
		// aka_title at, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 490:
			return 526;
		// aka_title at, company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 874:
			return 311249;
		// aka_title at, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 970:
			return 354;
		// aka_title at, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 498:
			return 526;
		// aka_title at, info_type it1, keyword k, movie_info mi, movie_keyword mk, title t
		case 946:
			return 1024;
		// aka_title at, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 978:
			return 354;
		// aka_title at, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 994:
			return 354;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 476:
			return 1473;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, title t
		case 732:
			return 659;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 492:
			return 1473;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 876:
			return 213410;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 972:
			return 1398;
		// company_name cn, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 500:
			return 1473;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 980:
			return 1398;
		// company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 996:
			return 1398;
		// company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 504:
			return 1602;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 984:
			return 1512;
		// company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 1000:
			return 1512;
		// info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 1008:
			return 1512;
		// aka_title at, company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 478:
			return 482;
		// aka_title at, company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, title t
		case 734:
			return 57;
		// aka_title at, company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 494:
			return 482;
		// aka_title at, company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 878:
			return 192112;
		// aka_title at, company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 974:
			return 328;
		// aka_title at, company_name cn, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 502:
			return 482;
		// aka_title at, company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 982:
			return 328;
		// aka_title at, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 998:
			return 328;
		// aka_title at, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 506:
			return 526;
		// aka_title at, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 986:
			return 354;
		// aka_title at, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 1002:
			return 354;
		// aka_title at, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 1010:
			return 354;
		// company_name cn, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 508:
			return 1473;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 988:
			return 1398;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 1004:
			return 1398;
		// company_name cn, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 1012:
			return 1398;
		// company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 1016:
			return 1512;
		// aka_title at, company_name cn, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 510:
			return 482;
		// aka_title at, company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 990:
			return 328;
		// aka_title at, company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 1006:
			return 328;
		// aka_title at, company_name cn, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 1014:
			return 328;
		// aka_title at, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 1018:
			return 354;
		// company_name cn, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 1020:
			return 1398;
		// aka_title at, company_name cn, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 1022:
			return 328;
	};
}

// [aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, title t, ]
double
get_truth_cardinality_job_query_16(int total_relids)
{
	switch (total_relids) {
		// aka_name an
		case 2:
			return 901343;
		// cast_info ci
		case 4:
			return 36244344;
		// company_name cn
		case 8:
			return 84843;
		// keyword k
		case 16:
			return 1;
		// movie_companies mc
		case 32:
			return 2609129;
		// movie_keyword mk
		case 64:
			return 4523930;
		// name n
		case 128:
			return 4167491;
		// title t
		case 256:
			return 68245;
		// aka_name an, cast_info ci
		case 6:
			return 36417493;
		// aka_name an, name n
		case 130:
			return 901343;
		// cast_info ci, movie_companies mc
		case 36:
			return 80274241;
		// cast_info ci, movie_keyword mk
		case 68:
			return 215765477;
		// cast_info ci, name n
		case 132:
			return 36244344;
		// cast_info ci, title t
		case 260:
			return 1166027;
		// company_name cn, movie_companies mc
		case 40:
			return 1153798;
		// keyword k, movie_keyword mk
		case 80:
			return 41840;
		// movie_companies mc, movie_keyword mk
		case 96:
			return 34863638;
		// movie_companies mc, title t
		case 288:
			return 20099;
		// movie_keyword mk, title t
		case 320:
			return 15655;
		// aka_name an, cast_info ci, movie_companies mc
		case 38:
			return 87239860;
		// aka_name an, cast_info ci, movie_keyword mk
		case 70:
			return 253950969;
		// aka_name an, cast_info ci, name n
		case 134:
			return 36417493;
		// aka_name an, cast_info ci, title t
		case 262:
			return 1065565;
		// cast_info ci, company_name cn, movie_companies mc
		case 44:
			return 32289229;
		// cast_info ci, keyword k, movie_keyword mk
		case 84:
			return 1038393;
		// cast_info ci, movie_companies mc, movie_keyword mk
		case 100:
			return 3101350543;
		// cast_info ci, movie_companies mc, name n
		case 164:
			return 80274241;
		// cast_info ci, movie_companies mc, title t
		case 292:
			return 606940;
		// cast_info ci, movie_keyword mk, name n
		case 196:
			return 215765477;
		// cast_info ci, movie_keyword mk, title t
		case 324:
			return 212362;
		// cast_info ci, name n, title t
		case 388:
			return 1166027;
		// company_name cn, movie_companies mc, movie_keyword mk
		case 104:
			return 12177631;
		// company_name cn, movie_companies mc, title t
		case 296:
			return 7622;
		// keyword k, movie_companies mc, movie_keyword mk
		case 112:
			return 148552;
		// keyword k, movie_keyword mk, title t
		case 336:
			return 146;
		// movie_companies mc, movie_keyword mk, title t
		case 352:
			return 4234;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc
		case 46:
			return 41307596;
		// aka_name an, cast_info ci, keyword k, movie_keyword mk
		case 86:
			return 1294886;
		// aka_name an, cast_info ci, movie_companies mc, movie_keyword mk
		case 102:
			return 3185061897;
		// aka_name an, cast_info ci, movie_companies mc, name n
		case 166:
			return 87239860;
		// aka_name an, cast_info ci, movie_companies mc, title t
		case 294:
			return 793415;
		// aka_name an, cast_info ci, movie_keyword mk, name n
		case 198:
			return 253950969;
		// aka_name an, cast_info ci, movie_keyword mk, title t
		case 326:
			return 242687;
		// aka_name an, cast_info ci, name n, title t
		case 390:
			return 1065565;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk
		case 108:
			return 916402420;
		// cast_info ci, company_name cn, movie_companies mc, name n
		case 172:
			return 32289229;
		// cast_info ci, company_name cn, movie_companies mc, title t
		case 300:
			return 108588;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk
		case 116:
			return 7796926;
		// cast_info ci, keyword k, movie_keyword mk, name n
		case 212:
			return 1038393;
		// cast_info ci, keyword k, movie_keyword mk, title t
		case 340:
			return 1173;
		// cast_info ci, movie_companies mc, movie_keyword mk, name n
		case 228:
			return 3101350543;
		// cast_info ci, movie_companies mc, movie_keyword mk, title t
		case 356:
			return 95580;
		// cast_info ci, movie_companies mc, name n, title t
		case 420:
			return 606940;
		// cast_info ci, movie_keyword mk, name n, title t
		case 452:
			return 212362;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 120:
			return 68316;
		// company_name cn, movie_companies mc, movie_keyword mk, title t
		case 360:
			return 1000;
		// keyword k, movie_companies mc, movie_keyword mk, title t
		case 368:
			return 54;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk
		case 110:
			return 1074293838;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, name n
		case 174:
			return 41307596;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, title t
		case 302:
			return 130933;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_keyword mk
		case 118:
			return 8847894;
		// aka_name an, cast_info ci, keyword k, movie_keyword mk, name n
		case 214:
			return 1294886;
		// aka_name an, cast_info ci, keyword k, movie_keyword mk, title t
		case 342:
			return 933;
		// aka_name an, cast_info ci, movie_companies mc, movie_keyword mk, name n
		case 230:
			return 3185061897;
		// aka_name an, cast_info ci, movie_companies mc, movie_keyword mk, title t
		case 358:
			return 153390;
		// aka_name an, cast_info ci, movie_companies mc, name n, title t
		case 422:
			return 793415;
		// aka_name an, cast_info ci, movie_keyword mk, name n, title t
		case 454:
			return 242687;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 124:
			return 2832555;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n
		case 236:
			return 916402420;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, title t
		case 364:
			return 23346;
		// cast_info ci, company_name cn, movie_companies mc, name n, title t
		case 428:
			return 108588;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n
		case 244:
			return 7796926;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk, title t
		case 372:
			return 1089;
		// cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 468:
			return 1173;
		// cast_info ci, movie_companies mc, movie_keyword mk, name n, title t
		case 484:
			return 95580;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 376:
			return 25;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 126:
			return 3710592;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n
		case 238:
			return 1074293838;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, title t
		case 366:
			return 48106;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, name n, title t
		case 430:
			return 130933;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n
		case 246:
			return 8847894;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, title t
		case 374:
			return 898;
		// aka_name an, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 470:
			return 933;
		// aka_name an, cast_info ci, movie_companies mc, movie_keyword mk, name n, title t
		case 486:
			return 153390;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n
		case 252:
			return 2832555;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 380:
			return 323;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n, title t
		case 492:
			return 23346;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n, title t
		case 500:
			return 1089;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n
		case 254:
			return 3710592;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 382:
			return 385;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n, title t
		case 494:
			return 48106;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n, title t
		case 502:
			return 898;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, title t
		case 508:
			return 323;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, title t
		case 510:
			return 385;
	};
}

// [cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, title t, ]
double
get_truth_cardinality_job_query_17(int total_relids)
{
	switch (total_relids) {
		// cast_info ci
		case 2:
			return 36244344;
		// company_name cn
		case 4:
			return 84843;
		// keyword k
		case 8:
			return 1;
		// movie_companies mc
		case 16:
			return 2609129;
		// movie_keyword mk
		case 32:
			return 4523930;
		// name n
		case 64:
			return 343399;
		// title t
		case 128:
			return 2528312;
		// cast_info ci, movie_companies mc
		case 18:
			return 80274241;
		// cast_info ci, movie_keyword mk
		case 34:
			return 215765477;
		// cast_info ci, name n
		case 66:
			return 3118033;
		// cast_info ci, title t
		case 130:
			return 36244344;
		// company_name cn, movie_companies mc
		case 20:
			return 1153798;
		// keyword k, movie_keyword mk
		case 40:
			return 41840;
		// movie_companies mc, movie_keyword mk
		case 48:
			return 34863638;
		// movie_companies mc, title t
		case 144:
			return 2609129;
		// movie_keyword mk, title t
		case 160:
			return 4523930;
		// cast_info ci, company_name cn, movie_companies mc
		case 22:
			return 32289229;
		// cast_info ci, keyword k, movie_keyword mk
		case 42:
			return 1038393;
		// cast_info ci, movie_companies mc, movie_keyword mk
		case 50:
			return 3101350543;
		// cast_info ci, movie_companies mc, name n
		case 82:
			return 7029481;
		// cast_info ci, movie_companies mc, title t
		case 146:
			return 80274241;
		// cast_info ci, movie_keyword mk, name n
		case 98:
			return 18870771;
		// cast_info ci, movie_keyword mk, title t
		case 162:
			return 215765477;
		// cast_info ci, name n, title t
		case 194:
			return 3118033;
		// company_name cn, movie_companies mc, movie_keyword mk
		case 52:
			return 12177631;
		// company_name cn, movie_companies mc, title t
		case 148:
			return 1153798;
		// keyword k, movie_companies mc, movie_keyword mk
		case 56:
			return 148552;
		// keyword k, movie_keyword mk, title t
		case 168:
			return 41840;
		// movie_companies mc, movie_keyword mk, title t
		case 176:
			return 34863638;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk
		case 54:
			return 916402420;
		// cast_info ci, company_name cn, movie_companies mc, name n
		case 86:
			return 2906911;
		// cast_info ci, company_name cn, movie_companies mc, title t
		case 150:
			return 32289229;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk
		case 58:
			return 7796926;
		// cast_info ci, keyword k, movie_keyword mk, name n
		case 106:
			return 93315;
		// cast_info ci, keyword k, movie_keyword mk, title t
		case 170:
			return 1038393;
		// cast_info ci, movie_companies mc, movie_keyword mk, name n
		case 114:
			return 274808964;
		// cast_info ci, movie_companies mc, movie_keyword mk, title t
		case 178:
			return 3101350543;
		// cast_info ci, movie_companies mc, name n, title t
		case 210:
			return 7029481;
		// cast_info ci, movie_keyword mk, name n, title t
		case 226:
			return 18870771;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 60:
			return 68316;
		// company_name cn, movie_companies mc, movie_keyword mk, title t
		case 180:
			return 12177631;
		// keyword k, movie_companies mc, movie_keyword mk, title t
		case 184:
			return 148552;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 62:
			return 2832555;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n
		case 118:
			return 81288292;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, title t
		case 182:
			return 916402420;
		// cast_info ci, company_name cn, movie_companies mc, name n, title t
		case 214:
			return 2906911;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n
		case 122:
			return 702849;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk, title t
		case 186:
			return 7796926;
		// cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 234:
			return 93315;
		// cast_info ci, movie_companies mc, movie_keyword mk, name n, title t
		case 242:
			return 274808964;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 188:
			return 68316;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n
		case 126:
			return 258289;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 190:
			return 2832555;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n, title t
		case 246:
			return 81288292;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n, title t
		case 250:
			return 702849;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, title t
		case 254:
			return 258289;
	};
}

// [cast_info ci, info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, name n, title t, ]
double
get_truth_cardinality_job_query_18(int total_relids)
{
	switch (total_relids) {
		// cast_info ci
		case 2:
			return 2379271;
		// info_type it1
		case 4:
			return 1;
		// info_type it2
		case 8:
			return 1;
		// movie_info mi
		case 16:
			return 14835720;
		// movie_info_idx mi_idx
		case 32:
			return 1380035;
		// name n
		case 64:
			return 9062;
		// title t
		case 128:
			return 2528312;
		// cast_info ci, movie_info mi
		case 18:
			return 23499130;
		// cast_info ci, movie_info_idx mi_idx
		case 34:
			return 2577225;
		// cast_info ci, name n
		case 66:
			return 6719;
		// cast_info ci, title t
		case 130:
			return 2379271;
		// info_type it1, movie_info mi
		case 20:
			return 121863;
		// info_type it2, movie_info_idx mi_idx
		case 40:
			return 459925;
		// movie_info mi, movie_info_idx mi_idx
		case 48:
			return 20885030;
		// movie_info mi, title t
		case 144:
			return 14835720;
		// movie_info_idx mi_idx, title t
		case 160:
			return 1380035;
		// cast_info ci, info_type it1, movie_info mi
		case 22:
			return 212985;
		// cast_info ci, info_type it2, movie_info_idx mi_idx
		case 42:
			return 858842;
		// cast_info ci, movie_info mi, movie_info_idx mi_idx
		case 50:
			return 50136494;
		// cast_info ci, movie_info mi, name n
		case 82:
			return 95896;
		// cast_info ci, movie_info mi, title t
		case 146:
			return 23499130;
		// cast_info ci, movie_info_idx mi_idx, name n
		case 98:
			return 10310;
		// cast_info ci, movie_info_idx mi_idx, title t
		case 162:
			return 2577225;
		// cast_info ci, name n, title t
		case 194:
			return 6719;
		// info_type it1, movie_info mi, movie_info_idx mi_idx
		case 52:
			return 136507;
		// info_type it1, movie_info mi, title t
		case 148:
			return 121863;
		// info_type it2, movie_info mi, movie_info_idx mi_idx
		case 56:
			return 6930334;
		// info_type it2, movie_info_idx mi_idx, title t
		case 168:
			return 459925;
		// movie_info mi, movie_info_idx mi_idx, title t
		case 176:
			return 20885030;
		// cast_info ci, info_type it1, movie_info mi, movie_info_idx mi_idx
		case 54:
			return 322625;
		// cast_info ci, info_type it1, movie_info mi, name n
		case 86:
			return 699;
		// cast_info ci, info_type it1, movie_info mi, title t
		case 150:
			return 212985;
		// cast_info ci, info_type it2, movie_info mi, movie_info_idx mi_idx
		case 58:
			return 16617820;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, name n
		case 106:
			return 3435;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, title t
		case 170:
			return 858842;
		// cast_info ci, movie_info mi, movie_info_idx mi_idx, name n
		case 114:
			return 250216;
		// cast_info ci, movie_info mi, movie_info_idx mi_idx, title t
		case 178:
			return 50136494;
		// cast_info ci, movie_info mi, name n, title t
		case 210:
			return 95896;
		// cast_info ci, movie_info_idx mi_idx, name n, title t
		case 226:
			return 10310;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx
		case 60:
			return 45431;
		// info_type it1, movie_info mi, movie_info_idx mi_idx, title t
		case 180:
			return 136507;
		// info_type it2, movie_info mi, movie_info_idx mi_idx, title t
		case 184:
			return 6930334;
		// cast_info ci, info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx
		case 62:
			return 107339;
		// cast_info ci, info_type it1, movie_info mi, movie_info_idx mi_idx, name n
		case 118:
			return 1235;
		// cast_info ci, info_type it1, movie_info mi, movie_info_idx mi_idx, title t
		case 182:
			return 322625;
		// cast_info ci, info_type it1, movie_info mi, name n, title t
		case 214:
			return 699;
		// cast_info ci, info_type it2, movie_info mi, movie_info_idx mi_idx, name n
		case 122:
			return 82408;
		// cast_info ci, info_type it2, movie_info mi, movie_info_idx mi_idx, title t
		case 186:
			return 16617820;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, name n, title t
		case 234:
			return 3435;
		// cast_info ci, movie_info mi, movie_info_idx mi_idx, name n, title t
		case 242:
			return 250216;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, title t
		case 188:
			return 45431;
		// cast_info ci, info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, name n
		case 126:
			return 410;
		// cast_info ci, info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, title t
		case 190:
			return 107339;
		// cast_info ci, info_type it1, movie_info mi, movie_info_idx mi_idx, name n, title t
		case 246:
			return 1235;
		// cast_info ci, info_type it2, movie_info mi, movie_info_idx mi_idx, name n, title t
		case 250:
			return 82408;
		// cast_info ci, info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, name n, title t
		case 254:
			return 410;
	};
}

// [aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t, ]
double
get_truth_cardinality_job_query_19(int total_relids)
{
	switch (total_relids) {
		// aka_name an
		case 2:
			return 901343;
		// char_name chn
		case 4:
			return 3140339;
		// cast_info ci
		case 8:
			return 867477;
		// company_name cn
		case 16:
			return 84843;
		// info_type it
		case 32:
			return 1;
		// movie_companies mc
		case 64:
			return 590994;
		// movie_info mi
		case 128:
			return 451104;
		// name n
		case 256:
			return 6768;
		// role_type rt
		case 512:
			return 1;
		// title t
		case 1024:
			return 574556;
		// aka_name an, cast_info ci
		case 10:
			return 1806603;
		// aka_name an, name n
		case 258:
			return 1558;
		// char_name chn, cast_info ci
		case 12:
			return 801259;
		// cast_info ci, movie_companies mc
		case 72:
			return 311161;
		// cast_info ci, movie_info mi
		case 136:
			return 409523;
		// cast_info ci, name n
		case 264:
			return 728;
		// cast_info ci, role_type rt
		case 520:
			return 276166;
		// cast_info ci, title t
		case 1032:
			return 220003;
		// company_name cn, movie_companies mc
		case 80:
			return 542096;
		// info_type it, movie_info mi
		case 160:
			return 451039;
		// movie_companies mc, movie_info mi
		case 192:
			return 201039;
		// movie_companies mc, title t
		case 1088:
			return 100350;
		// movie_info mi, title t
		case 1152:
			return 298264;
		// aka_name an, char_name chn, cast_info ci
		case 14:
			return 1732265;
		// aka_name an, cast_info ci, movie_companies mc
		case 74:
			return 753924;
		// aka_name an, cast_info ci, movie_info mi
		case 138:
			return 888631;
		// aka_name an, cast_info ci, name n
		case 266:
			return 425;
		// aka_name an, cast_info ci, role_type rt
		case 522:
			return 503508;
		// aka_name an, cast_info ci, title t
		case 1034:
			return 432762;
		// char_name chn, cast_info ci, movie_companies mc
		case 76:
			return 284907;
		// char_name chn, cast_info ci, movie_info mi
		case 140:
			return 389514;
		// char_name chn, cast_info ci, name n
		case 268:
			return 630;
		// char_name chn, cast_info ci, role_type rt
		case 524:
			return 255651;
		// char_name chn, cast_info ci, title t
		case 1036:
			return 207135;
		// cast_info ci, company_name cn, movie_companies mc
		case 88:
			return 289200;
		// cast_info ci, info_type it, movie_info mi
		case 168:
			return 409517;
		// cast_info ci, movie_companies mc, movie_info mi
		case 200:
			return 238294;
		// cast_info ci, movie_companies mc, name n
		case 328:
			return 355;
		// cast_info ci, movie_companies mc, role_type rt
		case 584:
			return 86056;
		// cast_info ci, movie_companies mc, title t
		case 1096:
			return 67431;
		// cast_info ci, movie_info mi, name n
		case 392:
			return 220;
		// cast_info ci, movie_info mi, role_type rt
		case 648:
			return 147137;
		// cast_info ci, movie_info mi, title t
		case 1160:
			return 224743;
		// cast_info ci, name n, role_type rt
		case 776:
			return 727;
		// cast_info ci, name n, title t
		case 1288:
			return 133;
		// cast_info ci, role_type rt, title t
		case 1544:
			return 79362;
		// company_name cn, movie_companies mc, movie_info mi
		case 208:
			return 188366;
		// company_name cn, movie_companies mc, title t
		case 1104:
			return 86979;
		// info_type it, movie_companies mc, movie_info mi
		case 224:
			return 200967;
		// info_type it, movie_info mi, title t
		case 1184:
			return 298255;
		// movie_companies mc, movie_info mi, title t
		case 1216:
			return 124234;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc
		case 78:
			return 717888;
		// aka_name an, char_name chn, cast_info ci, movie_info mi
		case 142:
			return 861428;
		// aka_name an, char_name chn, cast_info ci, name n
		case 270:
			return 387;
		// aka_name an, char_name chn, cast_info ci, role_type rt
		case 526:
			return 483319;
		// aka_name an, char_name chn, cast_info ci, title t
		case 1038:
			return 418687;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc
		case 90:
			return 724742;
		// aka_name an, cast_info ci, info_type it, movie_info mi
		case 170:
			return 888621;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi
		case 202:
			return 489148;
		// aka_name an, cast_info ci, movie_companies mc, name n
		case 330:
			return 373;
		// aka_name an, cast_info ci, movie_companies mc, role_type rt
		case 586:
			return 183017;
		// aka_name an, cast_info ci, movie_companies mc, title t
		case 1098:
			return 162934;
		// aka_name an, cast_info ci, movie_info mi, name n
		case 394:
			return 224;
		// aka_name an, cast_info ci, movie_info mi, role_type rt
		case 650:
			return 273200;
		// aka_name an, cast_info ci, movie_info mi, title t
		case 1162:
			return 473061;
		// aka_name an, cast_info ci, name n, role_type rt
		case 778:
			return 425;
		// aka_name an, cast_info ci, name n, title t
		case 1290:
			return 115;
		// aka_name an, cast_info ci, role_type rt, title t
		case 1546:
			return 133466;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc
		case 92:
			return 265661;
		// char_name chn, cast_info ci, info_type it, movie_info mi
		case 172:
			return 389508;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi
		case 204:
			return 216872;
		// char_name chn, cast_info ci, movie_companies mc, name n
		case 332:
			return 322;
		// char_name chn, cast_info ci, movie_companies mc, role_type rt
		case 588:
			return 77832;
		// char_name chn, cast_info ci, movie_companies mc, title t
		case 1100:
			return 61681;
		// char_name chn, cast_info ci, movie_info mi, name n
		case 396:
			return 201;
		// char_name chn, cast_info ci, movie_info mi, role_type rt
		case 652:
			return 140807;
		// char_name chn, cast_info ci, movie_info mi, title t
		case 1164:
			return 213232;
		// char_name chn, cast_info ci, name n, role_type rt
		case 780:
			return 630;
		// char_name chn, cast_info ci, name n, title t
		case 1292:
			return 119;
		// char_name chn, cast_info ci, role_type rt, title t
		case 1548:
			return 75685;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi
		case 216:
			return 223821;
		// cast_info ci, company_name cn, movie_companies mc, name n
		case 344:
			return 333;
		// cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 600:
			return 79662;
		// cast_info ci, company_name cn, movie_companies mc, title t
		case 1112:
			return 61997;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi
		case 232:
			return 238292;
		// cast_info ci, info_type it, movie_info mi, name n
		case 424:
			return 220;
		// cast_info ci, info_type it, movie_info mi, role_type rt
		case 680:
			return 147136;
		// cast_info ci, info_type it, movie_info mi, title t
		case 1192:
			return 224743;
		// cast_info ci, movie_companies mc, movie_info mi, name n
		case 456:
			return 293;
		// cast_info ci, movie_companies mc, movie_info mi, role_type rt
		case 712:
			return 72696;
		// cast_info ci, movie_companies mc, movie_info mi, title t
		case 1224:
			return 138095;
		// cast_info ci, movie_companies mc, name n, role_type rt
		case 840:
			return 351;
		// cast_info ci, movie_companies mc, name n, title t
		case 1352:
			return 80;
		// cast_info ci, movie_companies mc, role_type rt, title t
		case 1608:
			return 19905;
		// cast_info ci, movie_info mi, name n, role_type rt
		case 904:
			return 220;
		// cast_info ci, movie_info mi, name n, title t
		case 1416:
			return 119;
		// cast_info ci, movie_info mi, role_type rt, title t
		case 1672:
			return 82720;
		// cast_info ci, name n, role_type rt, title t
		case 1800:
			return 133;
		// company_name cn, info_type it, movie_companies mc, movie_info mi
		case 240:
			return 188295;
		// company_name cn, movie_companies mc, movie_info mi, title t
		case 1232:
			return 116287;
		// info_type it, movie_companies mc, movie_info mi, title t
		case 1248:
			return 124224;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc
		case 94:
			return 691534;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi
		case 174:
			return 861418;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi
		case 206:
			return 462677;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, name n
		case 334:
			return 348;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, role_type rt
		case 590:
			return 172717;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, title t
		case 1102:
			return 154525;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, name n
		case 398:
			return 205;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, role_type rt
		case 654:
			return 265553;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, title t
		case 1166:
			return 457799;
		// aka_name an, char_name chn, cast_info ci, name n, role_type rt
		case 782:
			return 387;
		// aka_name an, char_name chn, cast_info ci, name n, title t
		case 1294:
			return 102;
		// aka_name an, char_name chn, cast_info ci, role_type rt, title t
		case 1550:
			return 129967;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi
		case 218:
			return 471692;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, name n
		case 346:
			return 359;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 602:
			return 175140;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, title t
		case 1114:
			return 156098;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi
		case 234:
			return 489142;
		// aka_name an, cast_info ci, info_type it, movie_info mi, name n
		case 426:
			return 224;
		// aka_name an, cast_info ci, info_type it, movie_info mi, role_type rt
		case 682:
			return 273200;
		// aka_name an, cast_info ci, info_type it, movie_info mi, title t
		case 1194:
			return 473061;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, name n
		case 458:
			return 338;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, role_type rt
		case 714:
			return 129067;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, title t
		case 1226:
			return 279548;
		// aka_name an, cast_info ci, movie_companies mc, name n, role_type rt
		case 842:
			return 373;
		// aka_name an, cast_info ci, movie_companies mc, name n, title t
		case 1354:
			return 85;
		// aka_name an, cast_info ci, movie_companies mc, role_type rt, title t
		case 1610:
			return 44602;
		// aka_name an, cast_info ci, movie_info mi, name n, role_type rt
		case 906:
			return 224;
		// aka_name an, cast_info ci, movie_info mi, name n, title t
		case 1418:
			return 99;
		// aka_name an, cast_info ci, movie_info mi, role_type rt, title t
		case 1674:
			return 146047;
		// aka_name an, cast_info ci, name n, role_type rt, title t
		case 1802:
			return 115;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi
		case 220:
			return 204175;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, name n
		case 348:
			return 305;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 604:
			return 72285;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, title t
		case 1116:
			return 56853;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi
		case 236:
			return 216870;
		// char_name chn, cast_info ci, info_type it, movie_info mi, name n
		case 428:
			return 201;
		// char_name chn, cast_info ci, info_type it, movie_info mi, role_type rt
		case 684:
			return 140806;
		// char_name chn, cast_info ci, info_type it, movie_info mi, title t
		case 1196:
			return 213232;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n
		case 460:
			return 275;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, role_type rt
		case 716:
			return 65201;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, title t
		case 1228:
			return 124666;
		// char_name chn, cast_info ci, movie_companies mc, name n, role_type rt
		case 844:
			return 322;
		// char_name chn, cast_info ci, movie_companies mc, name n, title t
		case 1356:
			return 71;
		// char_name chn, cast_info ci, movie_companies mc, role_type rt, title t
		case 1612:
			return 18068;
		// char_name chn, cast_info ci, movie_info mi, name n, role_type rt
		case 908:
			return 201;
		// char_name chn, cast_info ci, movie_info mi, name n, title t
		case 1420:
			return 110;
		// char_name chn, cast_info ci, movie_info mi, role_type rt, title t
		case 1676:
			return 79081;
		// char_name chn, cast_info ci, name n, role_type rt, title t
		case 1804:
			return 119;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi
		case 248:
			return 223819;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n
		case 472:
			return 268;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt
		case 728:
			return 68166;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, title t
		case 1240:
			return 130077;
		// cast_info ci, company_name cn, movie_companies mc, name n, role_type rt
		case 856:
			return 329;
		// cast_info ci, company_name cn, movie_companies mc, name n, title t
		case 1368:
			return 73;
		// cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 1624:
			return 18371;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, name n
		case 488:
			return 293;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 744:
			return 72696;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, title t
		case 1256:
			return 138095;
		// cast_info ci, info_type it, movie_info mi, name n, role_type rt
		case 936:
			return 220;
		// cast_info ci, info_type it, movie_info mi, name n, title t
		case 1448:
			return 119;
		// cast_info ci, info_type it, movie_info mi, role_type rt, title t
		case 1704:
			return 82720;
		// cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt
		case 968:
			return 293;
		// cast_info ci, movie_companies mc, movie_info mi, name n, title t
		case 1480:
			return 190;
		// cast_info ci, movie_companies mc, movie_info mi, role_type rt, title t
		case 1736:
			return 42723;
		// cast_info ci, movie_companies mc, name n, role_type rt, title t
		case 1864:
			return 80;
		// cast_info ci, movie_info mi, name n, role_type rt, title t
		case 1928:
			return 119;
		// company_name cn, info_type it, movie_companies mc, movie_info mi, title t
		case 1264:
			return 116277;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi
		case 222:
			return 447378;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, name n
		case 350:
			return 341;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 606:
			return 165654;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, title t
		case 1118:
			return 148496;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi
		case 238:
			return 462671;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, name n
		case 430:
			return 205;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, role_type rt
		case 686:
			return 265553;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, title t
		case 1198:
			return 457799;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n
		case 462:
			return 321;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, role_type rt
		case 718:
			return 120553;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, title t
		case 1230:
			return 263429;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, name n, role_type rt
		case 846:
			return 348;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, name n, title t
		case 1358:
			return 79;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, role_type rt, title t
		case 1614:
			return 42182;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, name n, role_type rt
		case 910:
			return 205;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, name n, title t
		case 1422:
			return 89;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, role_type rt, title t
		case 1678:
			return 142013;
		// aka_name an, char_name chn, cast_info ci, name n, role_type rt, title t
		case 1806:
			return 102;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi
		case 250:
			return 471686;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n
		case 474:
			return 324;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt
		case 730:
			return 124794;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, title t
		case 1242:
			return 269635;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt
		case 858:
			return 359;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, name n, title t
		case 1370:
			return 82;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 1626:
			return 42962;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n
		case 490:
			return 338;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 746:
			return 129067;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, title t
		case 1258:
			return 279548;
		// aka_name an, cast_info ci, info_type it, movie_info mi, name n, role_type rt
		case 938:
			return 224;
		// aka_name an, cast_info ci, info_type it, movie_info mi, name n, title t
		case 1450:
			return 99;
		// aka_name an, cast_info ci, info_type it, movie_info mi, role_type rt, title t
		case 1706:
			return 146047;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt
		case 970:
			return 338;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, name n, title t
		case 1482:
			return 199;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, role_type rt, title t
		case 1738:
			return 74076;
		// aka_name an, cast_info ci, movie_companies mc, name n, role_type rt, title t
		case 1866:
			return 85;
		// aka_name an, cast_info ci, movie_info mi, name n, role_type rt, title t
		case 1930:
			return 99;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi
		case 252:
			return 204173;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n
		case 476:
			return 254;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt
		case 732:
			return 61290;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, title t
		case 1244:
			return 117399;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt
		case 860:
			return 305;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, title t
		case 1372:
			return 65;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 1628:
			return 16701;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n
		case 492:
			return 275;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 748:
			return 65201;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, title t
		case 1260:
			return 124666;
		// char_name chn, cast_info ci, info_type it, movie_info mi, name n, role_type rt
		case 940:
			return 201;
		// char_name chn, cast_info ci, info_type it, movie_info mi, name n, title t
		case 1452:
			return 110;
		// char_name chn, cast_info ci, info_type it, movie_info mi, role_type rt, title t
		case 1708:
			return 79081;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt
		case 972:
			return 275;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n, title t
		case 1484:
			return 182;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, role_type rt, title t
		case 1740:
			return 37828;
		// char_name chn, cast_info ci, movie_companies mc, name n, role_type rt, title t
		case 1868:
			return 71;
		// char_name chn, cast_info ci, movie_info mi, name n, role_type rt, title t
		case 1932:
			return 110;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n
		case 504:
			return 268;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 760:
			return 68166;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, title t
		case 1272:
			return 130077;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt
		case 984:
			return 268;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, title t
		case 1496:
			return 170;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt, title t
		case 1752:
			return 40272;
		// cast_info ci, company_name cn, movie_companies mc, name n, role_type rt, title t
		case 1880:
			return 73;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 1000:
			return 293;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 1512:
			return 190;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 1768:
			return 42723;
		// cast_info ci, info_type it, movie_info mi, name n, role_type rt, title t
		case 1960:
			return 119;
		// cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 1992:
			return 190;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi
		case 254:
			return 447372;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n
		case 478:
			return 311;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt
		case 734:
			return 116967;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, title t
		case 1246:
			return 254606;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt
		case 862:
			return 341;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, title t
		case 1374:
			return 77;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 1630:
			return 40747;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n
		case 494:
			return 321;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 750:
			return 120553;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, title t
		case 1262:
			return 263429;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, name n, role_type rt
		case 942:
			return 205;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, name n, title t
		case 1454:
			return 89;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, role_type rt, title t
		case 1710:
			return 142013;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt
		case 974:
			return 321;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n, title t
		case 1486:
			return 194;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, role_type rt, title t
		case 1742:
			return 68948;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, name n, role_type rt, title t
		case 1870:
			return 79;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, name n, role_type rt, title t
		case 1934:
			return 89;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n
		case 506:
			return 324;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 762:
			return 124794;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, title t
		case 1274:
			return 269635;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt
		case 986:
			return 324;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, title t
		case 1498:
			return 189;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt, title t
		case 1754:
			return 71864;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt, title t
		case 1882:
			return 82;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 1002:
			return 338;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 1514:
			return 199;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 1770:
			return 74076;
		// aka_name an, cast_info ci, info_type it, movie_info mi, name n, role_type rt, title t
		case 1962:
			return 99;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 1994:
			return 199;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n
		case 508:
			return 254;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 764:
			return 61290;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, title t
		case 1276:
			return 117399;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt
		case 988:
			return 254;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, title t
		case 1500:
			return 162;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt, title t
		case 1756:
			return 35604;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt, title t
		case 1884:
			return 65;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 1004:
			return 275;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 1516:
			return 182;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 1772:
			return 37828;
		// char_name chn, cast_info ci, info_type it, movie_info mi, name n, role_type rt, title t
		case 1964:
			return 110;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 1996:
			return 182;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 1016:
			return 268;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 1528:
			return 170;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 1784:
			return 40272;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 2008:
			return 170;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 2024:
			return 190;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n
		case 510:
			return 311;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 766:
			return 116967;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, title t
		case 1278:
			return 254606;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt
		case 990:
			return 311;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, title t
		case 1502:
			return 184;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt, title t
		case 1758:
			return 67025;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt, title t
		case 1886:
			return 77;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 1006:
			return 321;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 1518:
			return 194;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 1774:
			return 68948;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, name n, role_type rt, title t
		case 1966:
			return 89;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 1998:
			return 194;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 1018:
			return 324;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 1530:
			return 189;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 1786:
			return 71864;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 2010:
			return 189;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 2026:
			return 199;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 1020:
			return 254;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 1532:
			return 162;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 1788:
			return 35604;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 2012:
			return 162;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 2028:
			return 182;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 2040:
			return 170;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 1022:
			return 311;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 1534:
			return 184;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 1790:
			return 67025;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 2014:
			return 184;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 2030:
			return 194;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 2042:
			return 189;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 2044:
			return 162;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 2046:
			return 184;
	};
}

// [complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t, ]
double
get_truth_cardinality_job_query_20(int total_relids)
{
	switch (total_relids) {
		// complete_cast cc
		case 2:
			return 135086;
		// comp_cast_type cct1
		case 4:
			return 1;
		// comp_cast_type cct2
		case 8:
			return 2;
		// char_name chn
		case 16:
			return 30;
		// cast_info ci
		case 32:
			return 36244344;
		// keyword k
		case 64:
			return 8;
		// kind_type kt
		case 128:
			return 1;
		// movie_keyword mk
		case 256:
			return 4523930;
		// name n
		case 512:
			return 4167491;
		// title t
		case 1024:
			return 2287271;
		// complete_cast cc, comp_cast_type cct1
		case 6:
			return 85941;
		// complete_cast cc, comp_cast_type cct2
		case 10:
			return 135086;
		// complete_cast cc, cast_info ci
		case 34:
			return 5212164;
		// complete_cast cc, movie_keyword mk
		case 258:
			return 2171367;
		// complete_cast cc, title t
		case 1026:
			return 114624;
		// char_name chn, cast_info ci
		case 48:
			return 556;
		// cast_info ci, movie_keyword mk
		case 288:
			return 215765477;
		// cast_info ci, name n
		case 544:
			return 36244344;
		// cast_info ci, title t
		case 1056:
			return 34299027;
		// keyword k, movie_keyword mk
		case 320:
			return 35548;
		// kind_type kt, title t
		case 1152:
			return 492483;
		// movie_keyword mk, title t
		case 1280:
			return 3961736;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2
		case 14:
			return 85941;
		// complete_cast cc, comp_cast_type cct1, cast_info ci
		case 38:
			return 3409569;
		// complete_cast cc, comp_cast_type cct1, movie_keyword mk
		case 262:
			return 1436647;
		// complete_cast cc, comp_cast_type cct1, title t
		case 1030:
			return 73560;
		// complete_cast cc, comp_cast_type cct2, cast_info ci
		case 42:
			return 5212164;
		// complete_cast cc, comp_cast_type cct2, movie_keyword mk
		case 266:
			return 2171367;
		// complete_cast cc, comp_cast_type cct2, title t
		case 1034:
			return 114624;
		// complete_cast cc, char_name chn, cast_info ci
		case 50:
			return 28;
		// complete_cast cc, cast_info ci, movie_keyword mk
		case 290:
			return 157283028;
		// complete_cast cc, cast_info ci, name n
		case 546:
			return 5212164;
		// complete_cast cc, cast_info ci, title t
		case 1058:
			return 4528903;
		// complete_cast cc, keyword k, movie_keyword mk
		case 322:
			return 12810;
		// complete_cast cc, kind_type kt, title t
		case 1154:
			return 41167;
		// complete_cast cc, movie_keyword mk, title t
		case 1282:
			return 1686708;
		// char_name chn, cast_info ci, movie_keyword mk
		case 304:
			return 3810;
		// char_name chn, cast_info ci, name n
		case 560:
			return 556;
		// char_name chn, cast_info ci, title t
		case 1072:
			return 541;
		// cast_info ci, keyword k, movie_keyword mk
		case 352:
			return 1564305;
		// cast_info ci, kind_type kt, title t
		case 1184:
			return 8852321;
		// cast_info ci, movie_keyword mk, name n
		case 800:
			return 215765477;
		// cast_info ci, movie_keyword mk, title t
		case 1312:
			return 197873271;
		// cast_info ci, name n, title t
		case 1568:
			return 34299027;
		// keyword k, movie_keyword mk, title t
		case 1344:
			return 31607;
		// kind_type kt, movie_keyword mk, title t
		case 1408:
			return 2343162;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci
		case 46:
			return 3409569;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, movie_keyword mk
		case 270:
			return 1436647;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, title t
		case 1038:
			return 73560;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci
		case 54:
			return 24;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_keyword mk
		case 294:
			return 109052152;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, name n
		case 550:
			return 3409569;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, title t
		case 1062:
			return 2995737;
		// complete_cast cc, comp_cast_type cct1, keyword k, movie_keyword mk
		case 326:
			return 8765;
		// complete_cast cc, comp_cast_type cct1, kind_type kt, title t
		case 1158:
			return 28583;
		// complete_cast cc, comp_cast_type cct1, movie_keyword mk, title t
		case 1286:
			return 1168462;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci
		case 58:
			return 28;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_keyword mk
		case 298:
			return 157283028;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, name n
		case 554:
			return 5212164;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, title t
		case 1066:
			return 4528903;
		// complete_cast cc, comp_cast_type cct2, keyword k, movie_keyword mk
		case 330:
			return 12810;
		// complete_cast cc, comp_cast_type cct2, kind_type kt, title t
		case 1162:
			return 41167;
		// complete_cast cc, comp_cast_type cct2, movie_keyword mk, title t
		case 1290:
			return 1686708;
		// complete_cast cc, char_name chn, cast_info ci, movie_keyword mk
		case 306:
			return 1366;
		// complete_cast cc, char_name chn, cast_info ci, name n
		case 562:
			return 28;
		// complete_cast cc, char_name chn, cast_info ci, title t
		case 1074:
			return 19;
		// complete_cast cc, cast_info ci, keyword k, movie_keyword mk
		case 354:
			return 913582;
		// complete_cast cc, cast_info ci, kind_type kt, title t
		case 1186:
			return 2150293;
		// complete_cast cc, cast_info ci, movie_keyword mk, name n
		case 802:
			return 157283028;
		// complete_cast cc, cast_info ci, movie_keyword mk, title t
		case 1314:
			return 134532994;
		// complete_cast cc, cast_info ci, name n, title t
		case 1570:
			return 4528903;
		// complete_cast cc, keyword k, movie_keyword mk, title t
		case 1346:
			return 10330;
		// complete_cast cc, kind_type kt, movie_keyword mk, title t
		case 1410:
			return 1397045;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk
		case 368:
			return 176;
		// char_name chn, cast_info ci, kind_type kt, title t
		case 1200:
			return 24;
		// char_name chn, cast_info ci, movie_keyword mk, name n
		case 816:
			return 3810;
		// char_name chn, cast_info ci, movie_keyword mk, title t
		case 1328:
			return 3795;
		// char_name chn, cast_info ci, name n, title t
		case 1584:
			return 541;
		// cast_info ci, keyword k, movie_keyword mk, name n
		case 864:
			return 1564305;
		// cast_info ci, keyword k, movie_keyword mk, title t
		case 1376:
			return 1475526;
		// cast_info ci, kind_type kt, movie_keyword mk, title t
		case 1440:
			return 151179813;
		// cast_info ci, kind_type kt, name n, title t
		case 1696:
			return 8852321;
		// cast_info ci, movie_keyword mk, name n, title t
		case 1824:
			return 197873271;
		// keyword k, kind_type kt, movie_keyword mk, title t
		case 1472:
			return 15994;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci
		case 62:
			return 24;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_keyword mk
		case 302:
			return 109052152;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, name n
		case 558:
			return 3409569;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, title t
		case 1070:
			return 2995737;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, keyword k, movie_keyword mk
		case 334:
			return 8765;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, kind_type kt, title t
		case 1166:
			return 28583;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, movie_keyword mk, title t
		case 1294:
			return 1168462;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_keyword mk
		case 310:
			return 1330;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, name n
		case 566:
			return 24;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, title t
		case 1078:
			return 15;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, movie_keyword mk
		case 358:
			return 655591;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, kind_type kt, title t
		case 1190:
			return 1535822;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_keyword mk, name n
		case 806:
			return 109052152;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_keyword mk, title t
		case 1318:
			return 96454034;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, name n, title t
		case 1574:
			return 2995737;
		// complete_cast cc, comp_cast_type cct1, keyword k, movie_keyword mk, title t
		case 1350:
			return 7363;
		// complete_cast cc, comp_cast_type cct1, kind_type kt, movie_keyword mk, title t
		case 1414:
			return 978322;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk
		case 314:
			return 1366;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, name n
		case 570:
			return 28;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, title t
		case 1082:
			return 19;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk
		case 362:
			return 913582;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, kind_type kt, title t
		case 1194:
			return 2150293;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_keyword mk, name n
		case 810:
			return 157283028;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_keyword mk, title t
		case 1322:
			return 134532994;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, name n, title t
		case 1578:
			return 4528903;
		// complete_cast cc, comp_cast_type cct2, keyword k, movie_keyword mk, title t
		case 1354:
			return 10330;
		// complete_cast cc, comp_cast_type cct2, kind_type kt, movie_keyword mk, title t
		case 1418:
			return 1397045;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, movie_keyword mk
		case 370:
			return 33;
		// complete_cast cc, char_name chn, cast_info ci, kind_type kt, title t
		case 1202:
			return 10;
		// complete_cast cc, char_name chn, cast_info ci, movie_keyword mk, name n
		case 818:
			return 1366;
		// complete_cast cc, char_name chn, cast_info ci, movie_keyword mk, title t
		case 1330:
			return 1354;
		// complete_cast cc, char_name chn, cast_info ci, name n, title t
		case 1586:
			return 19;
		// complete_cast cc, cast_info ci, keyword k, movie_keyword mk, name n
		case 866:
			return 913582;
		// complete_cast cc, cast_info ci, keyword k, movie_keyword mk, title t
		case 1378:
			return 803419;
		// complete_cast cc, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 1442:
			return 121878634;
		// complete_cast cc, cast_info ci, kind_type kt, name n, title t
		case 1698:
			return 2150293;
		// complete_cast cc, cast_info ci, movie_keyword mk, name n, title t
		case 1826:
			return 134532994;
		// complete_cast cc, keyword k, kind_type kt, movie_keyword mk, title t
		case 1474:
			return 8371;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk, name n
		case 880:
			return 176;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk, title t
		case 1392:
			return 176;
		// char_name chn, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 1456:
			return 2312;
		// char_name chn, cast_info ci, kind_type kt, name n, title t
		case 1712:
			return 24;
		// char_name chn, cast_info ci, movie_keyword mk, name n, title t
		case 1840:
			return 3795;
		// cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 1504:
			return 985102;
		// cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 1888:
			return 1475526;
		// cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 1952:
			return 151179813;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk
		case 318:
			return 1330;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, name n
		case 574:
			return 24;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, title t
		case 1086:
			return 15;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk
		case 366:
			return 655591;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, kind_type kt, title t
		case 1198:
			return 1535822;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_keyword mk, name n
		case 814:
			return 109052152;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_keyword mk, title t
		case 1326:
			return 96454034;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, name n, title t
		case 1582:
			return 2995737;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, keyword k, movie_keyword mk, title t
		case 1358:
			return 7363;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, kind_type kt, movie_keyword mk, title t
		case 1422:
			return 978322;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, movie_keyword mk
		case 374:
			return 33;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, kind_type kt, title t
		case 1206:
			return 9;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_keyword mk, name n
		case 822:
			return 1330;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_keyword mk, title t
		case 1334:
			return 1318;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, name n, title t
		case 1590:
			return 15;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, movie_keyword mk, name n
		case 870:
			return 655591;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, movie_keyword mk, title t
		case 1382:
			return 593938;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 1446:
			return 87986607;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, kind_type kt, name n, title t
		case 1702:
			return 1535822;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_keyword mk, name n, title t
		case 1830:
			return 96454034;
		// complete_cast cc, comp_cast_type cct1, keyword k, kind_type kt, movie_keyword mk, title t
		case 1478:
			return 6016;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk
		case 378:
			return 33;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, title t
		case 1210:
			return 10;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk, name n
		case 826:
			return 1366;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk, title t
		case 1338:
			return 1354;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, name n, title t
		case 1594:
			return 19;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk, name n
		case 874:
			return 913582;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk, title t
		case 1386:
			return 803419;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 1450:
			return 121878634;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, kind_type kt, name n, title t
		case 1706:
			return 2150293;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_keyword mk, name n, title t
		case 1834:
			return 134532994;
		// complete_cast cc, comp_cast_type cct2, keyword k, kind_type kt, movie_keyword mk, title t
		case 1482:
			return 8371;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n
		case 882:
			return 33;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, movie_keyword mk, title t
		case 1394:
			return 33;
		// complete_cast cc, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 1458:
			return 1348;
		// complete_cast cc, char_name chn, cast_info ci, kind_type kt, name n, title t
		case 1714:
			return 10;
		// complete_cast cc, char_name chn, cast_info ci, movie_keyword mk, name n, title t
		case 1842:
			return 1354;
		// complete_cast cc, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 1506:
			return 717260;
		// complete_cast cc, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 1890:
			return 803419;
		// complete_cast cc, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 1954:
			return 121878634;
		// char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 1520:
			return 63;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 1904:
			return 176;
		// char_name chn, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 1968:
			return 2312;
		// cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 2016:
			return 985102;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk
		case 382:
			return 33;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, title t
		case 1214:
			return 9;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk, name n
		case 830:
			return 1330;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk, title t
		case 1342:
			return 1318;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, name n, title t
		case 1598:
			return 15;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk, name n
		case 878:
			return 655591;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk, title t
		case 1390:
			return 593938;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 1454:
			return 87986607;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, kind_type kt, name n, title t
		case 1710:
			return 1535822;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_keyword mk, name n, title t
		case 1838:
			return 96454034;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, keyword k, kind_type kt, movie_keyword mk, title t
		case 1486:
			return 6016;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n
		case 886:
			return 33;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, movie_keyword mk, title t
		case 1398:
			return 33;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 1462:
			return 1314;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, kind_type kt, name n, title t
		case 1718:
			return 9;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_keyword mk, name n, title t
		case 1846:
			return 1318;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 1510:
			return 532809;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 1894:
			return 593938;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 1958:
			return 87986607;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n
		case 890:
			return 33;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk, title t
		case 1402:
			return 33;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 1466:
			return 1348;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, name n, title t
		case 1722:
			return 10;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk, name n, title t
		case 1850:
			return 1354;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 1514:
			return 717260;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 1898:
			return 803419;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 1962:
			return 121878634;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 1522:
			return 33;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 1906:
			return 33;
		// complete_cast cc, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 1970:
			return 1348;
		// complete_cast cc, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 2018:
			return 717260;
		// char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 2032:
			return 63;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n
		case 894:
			return 33;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk, title t
		case 1406:
			return 33;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 1470:
			return 1314;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, name n, title t
		case 1726:
			return 9;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk, name n, title t
		case 1854:
			return 1318;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 1518:
			return 532809;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 1902:
			return 593938;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 1966:
			return 87986607;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 1526:
			return 33;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 1910:
			return 33;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 1974:
			return 1314;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 2022:
			return 532809;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 1530:
			return 33;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 1914:
			return 33;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 1978:
			return 1348;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 2026:
			return 717260;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 2034:
			return 33;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 1534:
			return 33;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 1918:
			return 33;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 1982:
			return 1314;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 2030:
			return 532809;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 2038:
			return 33;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 2042:
			return 33;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 2046:
			return 33;
	};
}

// [company_name cn, company_type ct, keyword k, link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t, ]
double
get_truth_cardinality_job_query_21(int total_relids)
{
	switch (total_relids) {
		// company_name cn
		case 2:
			return 48302;
		// company_type ct
		case 4:
			return 1;
		// keyword k
		case 8:
			return 1;
		// link_type lt
		case 16:
			return 2;
		// movie_companies mc
		case 32:
			return 1271989;
		// movie_info mi
		case 64:
			return 153897;
		// movie_keyword mk
		case 128:
			return 4523930;
		// movie_link ml
		case 256:
			return 29997;
		// title t
		case 512:
			return 910581;
		// company_name cn, movie_companies mc
		case 34:
			return 240875;
		// company_type ct, movie_companies mc
		case 36:
			return 1193928;
		// keyword k, movie_keyword mk
		case 136:
			return 10544;
		// link_type lt, movie_link ml
		case 272:
			return 2315;
		// movie_companies mc, movie_info mi
		case 96:
			return 164203;
		// movie_companies mc, movie_keyword mk
		case 160:
			return 6719220;
		// movie_companies mc, movie_link ml
		case 288:
			return 43026;
		// movie_companies mc, title t
		case 544:
			return 546306;
		// movie_info mi, movie_keyword mk
		case 192:
			return 612026;
		// movie_info mi, movie_link ml
		case 320:
			return 4124;
		// movie_info mi, title t
		case 576:
			return 60806;
		// movie_keyword mk, movie_link ml
		case 384:
			return 288192;
		// movie_keyword mk, title t
		case 640:
			return 2011296;
		// movie_link ml, title t
		case 768:
			return 13627;
		// company_name cn, company_type ct, movie_companies mc
		case 38:
			return 224256;
		// company_name cn, movie_companies mc, movie_info mi
		case 98:
			return 63835;
		// company_name cn, movie_companies mc, movie_keyword mk
		case 162:
			return 1483541;
		// company_name cn, movie_companies mc, movie_link ml
		case 290:
			return 3079;
		// company_name cn, movie_companies mc, title t
		case 546:
			return 95217;
		// company_type ct, movie_companies mc, movie_info mi
		case 100:
			return 155177;
		// company_type ct, movie_companies mc, movie_keyword mk
		case 164:
			return 5975292;
		// company_type ct, movie_companies mc, movie_link ml
		case 292:
			return 36283;
		// company_type ct, movie_companies mc, title t
		case 548:
			return 500448;
		// keyword k, movie_companies mc, movie_keyword mk
		case 168:
			return 14331;
		// keyword k, movie_info mi, movie_keyword mk
		case 200:
			return 1520;
		// keyword k, movie_keyword mk, movie_link ml
		case 392:
			return 251;
		// keyword k, movie_keyword mk, title t
		case 648:
			return 5541;
		// link_type lt, movie_companies mc, movie_link ml
		case 304:
			return 5069;
		// link_type lt, movie_info mi, movie_link ml
		case 336:
			return 2782;
		// link_type lt, movie_keyword mk, movie_link ml
		case 400:
			return 17543;
		// link_type lt, movie_link ml, title t
		case 784:
			return 1332;
		// movie_companies mc, movie_info mi, movie_keyword mk
		case 224:
			return 1336771;
		// movie_companies mc, movie_info mi, movie_link ml
		case 352:
			return 11659;
		// movie_companies mc, movie_info mi, title t
		case 608:
			return 68665;
		// movie_companies mc, movie_keyword mk, movie_link ml
		case 416:
			return 732182;
		// movie_companies mc, movie_keyword mk, title t
		case 672:
			return 3185481;
		// movie_companies mc, movie_link ml, title t
		case 800:
			return 25214;
		// movie_info mi, movie_keyword mk, movie_link ml
		case 448:
			return 48622;
		// movie_info mi, movie_keyword mk, title t
		case 704:
			return 265913;
		// movie_info mi, movie_link ml, title t
		case 832:
			return 1844;
		// movie_keyword mk, movie_link ml, title t
		case 896:
			return 170868;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi
		case 102:
			return 61621;
		// company_name cn, company_type ct, movie_companies mc, movie_keyword mk
		case 166:
			return 1337515;
		// company_name cn, company_type ct, movie_companies mc, movie_link ml
		case 294:
			return 2801;
		// company_name cn, company_type ct, movie_companies mc, title t
		case 550:
			return 86330;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 170:
			return 2802;
		// company_name cn, link_type lt, movie_companies mc, movie_link ml
		case 306:
			return 1200;
		// company_name cn, movie_companies mc, movie_info mi, movie_keyword mk
		case 226:
			return 479758;
		// company_name cn, movie_companies mc, movie_info mi, movie_link ml
		case 354:
			return 4127;
		// company_name cn, movie_companies mc, movie_info mi, title t
		case 610:
			return 21255;
		// company_name cn, movie_companies mc, movie_keyword mk, movie_link ml
		case 418:
			return 49014;
		// company_name cn, movie_companies mc, movie_keyword mk, title t
		case 674:
			return 682359;
		// company_name cn, movie_companies mc, movie_link ml, title t
		case 802:
			return 1860;
		// company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 172:
			return 11915;
		// company_type ct, link_type lt, movie_companies mc, movie_link ml
		case 308:
			return 4393;
		// company_type ct, movie_companies mc, movie_info mi, movie_keyword mk
		case 228:
			return 1222002;
		// company_type ct, movie_companies mc, movie_info mi, movie_link ml
		case 356:
			return 10531;
		// company_type ct, movie_companies mc, movie_info mi, title t
		case 612:
			return 62705;
		// company_type ct, movie_companies mc, movie_keyword mk, movie_link ml
		case 420:
			return 610301;
		// company_type ct, movie_companies mc, movie_keyword mk, title t
		case 676:
			return 2693976;
		// company_type ct, movie_companies mc, movie_link ml, title t
		case 804:
			return 19453;
		// keyword k, link_type lt, movie_keyword mk, movie_link ml
		case 408:
			return 199;
		// keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 232:
			return 3014;
		// keyword k, movie_companies mc, movie_keyword mk, movie_link ml
		case 424:
			return 1173;
		// keyword k, movie_companies mc, movie_keyword mk, title t
		case 680:
			return 8138;
		// keyword k, movie_info mi, movie_keyword mk, movie_link ml
		case 456:
			return 684;
		// keyword k, movie_info mi, movie_keyword mk, title t
		case 712:
			return 1069;
		// keyword k, movie_keyword mk, movie_link ml, title t
		case 904:
			return 199;
		// link_type lt, movie_companies mc, movie_info mi, movie_link ml
		case 368:
			return 9702;
		// link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 432:
			return 54010;
		// link_type lt, movie_companies mc, movie_link ml, title t
		case 816:
			return 3313;
		// link_type lt, movie_info mi, movie_keyword mk, movie_link ml
		case 464:
			return 15532;
		// link_type lt, movie_info mi, movie_link ml, title t
		case 848:
			return 1311;
		// link_type lt, movie_keyword mk, movie_link ml, title t
		case 912:
			return 12059;
		// movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 480:
			return 142387;
		// movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 736:
			return 584925;
		// movie_companies mc, movie_info mi, movie_link ml, title t
		case 864:
			return 7325;
		// movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 928:
			return 437931;
		// movie_info mi, movie_keyword mk, movie_link ml, title t
		case 960:
			return 15001;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 174:
			return 2293;
		// company_name cn, company_type ct, link_type lt, movie_companies mc, movie_link ml
		case 310:
			return 1152;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk
		case 230:
			return 446140;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_link ml
		case 358:
			return 4003;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, title t
		case 614:
			return 19967;
		// company_name cn, company_type ct, movie_companies mc, movie_keyword mk, movie_link ml
		case 422:
			return 40379;
		// company_name cn, company_type ct, movie_companies mc, movie_keyword mk, title t
		case 678:
			return 590369;
		// company_name cn, company_type ct, movie_companies mc, movie_link ml, title t
		case 806:
			return 1659;
		// company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 234:
			return 1043;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk, movie_link ml
		case 426:
			return 452;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 682:
			return 1495;
		// company_name cn, link_type lt, movie_companies mc, movie_info mi, movie_link ml
		case 370:
			return 3825;
		// company_name cn, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 434:
			return 9430;
		// company_name cn, link_type lt, movie_companies mc, movie_link ml, title t
		case 818:
			return 746;
		// company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 482:
			return 33584;
		// company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 738:
			return 201427;
		// company_name cn, movie_companies mc, movie_info mi, movie_link ml, title t
		case 866:
			return 2801;
		// company_name cn, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 930:
			return 29192;
		// company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 236:
			return 2654;
		// company_type ct, keyword k, movie_companies mc, movie_keyword mk, movie_link ml
		case 428:
			return 1052;
		// company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 684:
			return 6646;
		// company_type ct, link_type lt, movie_companies mc, movie_info mi, movie_link ml
		case 372:
			return 8785;
		// company_type ct, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 436:
			return 45210;
		// company_type ct, link_type lt, movie_companies mc, movie_link ml, title t
		case 820:
			return 2794;
		// company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 484:
			return 133955;
		// company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 740:
			return 514571;
		// company_type ct, movie_companies mc, movie_info mi, movie_link ml, title t
		case 868:
			return 6627;
		// company_type ct, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 932:
			return 330899;
		// keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 440:
			return 1021;
		// keyword k, link_type lt, movie_info mi, movie_keyword mk, movie_link ml
		case 472:
			return 684;
		// keyword k, link_type lt, movie_keyword mk, movie_link ml, title t
		case 920:
			return 152;
		// keyword k, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 488:
			return 4365;
		// keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 744:
			return 2166;
		// keyword k, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 936:
			return 845;
		// keyword k, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 968:
			return 517;
		// link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 496:
			return 70934;
		// link_type lt, movie_companies mc, movie_info mi, movie_link ml, title t
		case 880:
			return 6440;
		// link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 944:
			return 40132;
		// link_type lt, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 976:
			return 9341;
		// movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 992:
			return 66202;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 238:
			return 952;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk, movie_link ml
		case 430:
			return 422;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 686:
			return 1292;
		// company_name cn, company_type ct, link_type lt, movie_companies mc, movie_info mi, movie_link ml
		case 374:
			return 3722;
		// company_name cn, company_type ct, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 438:
			return 8713;
		// company_name cn, company_type ct, link_type lt, movie_companies mc, movie_link ml, title t
		case 822:
			return 698;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 486:
			return 31830;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 742:
			return 182470;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_link ml, title t
		case 870:
			return 2677;
		// company_name cn, company_type ct, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 934:
			return 26096;
		// company_name cn, keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 442:
			return 422;
		// company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 490:
			return 1911;
		// company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 746:
			return 779;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 938:
			return 360;
		// company_name cn, link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 498:
			return 30472;
		// company_name cn, link_type lt, movie_companies mc, movie_info mi, movie_link ml, title t
		case 882:
			return 2565;
		// company_name cn, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 946:
			return 7580;
		// company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 994:
			return 27692;
		// company_type ct, keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 444:
			return 962;
		// company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 492:
			return 4198;
		// company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 748:
			return 1867;
		// company_type ct, keyword k, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 940:
			return 742;
		// company_type ct, link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 500:
			return 65879;
		// company_type ct, link_type lt, movie_companies mc, movie_info mi, movie_link ml, title t
		case 884:
			return 5909;
		// company_type ct, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 948:
			return 32130;
		// company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 996:
			return 60243;
		// keyword k, link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 504:
			return 4365;
		// keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 952:
			return 705;
		// keyword k, link_type lt, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 984:
			return 517;
		// keyword k, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 1000:
			return 3124;
		// link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 1008:
			return 54297;
		// company_name cn, company_type ct, keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml
		case 446:
			return 402;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 494:
			return 1816;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 750:
			return 696;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 942:
			return 330;
		// company_name cn, company_type ct, link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 502:
			return 29589;
		// company_name cn, company_type ct, link_type lt, movie_companies mc, movie_info mi, movie_link ml, title t
		case 886:
			return 2462;
		// company_name cn, company_type ct, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 950:
			return 6863;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 998:
			return 25938;
		// company_name cn, keyword k, link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 506:
			return 1911;
		// company_name cn, keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 954:
			return 330;
		// company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 1002:
			return 1505;
		// company_name cn, link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 1010:
			return 24745;
		// company_type ct, keyword k, link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 508:
			return 4198;
		// company_type ct, keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 956:
			return 664;
		// company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 1004:
			return 3029;
		// company_type ct, link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 1012:
			return 50862;
		// keyword k, link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 1016:
			return 3124;
		// company_name cn, company_type ct, keyword k, link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml
		case 510:
			return 1816;
		// company_name cn, company_type ct, keyword k, link_type lt, movie_companies mc, movie_keyword mk, movie_link ml, title t
		case 958:
			return 310;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 1006:
			return 1410;
		// company_name cn, company_type ct, link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 1014:
			return 23862;
		// company_name cn, keyword k, link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 1018:
			return 1505;
		// company_type ct, keyword k, link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 1020:
			return 3029;
		// company_name cn, company_type ct, keyword k, link_type lt, movie_companies mc, movie_info mi, movie_keyword mk, movie_link ml, title t
		case 1022:
			return 1410;
	};
}

// [company_name cn, company_type ct, info_type it1, info_type it2, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t, ]
double
get_truth_cardinality_job_query_22(int total_relids)
{
	switch (total_relids) {
		// company_name cn
		case 2:
			return 126230;
		// company_type ct
		case 4:
			return 4;
		// info_type it1
		case 8:
			return 1;
		// info_type it2
		case 16:
			return 1;
		// keyword k
		case 32:
			return 3;
		// kind_type kt
		case 64:
			return 2;
		// movie_companies mc
		case 128:
			return 303271;
		// movie_info mi
		case 256:
			return 669336;
		// movie_info_idx mi_idx
		case 512:
			return 1171904;
		// movie_keyword mk
		case 1024:
			return 4523930;
		// title t
		case 2048:
			return 662065;
		// company_name cn, movie_companies mc
		case 130:
			return 248388;
		// company_type ct, movie_companies mc
		case 132:
			return 303271;
		// info_type it1, movie_info mi
		case 264:
			return 588764;
		// info_type it2, movie_info_idx mi_idx
		case 528:
			return 324117;
		// keyword k, movie_keyword mk
		case 1056:
			return 37091;
		// kind_type kt, title t
		case 2112:
			return 594504;
		// movie_companies mc, movie_info mi
		case 384:
			return 220217;
		// movie_companies mc, movie_info_idx mi_idx
		case 640:
			return 525073;
		// movie_companies mc, movie_keyword mk
		case 1152:
			return 9292367;
		// movie_companies mc, title t
		case 2176:
			return 29178;
		// movie_info mi, movie_info_idx mi_idx
		case 768:
			return 620108;
		// movie_info mi, movie_keyword mk
		case 1280:
			return 3898410;
		// movie_info mi, title t
		case 2304:
			return 167540;
		// movie_info_idx mi_idx, movie_keyword mk
		case 1536:
			return 8823239;
		// movie_info_idx mi_idx, title t
		case 2560:
			return 209698;
		// movie_keyword mk, title t
		case 3072:
			return 684042;
		// company_name cn, company_type ct, movie_companies mc
		case 134:
			return 248388;
		// company_name cn, movie_companies mc, movie_info mi
		case 386:
			return 173145;
		// company_name cn, movie_companies mc, movie_info_idx mi_idx
		case 642:
			return 457523;
		// company_name cn, movie_companies mc, movie_keyword mk
		case 1154:
			return 8663531;
		// company_name cn, movie_companies mc, title t
		case 2178:
			return 22677;
		// company_type ct, movie_companies mc, movie_info mi
		case 388:
			return 220217;
		// company_type ct, movie_companies mc, movie_info_idx mi_idx
		case 644:
			return 525073;
		// company_type ct, movie_companies mc, movie_keyword mk
		case 1156:
			return 9292367;
		// company_type ct, movie_companies mc, title t
		case 2180:
			return 29178;
		// info_type it1, movie_companies mc, movie_info mi
		case 392:
			return 159717;
		// info_type it1, movie_info mi, movie_info_idx mi_idx
		case 776:
			return 528970;
		// info_type it1, movie_info mi, movie_keyword mk
		case 1288:
			return 2786897;
		// info_type it1, movie_info mi, title t
		case 2312:
			return 154642;
		// info_type it2, movie_companies mc, movie_info_idx mi_idx
		case 656:
			return 135012;
		// info_type it2, movie_info mi, movie_info_idx mi_idx
		case 784:
			return 173221;
		// info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1552:
			return 2376417;
		// info_type it2, movie_info_idx mi_idx, title t
		case 2576:
			return 55098;
		// keyword k, movie_companies mc, movie_keyword mk
		case 1184:
			return 86022;
		// keyword k, movie_info mi, movie_keyword mk
		case 1312:
			return 32952;
		// keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1568:
			return 85012;
		// keyword k, movie_keyword mk, title t
		case 3104:
			return 5606;
		// kind_type kt, movie_companies mc, title t
		case 2240:
			return 19509;
		// kind_type kt, movie_info mi, title t
		case 2368:
			return 122395;
		// kind_type kt, movie_info_idx mi_idx, title t
		case 2624:
			return 164502;
		// kind_type kt, movie_keyword mk, title t
		case 3136:
			return 556508;
		// movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 896:
			return 438229;
		// movie_companies mc, movie_info mi, movie_keyword mk
		case 1408:
			return 12779528;
		// movie_companies mc, movie_info mi, title t
		case 2432:
			return 15648;
		// movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1664:
			return 22532569;
		// movie_companies mc, movie_info_idx mi_idx, title t
		case 2688:
			return 40101;
		// movie_companies mc, movie_keyword mk, title t
		case 3200:
			return 631838;
		// movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1792:
			return 8403703;
		// movie_info mi, movie_info_idx mi_idx, title t
		case 2816:
			return 99794;
		// movie_info mi, movie_keyword mk, title t
		case 3328:
			return 442187;
		// movie_info_idx mi_idx, movie_keyword mk, title t
		case 3584:
			return 1105436;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi
		case 390:
			return 173145;
		// company_name cn, company_type ct, movie_companies mc, movie_info_idx mi_idx
		case 646:
			return 457523;
		// company_name cn, company_type ct, movie_companies mc, movie_keyword mk
		case 1158:
			return 8663531;
		// company_name cn, company_type ct, movie_companies mc, title t
		case 2182:
			return 22677;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi
		case 394:
			return 114885;
		// company_name cn, info_type it2, movie_companies mc, movie_info_idx mi_idx
		case 658:
			return 115293;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 1186:
			return 80023;
		// company_name cn, kind_type kt, movie_companies mc, title t
		case 2242:
			return 16443;
		// company_name cn, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 898:
			return 378433;
		// company_name cn, movie_companies mc, movie_info mi, movie_keyword mk
		case 1410:
			return 12074611;
		// company_name cn, movie_companies mc, movie_info mi, title t
		case 2434:
			return 10825;
		// company_name cn, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1666:
			return 21129152;
		// company_name cn, movie_companies mc, movie_info_idx mi_idx, title t
		case 2690:
			return 34217;
		// company_name cn, movie_companies mc, movie_keyword mk, title t
		case 3202:
			return 568745;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi
		case 396:
			return 159717;
		// company_type ct, info_type it2, movie_companies mc, movie_info_idx mi_idx
		case 660:
			return 135012;
		// company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 1188:
			return 86022;
		// company_type ct, kind_type kt, movie_companies mc, title t
		case 2244:
			return 19509;
		// company_type ct, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 900:
			return 438229;
		// company_type ct, movie_companies mc, movie_info mi, movie_keyword mk
		case 1412:
			return 12779528;
		// company_type ct, movie_companies mc, movie_info mi, title t
		case 2436:
			return 15648;
		// company_type ct, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1668:
			return 22532569;
		// company_type ct, movie_companies mc, movie_info_idx mi_idx, title t
		case 2692:
			return 40101;
		// company_type ct, movie_companies mc, movie_keyword mk, title t
		case 3204:
			return 631838;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx
		case 792:
			return 147247;
		// info_type it1, keyword k, movie_info mi, movie_keyword mk
		case 1320:
			return 23042;
		// info_type it1, kind_type kt, movie_info mi, title t
		case 2376:
			return 113741;
		// info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 904:
			return 313272;
		// info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1416:
			return 7718607;
		// info_type it1, movie_companies mc, movie_info mi, title t
		case 2440:
			return 13288;
		// info_type it1, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1800:
			return 5812479;
		// info_type it1, movie_info mi, movie_info_idx mi_idx, title t
		case 2824:
			return 88921;
		// info_type it1, movie_info mi, movie_keyword mk, title t
		case 3336:
			return 400865;
		// info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1584:
			return 24800;
		// info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 2640:
			return 40854;
		// info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 912:
			return 102257;
		// info_type it2, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1680:
			return 5206035;
		// info_type it2, movie_companies mc, movie_info_idx mi_idx, title t
		case 2704:
			return 10817;
		// info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1808:
			return 2099475;
		// info_type it2, movie_info mi, movie_info_idx mi_idx, title t
		case 2832:
			return 27331;
		// info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3600:
			return 275249;
		// keyword k, kind_type kt, movie_keyword mk, title t
		case 3168:
			return 4832;
		// keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1440:
			return 119379;
		// keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1696:
			return 215078;
		// keyword k, movie_companies mc, movie_keyword mk, title t
		case 3232:
			return 5186;
		// keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1824:
			return 78865;
		// keyword k, movie_info mi, movie_keyword mk, title t
		case 3360:
			return 3787;
		// keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3616:
			return 10174;
		// kind_type kt, movie_companies mc, movie_info mi, title t
		case 2496:
			return 9739;
		// kind_type kt, movie_companies mc, movie_info_idx mi_idx, title t
		case 2752:
			return 30220;
		// kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3264:
			return 588695;
		// kind_type kt, movie_info mi, movie_info_idx mi_idx, title t
		case 2880:
			return 70129;
		// kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3392:
			return 345817;
		// kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3648:
			return 951997;
		// movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1920:
			return 30872561;
		// movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2944:
			return 25611;
		// movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3456:
			return 601262;
		// movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3712:
			return 1562704;
		// movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3840:
			return 772655;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi
		case 398:
			return 114885;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info_idx mi_idx
		case 662:
			return 115293;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 1190:
			return 80023;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, title t
		case 2246:
			return 16443;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 902:
			return 378433;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk
		case 1414:
			return 12074611;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, title t
		case 2438:
			return 10825;
		// company_name cn, company_type ct, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1670:
			return 21129152;
		// company_name cn, company_type ct, movie_companies mc, movie_info_idx mi_idx, title t
		case 2694:
			return 34217;
		// company_name cn, company_type ct, movie_companies mc, movie_keyword mk, title t
		case 3206:
			return 568745;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 906:
			return 258193;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1418:
			return 7153069;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, title t
		case 2442:
			return 8542;
		// company_name cn, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 914:
			return 85034;
		// company_name cn, info_type it2, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1682:
			return 4817242;
		// company_name cn, info_type it2, movie_companies mc, movie_info_idx mi_idx, title t
		case 2706:
			return 9035;
		// company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1442:
			return 112867;
		// company_name cn, keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1698:
			return 199517;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 3234:
			return 4569;
		// company_name cn, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2498:
			return 8054;
		// company_name cn, kind_type kt, movie_companies mc, movie_info_idx mi_idx, title t
		case 2754:
			return 26790;
		// company_name cn, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3266:
			return 541688;
		// company_name cn, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1922:
			return 29290219;
		// company_name cn, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2946:
			return 20979;
		// company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3458:
			return 548807;
		// company_name cn, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3714:
			return 1420130;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 908:
			return 313272;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1420:
			return 7718607;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, title t
		case 2444:
			return 13288;
		// company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 916:
			return 102257;
		// company_type ct, info_type it2, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1684:
			return 5206035;
		// company_type ct, info_type it2, movie_companies mc, movie_info_idx mi_idx, title t
		case 2708:
			return 10817;
		// company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1444:
			return 119379;
		// company_type ct, keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1700:
			return 215078;
		// company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 3236:
			return 5186;
		// company_type ct, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2500:
			return 9739;
		// company_type ct, kind_type kt, movie_companies mc, movie_info_idx mi_idx, title t
		case 2756:
			return 30220;
		// company_type ct, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3268:
			return 588695;
		// company_type ct, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1924:
			return 30872561;
		// company_type ct, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2948:
			return 25611;
		// company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3460:
			return 601262;
		// company_type ct, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3716:
			return 1562704;
		// info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 920:
			return 78662;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1816:
			return 1591313;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, title t
		case 2840:
			return 23910;
		// info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1448:
			return 70725;
		// info_type it1, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1832:
			return 54457;
		// info_type it1, keyword k, movie_info mi, movie_keyword mk, title t
		case 3368:
			return 3486;
		// info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2504:
			return 8518;
		// info_type it1, kind_type kt, movie_info mi, movie_info_idx mi_idx, title t
		case 2888:
			return 63030;
		// info_type it1, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3400:
			return 310350;
		// info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1928:
			return 18945575;
		// info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2952:
			return 22354;
		// info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3464:
			return 552270;
		// info_type it1, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3848:
			return 699321;
		// info_type it2, keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1712:
			return 52686;
		// info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1840:
			return 21446;
		// info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3632:
			return 2781;
		// info_type it2, kind_type kt, movie_companies mc, movie_info_idx mi_idx, title t
		case 2768:
			return 7820;
		// info_type it2, kind_type kt, movie_info mi, movie_info_idx mi_idx, title t
		case 2896:
			return 17760;
		// info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3664:
			return 232125;
		// info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1936:
			return 6073375;
		// info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2960:
			return 6717;
		// info_type it2, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3728:
			return 401578;
		// info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3856:
			return 195828;
		// keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3296:
			return 4808;
		// keyword k, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3424:
			return 3204;
		// keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3680:
			return 8699;
		// keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1952:
			return 294591;
		// keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3488:
			return 5117;
		// keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3744:
			return 13397;
		// keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3872:
			return 7354;
		// kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3008:
			return 20357;
		// kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3520:
			return 570769;
		// kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3776:
			return 1486635;
		// kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3904:
			return 656428;
		// movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3968:
			return 1515073;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 910:
			return 258193;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1422:
			return 7153069;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, title t
		case 2446:
			return 8542;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 918:
			return 85034;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1686:
			return 4817242;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info_idx mi_idx, title t
		case 2710:
			return 9035;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1446:
			return 112867;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1702:
			return 199517;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 3238:
			return 4569;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2502:
			return 8054;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_info_idx mi_idx, title t
		case 2758:
			return 26790;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3270:
			return 541688;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1926:
			return 29290219;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2950:
			return 20979;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3462:
			return 548807;
		// company_name cn, company_type ct, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3718:
			return 1420130;
		// company_name cn, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 922:
			return 62374;
		// company_name cn, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1450:
			return 65436;
		// company_name cn, info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2506:
			return 6879;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1930:
			return 17688623;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2954:
			return 17855;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3466:
			return 501128;
		// company_name cn, info_type it2, keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1714:
			return 48114;
		// company_name cn, info_type it2, kind_type kt, movie_companies mc, movie_info_idx mi_idx, title t
		case 2770:
			return 6816;
		// company_name cn, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1938:
			return 5676451;
		// company_name cn, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2962:
			return 5299;
		// company_name cn, info_type it2, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3730:
			return 359160;
		// company_name cn, keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3298:
			return 4302;
		// company_name cn, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1954:
			return 277914;
		// company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3490:
			return 4593;
		// company_name cn, keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3746:
			return 11774;
		// company_name cn, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3010:
			return 17715;
		// company_name cn, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3522:
			return 532575;
		// company_name cn, kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3778:
			return 1364376;
		// company_name cn, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3970:
			return 1396800;
		// company_type ct, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 924:
			return 78662;
		// company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1452:
			return 70725;
		// company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2508:
			return 8518;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1932:
			return 18945575;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2956:
			return 22354;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3468:
			return 552270;
		// company_type ct, info_type it2, keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1716:
			return 52686;
		// company_type ct, info_type it2, kind_type kt, movie_companies mc, movie_info_idx mi_idx, title t
		case 2772:
			return 7820;
		// company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1940:
			return 6073375;
		// company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2964:
			return 6717;
		// company_type ct, info_type it2, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3732:
			return 401578;
		// company_type ct, keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3300:
			return 4808;
		// company_type ct, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1956:
			return 294591;
		// company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3492:
			return 5117;
		// company_type ct, keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3748:
			return 13397;
		// company_type ct, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3012:
			return 20357;
		// company_type ct, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3524:
			return 570769;
		// company_type ct, kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3780:
			return 1486635;
		// company_type ct, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3972:
			return 1515073;
		// info_type it1, info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1848:
			return 16083;
		// info_type it1, info_type it2, kind_type kt, movie_info mi, movie_info_idx mi_idx, title t
		case 2904:
			return 15594;
		// info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1944:
			return 4488092;
		// info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2968:
			return 5720;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3864:
			return 175788;
		// info_type it1, keyword k, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3432:
			return 2937;
		// info_type it1, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1960:
			return 177750;
		// info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3496:
			return 4717;
		// info_type it1, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3880:
			return 6710;
		// info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3016:
			return 18188;
		// info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3528:
			return 523511;
		// info_type it1, kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3912:
			return 591692;
		// info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3976:
			return 1395768;
		// info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3696:
			return 2378;
		// info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1968:
			return 61391;
		// info_type it2, keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3760:
			return 3634;
		// info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3888:
			return 1983;
		// info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3024:
			return 5071;
		// info_type it2, kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3792:
			return 380568;
		// info_type it2, kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3920:
			return 162329;
		// info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3984:
			return 394430;
		// keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3552:
			return 4816;
		// keyword k, kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3808:
			return 12481;
		// keyword k, kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3936:
			return 6192;
		// keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4000:
			return 13551;
		// kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4032:
			return 1461224;
		// company_name cn, company_type ct, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx
		case 926:
			return 62374;
		// company_name cn, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1454:
			return 65436;
		// company_name cn, company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2510:
			return 6879;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1934:
			return 17688623;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2958:
			return 17855;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3470:
			return 501128;
		// company_name cn, company_type ct, info_type it2, keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk
		case 1718:
			return 48114;
		// company_name cn, company_type ct, info_type it2, kind_type kt, movie_companies mc, movie_info_idx mi_idx, title t
		case 2774:
			return 6816;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1942:
			return 5676451;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2966:
			return 5299;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3734:
			return 359160;
		// company_name cn, company_type ct, keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3302:
			return 4302;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1958:
			return 277914;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3494:
			return 4593;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3750:
			return 11774;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3014:
			return 17715;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3526:
			return 532575;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3782:
			return 1364376;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3974:
			return 1396800;
		// company_name cn, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1946:
			return 4137827;
		// company_name cn, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2970:
			return 4344;
		// company_name cn, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1962:
			return 164055;
		// company_name cn, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3498:
			return 4205;
		// company_name cn, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3018:
			return 15635;
		// company_name cn, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3530:
			return 486519;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3978:
			return 1280868;
		// company_name cn, info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1970:
			return 56872;
		// company_name cn, info_type it2, keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3762:
			return 3138;
		// company_name cn, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3026:
			return 4282;
		// company_name cn, info_type it2, kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3794:
			return 344606;
		// company_name cn, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3986:
			return 356850;
		// company_name cn, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3554:
			return 4374;
		// company_name cn, keyword k, kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3810:
			return 11112;
		// company_name cn, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4002:
			return 12161;
		// company_name cn, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4034:
			return 1359071;
		// company_type ct, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1948:
			return 4488092;
		// company_type ct, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2972:
			return 5720;
		// company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1964:
			return 177750;
		// company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3500:
			return 4717;
		// company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3020:
			return 18188;
		// company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3532:
			return 523511;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3980:
			return 1395768;
		// company_type ct, info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1972:
			return 61391;
		// company_type ct, info_type it2, keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3764:
			return 3634;
		// company_type ct, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3028:
			return 5071;
		// company_type ct, info_type it2, kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3796:
			return 380568;
		// company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3988:
			return 394430;
		// company_type ct, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3556:
			return 4816;
		// company_type ct, keyword k, kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3812:
			return 12481;
		// company_type ct, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4004:
			return 13551;
		// company_type ct, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4036:
			return 1461224;
		// info_type it1, info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1976:
			return 44215;
		// info_type it1, info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3896:
			return 1811;
		// info_type it1, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3032:
			return 4434;
		// info_type it1, info_type it2, kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3928:
			return 144900;
		// info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3992:
			return 366399;
		// info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3560:
			return 4424;
		// info_type it1, keyword k, kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3944:
			return 5622;
		// info_type it1, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4008:
			return 12512;
		// info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4040:
			return 1344579;
		// info_type it2, keyword k, kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3824:
			return 3374;
		// info_type it2, keyword k, kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3952:
			return 1659;
		// info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4016:
			return 3655;
		// info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4048:
			return 378207;
		// keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4064:
			return 12794;
		// company_name cn, company_type ct, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1950:
			return 4137827;
		// company_name cn, company_type ct, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 2974:
			return 4344;
		// company_name cn, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1966:
			return 164055;
		// company_name cn, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3502:
			return 4205;
		// company_name cn, company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3022:
			return 15635;
		// company_name cn, company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3534:
			return 486519;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3982:
			return 1280868;
		// company_name cn, company_type ct, info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1974:
			return 56872;
		// company_name cn, company_type ct, info_type it2, keyword k, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3766:
			return 3138;
		// company_name cn, company_type ct, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3030:
			return 4282;
		// company_name cn, company_type ct, info_type it2, kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3798:
			return 344606;
		// company_name cn, company_type ct, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3990:
			return 356850;
		// company_name cn, company_type ct, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3558:
			return 4374;
		// company_name cn, company_type ct, keyword k, kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3814:
			return 11112;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4006:
			return 12161;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4038:
			return 1359071;
		// company_name cn, info_type it1, info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1978:
			return 40185;
		// company_name cn, info_type it1, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3034:
			return 3672;
		// company_name cn, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3994:
			return 329785;
		// company_name cn, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3562:
			return 3994;
		// company_name cn, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4010:
			return 11154;
		// company_name cn, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4042:
			return 1245610;
		// company_name cn, info_type it2, keyword k, kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3826:
			return 2958;
		// company_name cn, info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4018:
			return 3221;
		// company_name cn, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4050:
			return 345741;
		// company_name cn, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4066:
			return 11574;
		// company_type ct, info_type it1, info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1980:
			return 44215;
		// company_type ct, info_type it1, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3036:
			return 4434;
		// company_type ct, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3996:
			return 366399;
		// company_type ct, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3564:
			return 4424;
		// company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4012:
			return 12512;
		// company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4044:
			return 1344579;
		// company_type ct, info_type it2, keyword k, kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3828:
			return 3374;
		// company_type ct, info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4020:
			return 3655;
		// company_type ct, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4052:
			return 378207;
		// company_type ct, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4068:
			return 12794;
		// info_type it1, info_type it2, keyword k, kind_type kt, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3960:
			return 1507;
		// info_type it1, info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4024:
			return 3451;
		// info_type it1, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4056:
			return 350973;
		// info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4072:
			return 11768;
		// info_type it2, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4080:
			return 3424;
		// company_name cn, company_type ct, info_type it1, info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 1982:
			return 40185;
		// company_name cn, company_type ct, info_type it1, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, title t
		case 3038:
			return 3672;
		// company_name cn, company_type ct, info_type it1, info_type it2, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3998:
			return 329785;
		// company_name cn, company_type ct, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3566:
			return 3994;
		// company_name cn, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4014:
			return 11154;
		// company_name cn, company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4046:
			return 1245610;
		// company_name cn, company_type ct, info_type it2, keyword k, kind_type kt, movie_companies mc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 3830:
			return 2958;
		// company_name cn, company_type ct, info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4022:
			return 3221;
		// company_name cn, company_type ct, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4054:
			return 345741;
		// company_name cn, company_type ct, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4070:
			return 11574;
		// company_name cn, info_type it1, info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4026:
			return 3027;
		// company_name cn, info_type it1, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4058:
			return 319409;
		// company_name cn, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4074:
			return 10580;
		// company_name cn, info_type it2, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4082:
			return 3042;
		// company_type ct, info_type it1, info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4028:
			return 3451;
		// company_type ct, info_type it1, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4060:
			return 350973;
		// company_type ct, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4076:
			return 11768;
		// company_type ct, info_type it2, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4084:
			return 3424;
		// info_type it1, info_type it2, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4088:
			return 3223;
		// company_name cn, company_type ct, info_type it1, info_type it2, keyword k, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4030:
			return 3027;
		// company_name cn, company_type ct, info_type it1, info_type it2, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4062:
			return 319409;
		// company_name cn, company_type ct, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4078:
			return 10580;
		// company_name cn, company_type ct, info_type it2, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4086:
			return 3042;
		// company_name cn, info_type it1, info_type it2, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4090:
			return 2851;
		// company_type ct, info_type it1, info_type it2, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4092:
			return 3223;
		// company_name cn, company_type ct, info_type it1, info_type it2, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 4094:
			return 2851;
	};
}

// [complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t, ]
double
get_truth_cardinality_job_query_23(int total_relids)
{
	switch (total_relids) {
		// complete_cast cc
		case 2:
			return 135086;
		// comp_cast_type cct1
		case 4:
			return 1;
		// company_name cn
		case 8:
			return 84843;
		// company_type ct
		case 16:
			return 4;
		// info_type it1
		case 32:
			return 1;
		// keyword k
		case 64:
			return 134170;
		// kind_type kt
		case 128:
			return 1;
		// movie_companies mc
		case 256:
			return 2609129;
		// movie_info mi
		case 512:
			return 1783;
		// movie_keyword mk
		case 1024:
			return 4523930;
		// title t
		case 2048:
			return 1381453;
		// complete_cast cc, comp_cast_type cct1
		case 6:
			return 24592;
		// complete_cast cc, movie_companies mc
		case 258:
			return 612638;
		// complete_cast cc, movie_info mi
		case 514:
			return 40;
		// complete_cast cc, movie_keyword mk
		case 1026:
			return 2171367;
		// complete_cast cc, title t
		case 2050:
			return 38722;
		// company_name cn, movie_companies mc
		case 264:
			return 1153798;
		// company_type ct, movie_companies mc
		case 272:
			return 2609129;
		// info_type it1, movie_info mi
		case 544:
			return 1783;
		// keyword k, movie_keyword mk
		case 1088:
			return 4523930;
		// kind_type kt, title t
		case 2176:
			return 274015;
		// movie_companies mc, movie_info mi
		case 768:
			return 2884;
		// movie_companies mc, movie_keyword mk
		case 1280:
			return 34863638;
		// movie_companies mc, title t
		case 2304:
			return 1170186;
		// movie_info mi, movie_keyword mk
		case 1536:
			return 4463;
		// movie_info mi, title t
		case 2560:
			return 1749;
		// movie_keyword mk, title t
		case 3072:
			return 1970380;
		// complete_cast cc, comp_cast_type cct1, movie_companies mc
		case 262:
			return 227682;
		// complete_cast cc, comp_cast_type cct1, movie_info mi
		case 518:
			return 6;
		// complete_cast cc, comp_cast_type cct1, movie_keyword mk
		case 1030:
			return 1023805;
		// complete_cast cc, comp_cast_type cct1, title t
		case 2054:
			return 2083;
		// complete_cast cc, company_name cn, movie_companies mc
		case 266:
			return 282816;
		// complete_cast cc, company_type ct, movie_companies mc
		case 274:
			return 612638;
		// complete_cast cc, info_type it1, movie_info mi
		case 546:
			return 40;
		// complete_cast cc, keyword k, movie_keyword mk
		case 1090:
			return 2171367;
		// complete_cast cc, kind_type kt, title t
		case 2178:
			return 6234;
		// complete_cast cc, movie_companies mc, movie_info mi
		case 770:
			return 57;
		// complete_cast cc, movie_companies mc, movie_keyword mk
		case 1282:
			return 29258051;
		// complete_cast cc, movie_companies mc, title t
		case 2306:
			return 148643;
		// complete_cast cc, movie_info mi, movie_keyword mk
		case 1538:
			return 741;
		// complete_cast cc, movie_info mi, title t
		case 2562:
			return 37;
		// complete_cast cc, movie_keyword mk, title t
		case 3074:
			return 468474;
		// company_name cn, company_type ct, movie_companies mc
		case 280:
			return 1153798;
		// company_name cn, movie_companies mc, movie_info mi
		case 776:
			return 2647;
		// company_name cn, movie_companies mc, movie_keyword mk
		case 1288:
			return 12177631;
		// company_name cn, movie_companies mc, title t
		case 2312:
			return 468787;
		// company_type ct, movie_companies mc, movie_info mi
		case 784:
			return 2884;
		// company_type ct, movie_companies mc, movie_keyword mk
		case 1296:
			return 34863638;
		// company_type ct, movie_companies mc, title t
		case 2320:
			return 1170186;
		// info_type it1, movie_companies mc, movie_info mi
		case 800:
			return 2884;
		// info_type it1, movie_info mi, movie_keyword mk
		case 1568:
			return 4463;
		// info_type it1, movie_info mi, title t
		case 2592:
			return 1749;
		// keyword k, movie_companies mc, movie_keyword mk
		case 1344:
			return 34863638;
		// keyword k, movie_info mi, movie_keyword mk
		case 1600:
			return 4463;
		// keyword k, movie_keyword mk, title t
		case 3136:
			return 1970380;
		// kind_type kt, movie_companies mc, title t
		case 2432:
			return 485778;
		// kind_type kt, movie_info mi, title t
		case 2688:
			return 818;
		// kind_type kt, movie_keyword mk, title t
		case 3200:
			return 1053171;
		// movie_companies mc, movie_info mi, movie_keyword mk
		case 1792:
			return 9187;
		// movie_companies mc, movie_info mi, title t
		case 2816:
			return 2820;
		// movie_companies mc, movie_keyword mk, title t
		case 3328:
			return 16657594;
		// movie_info mi, movie_keyword mk, title t
		case 3584:
			return 4309;
		// complete_cast cc, comp_cast_type cct1, company_name cn, movie_companies mc
		case 270:
			return 105289;
		// complete_cast cc, comp_cast_type cct1, company_type ct, movie_companies mc
		case 278:
			return 227682;
		// complete_cast cc, comp_cast_type cct1, info_type it1, movie_info mi
		case 550:
			return 6;
		// complete_cast cc, comp_cast_type cct1, keyword k, movie_keyword mk
		case 1094:
			return 1023805;
		// complete_cast cc, comp_cast_type cct1, kind_type kt, title t
		case 2182:
			return 1033;
		// complete_cast cc, comp_cast_type cct1, movie_companies mc, movie_info mi
		case 774:
			return 7;
		// complete_cast cc, comp_cast_type cct1, movie_companies mc, movie_keyword mk
		case 1286:
			return 16526281;
		// complete_cast cc, comp_cast_type cct1, movie_companies mc, title t
		case 2310:
			return 28562;
		// complete_cast cc, comp_cast_type cct1, movie_info mi, movie_keyword mk
		case 1542:
			return 625;
		// complete_cast cc, comp_cast_type cct1, movie_info mi, title t
		case 2566:
			return 5;
		// complete_cast cc, comp_cast_type cct1, movie_keyword mk, title t
		case 3078:
			return 133450;
		// complete_cast cc, company_name cn, company_type ct, movie_companies mc
		case 282:
			return 282816;
		// complete_cast cc, company_name cn, movie_companies mc, movie_info mi
		case 778:
			return 51;
		// complete_cast cc, company_name cn, movie_companies mc, movie_keyword mk
		case 1290:
			return 10779189;
		// complete_cast cc, company_name cn, movie_companies mc, title t
		case 2314:
			return 47552;
		// complete_cast cc, company_type ct, movie_companies mc, movie_info mi
		case 786:
			return 57;
		// complete_cast cc, company_type ct, movie_companies mc, movie_keyword mk
		case 1298:
			return 29258051;
		// complete_cast cc, company_type ct, movie_companies mc, title t
		case 2322:
			return 148643;
		// complete_cast cc, info_type it1, movie_companies mc, movie_info mi
		case 802:
			return 57;
		// complete_cast cc, info_type it1, movie_info mi, movie_keyword mk
		case 1570:
			return 741;
		// complete_cast cc, info_type it1, movie_info mi, title t
		case 2594:
			return 37;
		// complete_cast cc, keyword k, movie_companies mc, movie_keyword mk
		case 1346:
			return 29258051;
		// complete_cast cc, keyword k, movie_info mi, movie_keyword mk
		case 1602:
			return 741;
		// complete_cast cc, keyword k, movie_keyword mk, title t
		case 3138:
			return 468474;
		// complete_cast cc, kind_type kt, movie_companies mc, title t
		case 2434:
			return 74439;
		// complete_cast cc, kind_type kt, movie_info mi, title t
		case 2690:
			return 32;
		// complete_cast cc, kind_type kt, movie_keyword mk, title t
		case 3202:
			return 355758;
		// complete_cast cc, movie_companies mc, movie_info mi, movie_keyword mk
		case 1794:
			return 929;
		// complete_cast cc, movie_companies mc, movie_info mi, title t
		case 2818:
			return 54;
		// complete_cast cc, movie_companies mc, movie_keyword mk, title t
		case 3330:
			return 9161531;
		// complete_cast cc, movie_info mi, movie_keyword mk, title t
		case 3586:
			return 731;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi
		case 792:
			return 2647;
		// company_name cn, company_type ct, movie_companies mc, movie_keyword mk
		case 1304:
			return 12177631;
		// company_name cn, company_type ct, movie_companies mc, title t
		case 2328:
			return 468787;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi
		case 808:
			return 2647;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 1352:
			return 12177631;
		// company_name cn, kind_type kt, movie_companies mc, title t
		case 2440:
			return 153292;
		// company_name cn, movie_companies mc, movie_info mi, movie_keyword mk
		case 1800:
			return 7964;
		// company_name cn, movie_companies mc, movie_info mi, title t
		case 2824:
			return 2594;
		// company_name cn, movie_companies mc, movie_keyword mk, title t
		case 3336:
			return 4509366;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi
		case 816:
			return 2884;
		// company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 1360:
			return 34863638;
		// company_type ct, kind_type kt, movie_companies mc, title t
		case 2448:
			return 485778;
		// company_type ct, movie_companies mc, movie_info mi, movie_keyword mk
		case 1808:
			return 9187;
		// company_type ct, movie_companies mc, movie_info mi, title t
		case 2832:
			return 2820;
		// company_type ct, movie_companies mc, movie_keyword mk, title t
		case 3344:
			return 16657594;
		// info_type it1, keyword k, movie_info mi, movie_keyword mk
		case 1632:
			return 4463;
		// info_type it1, kind_type kt, movie_info mi, title t
		case 2720:
			return 818;
		// info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1824:
			return 9187;
		// info_type it1, movie_companies mc, movie_info mi, title t
		case 2848:
			return 2820;
		// info_type it1, movie_info mi, movie_keyword mk, title t
		case 3616:
			return 4309;
		// keyword k, kind_type kt, movie_keyword mk, title t
		case 3264:
			return 1053171;
		// keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1856:
			return 9187;
		// keyword k, movie_companies mc, movie_keyword mk, title t
		case 3392:
			return 16657594;
		// keyword k, movie_info mi, movie_keyword mk, title t
		case 3648:
			return 4309;
		// kind_type kt, movie_companies mc, movie_info mi, title t
		case 2944:
			return 1166;
		// kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3456:
			return 13832966;
		// kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3712:
			return 2508;
		// movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3840:
			return 8703;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, movie_companies mc
		case 286:
			return 105289;
		// complete_cast cc, comp_cast_type cct1, company_name cn, movie_companies mc, movie_info mi
		case 782:
			return 7;
		// complete_cast cc, comp_cast_type cct1, company_name cn, movie_companies mc, movie_keyword mk
		case 1294:
			return 6251157;
		// complete_cast cc, comp_cast_type cct1, company_name cn, movie_companies mc, title t
		case 2318:
			return 7306;
		// complete_cast cc, comp_cast_type cct1, company_type ct, movie_companies mc, movie_info mi
		case 790:
			return 7;
		// complete_cast cc, comp_cast_type cct1, company_type ct, movie_companies mc, movie_keyword mk
		case 1302:
			return 16526281;
		// complete_cast cc, comp_cast_type cct1, company_type ct, movie_companies mc, title t
		case 2326:
			return 28562;
		// complete_cast cc, comp_cast_type cct1, info_type it1, movie_companies mc, movie_info mi
		case 806:
			return 7;
		// complete_cast cc, comp_cast_type cct1, info_type it1, movie_info mi, movie_keyword mk
		case 1574:
			return 625;
		// complete_cast cc, comp_cast_type cct1, info_type it1, movie_info mi, title t
		case 2598:
			return 5;
		// complete_cast cc, comp_cast_type cct1, keyword k, movie_companies mc, movie_keyword mk
		case 1350:
			return 16526281;
		// complete_cast cc, comp_cast_type cct1, keyword k, movie_info mi, movie_keyword mk
		case 1606:
			return 625;
		// complete_cast cc, comp_cast_type cct1, keyword k, movie_keyword mk, title t
		case 3142:
			return 133450;
		// complete_cast cc, comp_cast_type cct1, kind_type kt, movie_companies mc, title t
		case 2438:
			return 23883;
		// complete_cast cc, comp_cast_type cct1, kind_type kt, movie_info mi, title t
		case 2694:
			return 5;
		// complete_cast cc, comp_cast_type cct1, kind_type kt, movie_keyword mk, title t
		case 3206:
			return 124620;
		// complete_cast cc, comp_cast_type cct1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1798:
			return 628;
		// complete_cast cc, comp_cast_type cct1, movie_companies mc, movie_info mi, title t
		case 2822:
			return 6;
		// complete_cast cc, comp_cast_type cct1, movie_companies mc, movie_keyword mk, title t
		case 3334:
			return 3350169;
		// complete_cast cc, comp_cast_type cct1, movie_info mi, movie_keyword mk, title t
		case 3590:
			return 615;
		// complete_cast cc, company_name cn, company_type ct, movie_companies mc, movie_info mi
		case 794:
			return 51;
		// complete_cast cc, company_name cn, company_type ct, movie_companies mc, movie_keyword mk
		case 1306:
			return 10779189;
		// complete_cast cc, company_name cn, company_type ct, movie_companies mc, title t
		case 2330:
			return 47552;
		// complete_cast cc, company_name cn, info_type it1, movie_companies mc, movie_info mi
		case 810:
			return 51;
		// complete_cast cc, company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 1354:
			return 10779189;
		// complete_cast cc, company_name cn, kind_type kt, movie_companies mc, title t
		case 2442:
			return 18806;
		// complete_cast cc, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk
		case 1802:
			return 849;
		// complete_cast cc, company_name cn, movie_companies mc, movie_info mi, title t
		case 2826:
			return 48;
		// complete_cast cc, company_name cn, movie_companies mc, movie_keyword mk, title t
		case 3338:
			return 2252518;
		// complete_cast cc, company_type ct, info_type it1, movie_companies mc, movie_info mi
		case 818:
			return 57;
		// complete_cast cc, company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 1362:
			return 29258051;
		// complete_cast cc, company_type ct, kind_type kt, movie_companies mc, title t
		case 2450:
			return 74439;
		// complete_cast cc, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk
		case 1810:
			return 929;
		// complete_cast cc, company_type ct, movie_companies mc, movie_info mi, title t
		case 2834:
			return 54;
		// complete_cast cc, company_type ct, movie_companies mc, movie_keyword mk, title t
		case 3346:
			return 9161531;
		// complete_cast cc, info_type it1, keyword k, movie_info mi, movie_keyword mk
		case 1634:
			return 741;
		// complete_cast cc, info_type it1, kind_type kt, movie_info mi, title t
		case 2722:
			return 32;
		// complete_cast cc, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1826:
			return 929;
		// complete_cast cc, info_type it1, movie_companies mc, movie_info mi, title t
		case 2850:
			return 54;
		// complete_cast cc, info_type it1, movie_info mi, movie_keyword mk, title t
		case 3618:
			return 731;
		// complete_cast cc, keyword k, kind_type kt, movie_keyword mk, title t
		case 3266:
			return 355758;
		// complete_cast cc, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1858:
			return 929;
		// complete_cast cc, keyword k, movie_companies mc, movie_keyword mk, title t
		case 3394:
			return 9161531;
		// complete_cast cc, keyword k, movie_info mi, movie_keyword mk, title t
		case 3650:
			return 731;
		// complete_cast cc, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2946:
			return 37;
		// complete_cast cc, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3458:
			return 8508369;
		// complete_cast cc, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3714:
			return 680;
		// complete_cast cc, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3842:
			return 919;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi
		case 824:
			return 2647;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 1368:
			return 12177631;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, title t
		case 2456:
			return 153292;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk
		case 1816:
			return 7964;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, title t
		case 2840:
			return 2594;
		// company_name cn, company_type ct, movie_companies mc, movie_keyword mk, title t
		case 3352:
			return 4509366;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1832:
			return 7964;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, title t
		case 2856:
			return 2594;
		// company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1864:
			return 7964;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 3400:
			return 4509366;
		// company_name cn, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2952:
			return 1056;
		// company_name cn, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3464:
			return 3178544;
		// company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3848:
			return 7683;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1840:
			return 9187;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, title t
		case 2864:
			return 2820;
		// company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1872:
			return 9187;
		// company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 3408:
			return 16657594;
		// company_type ct, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2960:
			return 1166;
		// company_type ct, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3472:
			return 13832966;
		// company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3856:
			return 8703;
		// info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1888:
			return 9187;
		// info_type it1, keyword k, movie_info mi, movie_keyword mk, title t
		case 3680:
			return 4309;
		// info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2976:
			return 1166;
		// info_type it1, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3744:
			return 2508;
		// info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3872:
			return 8703;
		// keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3520:
			return 13832966;
		// keyword k, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3776:
			return 2508;
		// keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3904:
			return 8703;
		// kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3968:
			return 4449;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, movie_companies mc, movie_info mi
		case 798:
			return 7;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, movie_companies mc, movie_keyword mk
		case 1310:
			return 6251157;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, movie_companies mc, title t
		case 2334:
			return 7306;
		// complete_cast cc, comp_cast_type cct1, company_name cn, info_type it1, movie_companies mc, movie_info mi
		case 814:
			return 7;
		// complete_cast cc, comp_cast_type cct1, company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 1358:
			return 6251157;
		// complete_cast cc, comp_cast_type cct1, company_name cn, kind_type kt, movie_companies mc, title t
		case 2446:
			return 5763;
		// complete_cast cc, comp_cast_type cct1, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk
		case 1806:
			return 628;
		// complete_cast cc, comp_cast_type cct1, company_name cn, movie_companies mc, movie_info mi, title t
		case 2830:
			return 6;
		// complete_cast cc, comp_cast_type cct1, company_name cn, movie_companies mc, movie_keyword mk, title t
		case 3342:
			return 785002;
		// complete_cast cc, comp_cast_type cct1, company_type ct, info_type it1, movie_companies mc, movie_info mi
		case 822:
			return 7;
		// complete_cast cc, comp_cast_type cct1, company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 1366:
			return 16526281;
		// complete_cast cc, comp_cast_type cct1, company_type ct, kind_type kt, movie_companies mc, title t
		case 2454:
			return 23883;
		// complete_cast cc, comp_cast_type cct1, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk
		case 1814:
			return 628;
		// complete_cast cc, comp_cast_type cct1, company_type ct, movie_companies mc, movie_info mi, title t
		case 2838:
			return 6;
		// complete_cast cc, comp_cast_type cct1, company_type ct, movie_companies mc, movie_keyword mk, title t
		case 3350:
			return 3350169;
		// complete_cast cc, comp_cast_type cct1, info_type it1, keyword k, movie_info mi, movie_keyword mk
		case 1638:
			return 625;
		// complete_cast cc, comp_cast_type cct1, info_type it1, kind_type kt, movie_info mi, title t
		case 2726:
			return 5;
		// complete_cast cc, comp_cast_type cct1, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1830:
			return 628;
		// complete_cast cc, comp_cast_type cct1, info_type it1, movie_companies mc, movie_info mi, title t
		case 2854:
			return 6;
		// complete_cast cc, comp_cast_type cct1, info_type it1, movie_info mi, movie_keyword mk, title t
		case 3622:
			return 615;
		// complete_cast cc, comp_cast_type cct1, keyword k, kind_type kt, movie_keyword mk, title t
		case 3270:
			return 124620;
		// complete_cast cc, comp_cast_type cct1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1862:
			return 628;
		// complete_cast cc, comp_cast_type cct1, keyword k, movie_companies mc, movie_keyword mk, title t
		case 3398:
			return 3350169;
		// complete_cast cc, comp_cast_type cct1, keyword k, movie_info mi, movie_keyword mk, title t
		case 3654:
			return 615;
		// complete_cast cc, comp_cast_type cct1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2950:
			return 6;
		// complete_cast cc, comp_cast_type cct1, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3462:
			return 3282823;
		// complete_cast cc, comp_cast_type cct1, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3718:
			return 615;
		// complete_cast cc, comp_cast_type cct1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3846:
			return 618;
		// complete_cast cc, company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi
		case 826:
			return 51;
		// complete_cast cc, company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 1370:
			return 10779189;
		// complete_cast cc, company_name cn, company_type ct, kind_type kt, movie_companies mc, title t
		case 2458:
			return 18806;
		// complete_cast cc, company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk
		case 1818:
			return 849;
		// complete_cast cc, company_name cn, company_type ct, movie_companies mc, movie_info mi, title t
		case 2842:
			return 48;
		// complete_cast cc, company_name cn, company_type ct, movie_companies mc, movie_keyword mk, title t
		case 3354:
			return 2252518;
		// complete_cast cc, company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1834:
			return 849;
		// complete_cast cc, company_name cn, info_type it1, movie_companies mc, movie_info mi, title t
		case 2858:
			return 48;
		// complete_cast cc, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1866:
			return 849;
		// complete_cast cc, company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 3402:
			return 2252518;
		// complete_cast cc, company_name cn, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2954:
			return 35;
		// complete_cast cc, company_name cn, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3466:
			return 1981899;
		// complete_cast cc, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3850:
			return 839;
		// complete_cast cc, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1842:
			return 929;
		// complete_cast cc, company_type ct, info_type it1, movie_companies mc, movie_info mi, title t
		case 2866:
			return 54;
		// complete_cast cc, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1874:
			return 929;
		// complete_cast cc, company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 3410:
			return 9161531;
		// complete_cast cc, company_type ct, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2962:
			return 37;
		// complete_cast cc, company_type ct, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3474:
			return 8508369;
		// complete_cast cc, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3858:
			return 919;
		// complete_cast cc, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1890:
			return 929;
		// complete_cast cc, info_type it1, keyword k, movie_info mi, movie_keyword mk, title t
		case 3682:
			return 731;
		// complete_cast cc, info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2978:
			return 37;
		// complete_cast cc, info_type it1, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3746:
			return 680;
		// complete_cast cc, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3874:
			return 919;
		// complete_cast cc, keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3522:
			return 8508369;
		// complete_cast cc, keyword k, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3778:
			return 680;
		// complete_cast cc, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3906:
			return 919;
		// complete_cast cc, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3970:
			return 700;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1848:
			return 7964;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, title t
		case 2872:
			return 2594;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1880:
			return 7964;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 3416:
			return 4509366;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2968:
			return 1056;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3480:
			return 3178544;
		// company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3864:
			return 7683;
		// company_name cn, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1896:
			return 7964;
		// company_name cn, info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2984:
			return 1056;
		// company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3880:
			return 7683;
		// company_name cn, keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3528:
			return 3178544;
		// company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3912:
			return 7683;
		// company_name cn, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3976:
			return 3808;
		// company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1904:
			return 9187;
		// company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2992:
			return 1166;
		// company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3888:
			return 8703;
		// company_type ct, keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3536:
			return 13832966;
		// company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3920:
			return 8703;
		// company_type ct, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3984:
			return 4449;
		// info_type it1, keyword k, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3808:
			return 2508;
		// info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3936:
			return 8703;
		// info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4000:
			return 4449;
		// keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4032:
			return 4449;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi
		case 830:
			return 7;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk
		case 1374:
			return 6251157;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, kind_type kt, movie_companies mc, title t
		case 2462:
			return 5763;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk
		case 1822:
			return 628;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, movie_companies mc, movie_info mi, title t
		case 2846:
			return 6;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, movie_companies mc, movie_keyword mk, title t
		case 3358:
			return 785002;
		// complete_cast cc, comp_cast_type cct1, company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1838:
			return 628;
		// complete_cast cc, comp_cast_type cct1, company_name cn, info_type it1, movie_companies mc, movie_info mi, title t
		case 2862:
			return 6;
		// complete_cast cc, comp_cast_type cct1, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1870:
			return 628;
		// complete_cast cc, comp_cast_type cct1, company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 3406:
			return 785002;
		// complete_cast cc, comp_cast_type cct1, company_name cn, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2958:
			return 6;
		// complete_cast cc, comp_cast_type cct1, company_name cn, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3470:
			return 760449;
		// complete_cast cc, comp_cast_type cct1, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3854:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1846:
			return 628;
		// complete_cast cc, comp_cast_type cct1, company_type ct, info_type it1, movie_companies mc, movie_info mi, title t
		case 2870:
			return 6;
		// complete_cast cc, comp_cast_type cct1, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1878:
			return 628;
		// complete_cast cc, comp_cast_type cct1, company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 3414:
			return 3350169;
		// complete_cast cc, comp_cast_type cct1, company_type ct, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2966:
			return 6;
		// complete_cast cc, comp_cast_type cct1, company_type ct, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3478:
			return 3282823;
		// complete_cast cc, comp_cast_type cct1, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3862:
			return 618;
		// complete_cast cc, comp_cast_type cct1, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1894:
			return 628;
		// complete_cast cc, comp_cast_type cct1, info_type it1, keyword k, movie_info mi, movie_keyword mk, title t
		case 3686:
			return 615;
		// complete_cast cc, comp_cast_type cct1, info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2982:
			return 6;
		// complete_cast cc, comp_cast_type cct1, info_type it1, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3750:
			return 615;
		// complete_cast cc, comp_cast_type cct1, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3878:
			return 618;
		// complete_cast cc, comp_cast_type cct1, keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3526:
			return 3282823;
		// complete_cast cc, comp_cast_type cct1, keyword k, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3782:
			return 615;
		// complete_cast cc, comp_cast_type cct1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3910:
			return 618;
		// complete_cast cc, comp_cast_type cct1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3974:
			return 618;
		// complete_cast cc, company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1850:
			return 849;
		// complete_cast cc, company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, title t
		case 2874:
			return 48;
		// complete_cast cc, company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1882:
			return 849;
		// complete_cast cc, company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 3418:
			return 2252518;
		// complete_cast cc, company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2970:
			return 35;
		// complete_cast cc, company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3482:
			return 1981899;
		// complete_cast cc, company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3866:
			return 839;
		// complete_cast cc, company_name cn, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1898:
			return 849;
		// complete_cast cc, company_name cn, info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2986:
			return 35;
		// complete_cast cc, company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3882:
			return 839;
		// complete_cast cc, company_name cn, keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3530:
			return 1981899;
		// complete_cast cc, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3914:
			return 839;
		// complete_cast cc, company_name cn, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3978:
			return 696;
		// complete_cast cc, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1906:
			return 929;
		// complete_cast cc, company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2994:
			return 37;
		// complete_cast cc, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3890:
			return 919;
		// complete_cast cc, company_type ct, keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3538:
			return 8508369;
		// complete_cast cc, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3922:
			return 919;
		// complete_cast cc, company_type ct, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3986:
			return 700;
		// complete_cast cc, info_type it1, keyword k, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3810:
			return 680;
		// complete_cast cc, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3938:
			return 919;
		// complete_cast cc, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4002:
			return 700;
		// complete_cast cc, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4034:
			return 700;
		// company_name cn, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1912:
			return 7964;
		// company_name cn, company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 3000:
			return 1056;
		// company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3896:
			return 7683;
		// company_name cn, company_type ct, keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3544:
			return 3178544;
		// company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3928:
			return 7683;
		// company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3992:
			return 3808;
		// company_name cn, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3944:
			return 7683;
		// company_name cn, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4008:
			return 3808;
		// company_name cn, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4040:
			return 3808;
		// company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3952:
			return 8703;
		// company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4016:
			return 4449;
		// company_type ct, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4048:
			return 4449;
		// info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4064:
			return 4449;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk
		case 1854:
			return 628;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, title t
		case 2878:
			return 6;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1886:
			return 628;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, keyword k, movie_companies mc, movie_keyword mk, title t
		case 3422:
			return 785002;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2974:
			return 6;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3486:
			return 760449;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3870:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_name cn, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1902:
			return 628;
		// complete_cast cc, comp_cast_type cct1, company_name cn, info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2990:
			return 6;
		// complete_cast cc, comp_cast_type cct1, company_name cn, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3886:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_name cn, keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3534:
			return 760449;
		// complete_cast cc, comp_cast_type cct1, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3918:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_name cn, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3982:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1910:
			return 628;
		// complete_cast cc, comp_cast_type cct1, company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 2998:
			return 6;
		// complete_cast cc, comp_cast_type cct1, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3894:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_type ct, keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3542:
			return 3282823;
		// complete_cast cc, comp_cast_type cct1, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3926:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_type ct, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3990:
			return 618;
		// complete_cast cc, comp_cast_type cct1, info_type it1, keyword k, kind_type kt, movie_info mi, movie_keyword mk, title t
		case 3814:
			return 615;
		// complete_cast cc, comp_cast_type cct1, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3942:
			return 618;
		// complete_cast cc, comp_cast_type cct1, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4006:
			return 618;
		// complete_cast cc, comp_cast_type cct1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4038:
			return 618;
		// complete_cast cc, company_name cn, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1914:
			return 849;
		// complete_cast cc, company_name cn, company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 3002:
			return 35;
		// complete_cast cc, company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3898:
			return 839;
		// complete_cast cc, company_name cn, company_type ct, keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3546:
			return 1981899;
		// complete_cast cc, company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3930:
			return 839;
		// complete_cast cc, company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3994:
			return 696;
		// complete_cast cc, company_name cn, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3946:
			return 839;
		// complete_cast cc, company_name cn, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4010:
			return 696;
		// complete_cast cc, company_name cn, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4042:
			return 696;
		// complete_cast cc, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3954:
			return 919;
		// complete_cast cc, company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4018:
			return 700;
		// complete_cast cc, company_type ct, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4050:
			return 700;
		// complete_cast cc, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4066:
			return 700;
		// company_name cn, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3960:
			return 7683;
		// company_name cn, company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4024:
			return 3808;
		// company_name cn, company_type ct, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4056:
			return 3808;
		// company_name cn, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4072:
			return 3808;
		// company_type ct, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4080:
			return 4449;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1918:
			return 628;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, title t
		case 3006:
			return 6;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, info_type it1, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3902:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, keyword k, kind_type kt, movie_companies mc, movie_keyword mk, title t
		case 3550:
			return 760449;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3934:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3998:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_name cn, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3950:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_name cn, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4014:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_name cn, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4046:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3958:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4022:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_type ct, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4054:
			return 618;
		// complete_cast cc, comp_cast_type cct1, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4070:
			return 618;
		// complete_cast cc, company_name cn, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3962:
			return 839;
		// complete_cast cc, company_name cn, company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4026:
			return 696;
		// complete_cast cc, company_name cn, company_type ct, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4058:
			return 696;
		// complete_cast cc, company_name cn, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4074:
			return 696;
		// complete_cast cc, company_type ct, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4082:
			return 700;
		// company_name cn, company_type ct, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4088:
			return 3808;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, info_type it1, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 3966:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, info_type it1, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4030:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4062:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_name cn, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4078:
			return 618;
		// complete_cast cc, comp_cast_type cct1, company_type ct, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4086:
			return 618;
		// complete_cast cc, company_name cn, company_type ct, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4090:
			return 696;
		// complete_cast cc, comp_cast_type cct1, company_name cn, company_type ct, info_type it1, keyword k, kind_type kt, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4094:
			return 618;
	};
}

// [aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t, ]
double
get_truth_cardinality_job_query_24(int total_relids)
{
	switch (total_relids) {
		// aka_name an
		case 2:
			return 901343;
		// char_name chn
		case 4:
			return 3140339;
		// cast_info ci
		case 8:
			return 867477;
		// company_name cn
		case 16:
			return 84843;
		// info_type it
		case 32:
			return 1;
		// keyword k
		case 64:
			return 3;
		// movie_companies mc
		case 128:
			return 2609129;
		// movie_info mi
		case 256:
			return 301247;
		// movie_keyword mk
		case 512:
			return 4523930;
		// name n
		case 1024:
			return 50011;
		// role_type rt
		case 2048:
			return 1;
		// title t
		case 4096:
			return 391666;
		// aka_name an, cast_info ci
		case 10:
			return 1806603;
		// aka_name an, name n
		case 1026:
			return 10525;
		// char_name chn, cast_info ci
		case 12:
			return 801259;
		// cast_info ci, movie_companies mc
		case 136:
			return 1548085;
		// cast_info ci, movie_info mi
		case 264:
			return 133783;
		// cast_info ci, movie_keyword mk
		case 520:
			return 4575483;
		// cast_info ci, name n
		case 1032:
			return 6554;
		// cast_info ci, role_type rt
		case 2056:
			return 276166;
		// cast_info ci, title t
		case 4104:
			return 94597;
		// company_name cn, movie_companies mc
		case 144:
			return 1153798;
		// info_type it, movie_info mi
		case 288:
			return 301243;
		// keyword k, movie_keyword mk
		case 576:
			return 9696;
		// movie_companies mc, movie_info mi
		case 384:
			return 463263;
		// movie_companies mc, movie_keyword mk
		case 640:
			return 34863638;
		// movie_companies mc, title t
		case 4224:
			return 294635;
		// movie_info mi, movie_keyword mk
		case 768:
			return 954852;
		// movie_info mi, title t
		case 4352:
			return 213397;
		// movie_keyword mk, title t
		case 4608:
			return 299534;
		// aka_name an, char_name chn, cast_info ci
		case 14:
			return 1732265;
		// aka_name an, cast_info ci, movie_companies mc
		case 138:
			return 3578955;
		// aka_name an, cast_info ci, movie_info mi
		case 266:
			return 278652;
		// aka_name an, cast_info ci, movie_keyword mk
		case 522:
			return 9479289;
		// aka_name an, cast_info ci, name n
		case 1034:
			return 8204;
		// aka_name an, cast_info ci, role_type rt
		case 2058:
			return 503508;
		// aka_name an, cast_info ci, title t
		case 4106:
			return 165248;
		// char_name chn, cast_info ci, movie_companies mc
		case 140:
			return 1405362;
		// char_name chn, cast_info ci, movie_info mi
		case 268:
			return 126773;
		// char_name chn, cast_info ci, movie_keyword mk
		case 524:
			return 4220470;
		// char_name chn, cast_info ci, name n
		case 1036:
			return 5686;
		// char_name chn, cast_info ci, role_type rt
		case 2060:
			return 255651;
		// char_name chn, cast_info ci, title t
		case 4108:
			return 87110;
		// cast_info ci, company_name cn, movie_companies mc
		case 152:
			return 671694;
		// cast_info ci, info_type it, movie_info mi
		case 296:
			return 133783;
		// cast_info ci, keyword k, movie_keyword mk
		case 584:
			return 32840;
		// cast_info ci, movie_companies mc, movie_info mi
		case 392:
			return 486818;
		// cast_info ci, movie_companies mc, movie_keyword mk
		case 648:
			return 41655338;
		// cast_info ci, movie_companies mc, name n
		case 1160:
			return 14556;
		// cast_info ci, movie_companies mc, role_type rt
		case 2184:
			return 474025;
		// cast_info ci, movie_companies mc, title t
		case 4232:
			return 178453;
		// cast_info ci, movie_info mi, movie_keyword mk
		case 776:
			return 1778365;
		// cast_info ci, movie_info mi, name n
		case 1288:
			return 1017;
		// cast_info ci, movie_info mi, role_type rt
		case 2312:
			return 39071;
		// cast_info ci, movie_info mi, title t
		case 4360:
			return 80679;
		// cast_info ci, movie_keyword mk, name n
		case 1544:
			return 41494;
		// cast_info ci, movie_keyword mk, role_type rt
		case 2568:
			return 1257179;
		// cast_info ci, movie_keyword mk, title t
		case 4616:
			return 386328;
		// cast_info ci, name n, role_type rt
		case 3080:
			return 6552;
		// cast_info ci, name n, title t
		case 5128:
			return 866;
		// cast_info ci, role_type rt, title t
		case 6152:
			return 26533;
		// company_name cn, movie_companies mc, movie_info mi
		case 400:
			return 229674;
		// company_name cn, movie_companies mc, movie_keyword mk
		case 656:
			return 12177631;
		// company_name cn, movie_companies mc, title t
		case 4240:
			return 128115;
		// info_type it, movie_companies mc, movie_info mi
		case 416:
			return 463258;
		// info_type it, movie_info mi, movie_keyword mk
		case 800:
			return 954835;
		// info_type it, movie_info mi, title t
		case 4384:
			return 213396;
		// keyword k, movie_companies mc, movie_keyword mk
		case 704:
			return 98921;
		// keyword k, movie_info mi, movie_keyword mk
		case 832:
			return 1756;
		// keyword k, movie_keyword mk, title t
		case 4672:
			return 495;
		// movie_companies mc, movie_info mi, movie_keyword mk
		case 896:
			return 16076286;
		// movie_companies mc, movie_info mi, title t
		case 4480:
			return 253960;
		// movie_companies mc, movie_keyword mk, title t
		case 4736:
			return 2116623;
		// movie_info mi, movie_keyword mk, title t
		case 4864:
			return 379338;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc
		case 142:
			return 3405373;
		// aka_name an, char_name chn, cast_info ci, movie_info mi
		case 270:
			return 270386;
		// aka_name an, char_name chn, cast_info ci, movie_keyword mk
		case 526:
			return 9022164;
		// aka_name an, char_name chn, cast_info ci, name n
		case 1038:
			return 7726;
		// aka_name an, char_name chn, cast_info ci, role_type rt
		case 2062:
			return 483319;
		// aka_name an, char_name chn, cast_info ci, title t
		case 4110:
			return 159722;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc
		case 154:
			return 1935320;
		// aka_name an, cast_info ci, info_type it, movie_info mi
		case 298:
			return 278652;
		// aka_name an, cast_info ci, keyword k, movie_keyword mk
		case 586:
			return 71465;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi
		case 394:
			return 902245;
		// aka_name an, cast_info ci, movie_companies mc, movie_keyword mk
		case 650:
			return 82545440;
		// aka_name an, cast_info ci, movie_companies mc, name n
		case 1162:
			return 19561;
		// aka_name an, cast_info ci, movie_companies mc, role_type rt
		case 2186:
			return 961173;
		// aka_name an, cast_info ci, movie_companies mc, title t
		case 4234:
			return 348904;
		// aka_name an, cast_info ci, movie_info mi, movie_keyword mk
		case 778:
			return 2863703;
		// aka_name an, cast_info ci, movie_info mi, name n
		case 1290:
			return 1474;
		// aka_name an, cast_info ci, movie_info mi, role_type rt
		case 2314:
			return 73707;
		// aka_name an, cast_info ci, movie_info mi, title t
		case 4362:
			return 166207;
		// aka_name an, cast_info ci, movie_keyword mk, name n
		case 1546:
			return 44662;
		// aka_name an, cast_info ci, movie_keyword mk, role_type rt
		case 2570:
			return 2311972;
		// aka_name an, cast_info ci, movie_keyword mk, title t
		case 4618:
			return 814807;
		// aka_name an, cast_info ci, name n, role_type rt
		case 3082:
			return 8204;
		// aka_name an, cast_info ci, name n, title t
		case 5130:
			return 797;
		// aka_name an, cast_info ci, role_type rt, title t
		case 6154:
			return 43750;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc
		case 156:
			return 620402;
		// char_name chn, cast_info ci, info_type it, movie_info mi
		case 300:
			return 126773;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk
		case 588:
			return 30828;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi
		case 396:
			return 449150;
		// char_name chn, cast_info ci, movie_companies mc, movie_keyword mk
		case 652:
			return 37745561;
		// char_name chn, cast_info ci, movie_companies mc, name n
		case 1164:
			return 12383;
		// char_name chn, cast_info ci, movie_companies mc, role_type rt
		case 2188:
			return 426705;
		// char_name chn, cast_info ci, movie_companies mc, title t
		case 4236:
			return 168110;
		// char_name chn, cast_info ci, movie_info mi, movie_keyword mk
		case 780:
			return 1672876;
		// char_name chn, cast_info ci, movie_info mi, name n
		case 1292:
			return 969;
		// char_name chn, cast_info ci, movie_info mi, role_type rt
		case 2316:
			return 37099;
		// char_name chn, cast_info ci, movie_info mi, title t
		case 4364:
			return 76892;
		// char_name chn, cast_info ci, movie_keyword mk, name n
		case 1548:
			return 36922;
		// char_name chn, cast_info ci, movie_keyword mk, role_type rt
		case 2572:
			return 1149901;
		// char_name chn, cast_info ci, movie_keyword mk, title t
		case 4620:
			return 364915;
		// char_name chn, cast_info ci, name n, role_type rt
		case 3084:
			return 5686;
		// char_name chn, cast_info ci, name n, title t
		case 5132:
			return 779;
		// char_name chn, cast_info ci, role_type rt, title t
		case 6156:
			return 24413;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi
		case 408:
			return 169320;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk
		case 664:
			return 14339311;
		// cast_info ci, company_name cn, movie_companies mc, name n
		case 1176:
			return 4943;
		// cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 2200:
			return 189554;
		// cast_info ci, company_name cn, movie_companies mc, title t
		case 4248:
			return 74425;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi
		case 424:
			return 486818;
		// cast_info ci, info_type it, movie_info mi, movie_keyword mk
		case 808:
			return 1778365;
		// cast_info ci, info_type it, movie_info mi, name n
		case 1320:
			return 1017;
		// cast_info ci, info_type it, movie_info mi, role_type rt
		case 2344:
			return 39071;
		// cast_info ci, info_type it, movie_info mi, title t
		case 4392:
			return 80679;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk
		case 712:
			return 251901;
		// cast_info ci, keyword k, movie_info mi, movie_keyword mk
		case 840:
			return 10723;
		// cast_info ci, keyword k, movie_keyword mk, name n
		case 1608:
			return 333;
		// cast_info ci, keyword k, movie_keyword mk, role_type rt
		case 2632:
			return 8251;
		// cast_info ci, keyword k, movie_keyword mk, title t
		case 4680:
			return 2625;
		// cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk
		case 904:
			return 24560169;
		// cast_info ci, movie_companies mc, movie_info mi, name n
		case 1416:
			return 5355;
		// cast_info ci, movie_companies mc, movie_info mi, role_type rt
		case 2440:
			return 150081;
		// cast_info ci, movie_companies mc, movie_info mi, title t
		case 4488:
			return 253297;
		// cast_info ci, movie_companies mc, movie_keyword mk, name n
		case 1672:
			return 443062;
		// cast_info ci, movie_companies mc, movie_keyword mk, role_type rt
		case 2696:
			return 11596658;
		// cast_info ci, movie_companies mc, movie_keyword mk, title t
		case 4744:
			return 3315613;
		// cast_info ci, movie_companies mc, name n, role_type rt
		case 3208:
			return 14547;
		// cast_info ci, movie_companies mc, name n, title t
		case 5256:
			return 1918;
		// cast_info ci, movie_companies mc, role_type rt, title t
		case 6280:
			return 54860;
		// cast_info ci, movie_info mi, movie_keyword mk, name n
		case 1800:
			return 15613;
		// cast_info ci, movie_info mi, movie_keyword mk, role_type rt
		case 2824:
			return 466959;
		// cast_info ci, movie_info mi, movie_keyword mk, title t
		case 4872:
			return 630306;
		// cast_info ci, movie_info mi, name n, role_type rt
		case 3336:
			return 1017;
		// cast_info ci, movie_info mi, name n, title t
		case 5384:
			return 619;
		// cast_info ci, movie_info mi, role_type rt, title t
		case 6408:
			return 22797;
		// cast_info ci, movie_keyword mk, name n, role_type rt
		case 3592:
			return 41448;
		// cast_info ci, movie_keyword mk, name n, title t
		case 5640:
			return 3604;
		// cast_info ci, movie_keyword mk, role_type rt, title t
		case 6664:
			return 102990;
		// cast_info ci, name n, role_type rt, title t
		case 7176:
			return 866;
		// company_name cn, info_type it, movie_companies mc, movie_info mi
		case 432:
			return 229672;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 720:
			return 33449;
		// company_name cn, movie_companies mc, movie_info mi, movie_keyword mk
		case 912:
			return 3657358;
		// company_name cn, movie_companies mc, movie_info mi, title t
		case 4496:
			return 142261;
		// company_name cn, movie_companies mc, movie_keyword mk, title t
		case 4752:
			return 565130;
		// info_type it, keyword k, movie_info mi, movie_keyword mk
		case 864:
			return 1756;
		// info_type it, movie_companies mc, movie_info mi, movie_keyword mk
		case 928:
			return 16076253;
		// info_type it, movie_companies mc, movie_info mi, title t
		case 4512:
			return 253958;
		// info_type it, movie_info mi, movie_keyword mk, title t
		case 4896:
			return 379338;
		// keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 960:
			return 33033;
		// keyword k, movie_companies mc, movie_keyword mk, title t
		case 4800:
			return 5566;
		// keyword k, movie_info mi, movie_keyword mk, title t
		case 4928:
			return 738;
		// movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 4992:
			return 5387132;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc
		case 158:
			return 1856933;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi
		case 302:
			return 270386;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_keyword mk
		case 590:
			return 68285;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi
		case 398:
			return 850140;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_keyword mk
		case 654:
			return 77305453;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, name n
		case 1166:
			return 18345;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, role_type rt
		case 2190:
			return 910376;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, title t
		case 4238:
			return 337646;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, movie_keyword mk
		case 782:
			return 2701543;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, name n
		case 1294:
			return 1452;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, role_type rt
		case 2318:
			return 71183;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, title t
		case 4366:
			return 161720;
		// aka_name an, char_name chn, cast_info ci, movie_keyword mk, name n
		case 1550:
			return 42366;
		// aka_name an, char_name chn, cast_info ci, movie_keyword mk, role_type rt
		case 2574:
			return 2187793;
		// aka_name an, char_name chn, cast_info ci, movie_keyword mk, title t
		case 4622:
			return 789874;
		// aka_name an, char_name chn, cast_info ci, name n, role_type rt
		case 3086:
			return 7726;
		// aka_name an, char_name chn, cast_info ci, name n, title t
		case 5134:
			return 779;
		// aka_name an, char_name chn, cast_info ci, role_type rt, title t
		case 6158:
			return 42278;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi
		case 410:
			return 375919;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk
		case 666:
			return 30751289;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, name n
		case 1178:
			return 8514;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 2202:
			return 505250;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, title t
		case 4250:
			return 182726;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi
		case 426:
			return 902245;
		// aka_name an, cast_info ci, info_type it, movie_info mi, movie_keyword mk
		case 810:
			return 2863703;
		// aka_name an, cast_info ci, info_type it, movie_info mi, name n
		case 1322:
			return 1474;
		// aka_name an, cast_info ci, info_type it, movie_info mi, role_type rt
		case 2346:
			return 73707;
		// aka_name an, cast_info ci, info_type it, movie_info mi, title t
		case 4394:
			return 166207;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_keyword mk
		case 714:
			return 556535;
		// aka_name an, cast_info ci, keyword k, movie_info mi, movie_keyword mk
		case 842:
			return 24006;
		// aka_name an, cast_info ci, keyword k, movie_keyword mk, name n
		case 1610:
			return 405;
		// aka_name an, cast_info ci, keyword k, movie_keyword mk, role_type rt
		case 2634:
			return 14946;
		// aka_name an, cast_info ci, keyword k, movie_keyword mk, title t
		case 4682:
			return 7336;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk
		case 906:
			return 39983704;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, name n
		case 1418:
			return 8370;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, role_type rt
		case 2442:
			return 250082;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, title t
		case 4490:
			return 490013;
		// aka_name an, cast_info ci, movie_companies mc, movie_keyword mk, name n
		case 1674:
			return 525307;
		// aka_name an, cast_info ci, movie_companies mc, movie_keyword mk, role_type rt
		case 2698:
			return 19882672;
		// aka_name an, cast_info ci, movie_companies mc, movie_keyword mk, title t
		case 4746:
			return 6182289;
		// aka_name an, cast_info ci, movie_companies mc, name n, role_type rt
		case 3210:
			return 19561;
		// aka_name an, cast_info ci, movie_companies mc, name n, title t
		case 5258:
			return 3038;
		// aka_name an, cast_info ci, movie_companies mc, role_type rt, title t
		case 6282:
			return 100657;
		// aka_name an, cast_info ci, movie_info mi, movie_keyword mk, name n
		case 1802:
			return 20214;
		// aka_name an, cast_info ci, movie_info mi, movie_keyword mk, role_type rt
		case 2826:
			return 742156;
		// aka_name an, cast_info ci, movie_info mi, movie_keyword mk, title t
		case 4874:
			return 1264274;
		// aka_name an, cast_info ci, movie_info mi, name n, role_type rt
		case 3338:
			return 1474;
		// aka_name an, cast_info ci, movie_info mi, name n, title t
		case 5386:
			return 842;
		// aka_name an, cast_info ci, movie_info mi, role_type rt, title t
		case 6410:
			return 43125;
		// aka_name an, cast_info ci, movie_keyword mk, name n, role_type rt
		case 3594:
			return 44662;
		// aka_name an, cast_info ci, movie_keyword mk, name n, title t
		case 5642:
			return 4162;
		// aka_name an, cast_info ci, movie_keyword mk, role_type rt, title t
		case 6666:
			return 209937;
		// aka_name an, cast_info ci, name n, role_type rt, title t
		case 7178:
			return 797;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi
		case 412:
			return 158671;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk
		case 668:
			return 13241355;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, name n
		case 1180:
			return 4503;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 2204:
			return 173657;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, title t
		case 4252:
			return 70264;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi
		case 428:
			return 449150;
		// char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk
		case 812:
			return 1672876;
		// char_name chn, cast_info ci, info_type it, movie_info mi, name n
		case 1324:
			return 969;
		// char_name chn, cast_info ci, info_type it, movie_info mi, role_type rt
		case 2348:
			return 37099;
		// char_name chn, cast_info ci, info_type it, movie_info mi, title t
		case 4396:
			return 76892;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk
		case 716:
			return 232340;
		// char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk
		case 844:
			return 10454;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk, name n
		case 1612:
			return 314;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk, role_type rt
		case 2636:
			return 7726;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk, title t
		case 4684:
			return 2568;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk
		case 908:
			return 22525434;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n
		case 1420:
			return 5056;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, role_type rt
		case 2444:
			return 137706;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, title t
		case 4492:
			return 242591;
		// char_name chn, cast_info ci, movie_companies mc, movie_keyword mk, name n
		case 1676:
			return 392357;
		// char_name chn, cast_info ci, movie_companies mc, movie_keyword mk, role_type rt
		case 2700:
			return 10291611;
		// char_name chn, cast_info ci, movie_companies mc, movie_keyword mk, title t
		case 4748:
			return 3231763;
		// char_name chn, cast_info ci, movie_companies mc, name n, role_type rt
		case 3212:
			return 12383;
		// char_name chn, cast_info ci, movie_companies mc, name n, title t
		case 5260:
			return 1816;
		// char_name chn, cast_info ci, movie_companies mc, role_type rt, title t
		case 6284:
			return 51779;
		// char_name chn, cast_info ci, movie_info mi, movie_keyword mk, name n
		case 1804:
			return 14938;
		// char_name chn, cast_info ci, movie_info mi, movie_keyword mk, role_type rt
		case 2828:
			return 432502;
		// char_name chn, cast_info ci, movie_info mi, movie_keyword mk, title t
		case 4876:
			return 605463;
		// char_name chn, cast_info ci, movie_info mi, name n, role_type rt
		case 3340:
			return 969;
		// char_name chn, cast_info ci, movie_info mi, name n, title t
		case 5388:
			return 601;
		// char_name chn, cast_info ci, movie_info mi, role_type rt, title t
		case 6412:
			return 21824;
		// char_name chn, cast_info ci, movie_keyword mk, name n, role_type rt
		case 3596:
			return 36922;
		// char_name chn, cast_info ci, movie_keyword mk, name n, title t
		case 5644:
			return 3436;
		// char_name chn, cast_info ci, movie_keyword mk, role_type rt, title t
		case 6668:
			return 97595;
		// char_name chn, cast_info ci, name n, role_type rt, title t
		case 7180:
			return 779;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi
		case 440:
			return 169320;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 728:
			return 103191;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk
		case 920:
			return 6976697;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n
		case 1432:
			return 1794;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt
		case 2456:
			return 48037;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, title t
		case 4504:
			return 96048;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n
		case 1688:
			return 133278;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, role_type rt
		case 2712:
			return 3756840;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, title t
		case 4760:
			return 1011484;
		// cast_info ci, company_name cn, movie_companies mc, name n, role_type rt
		case 3224:
			return 4938;
		// cast_info ci, company_name cn, movie_companies mc, name n, title t
		case 5272:
			return 729;
		// cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 6296:
			return 20539;
		// cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk
		case 872:
			return 10723;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk
		case 936:
			return 24560169;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, name n
		case 1448:
			return 5355;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 2472:
			return 150081;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, title t
		case 4520:
			return 253297;
		// cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n
		case 1832:
			return 15613;
		// cast_info ci, info_type it, movie_info mi, movie_keyword mk, role_type rt
		case 2856:
			return 466959;
		// cast_info ci, info_type it, movie_info mi, movie_keyword mk, title t
		case 4904:
			return 630306;
		// cast_info ci, info_type it, movie_info mi, name n, role_type rt
		case 3368:
			return 1017;
		// cast_info ci, info_type it, movie_info mi, name n, title t
		case 5416:
			return 619;
		// cast_info ci, info_type it, movie_info mi, role_type rt, title t
		case 6440:
			return 22797;
		// cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 968:
			return 105824;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n
		case 1736:
			return 3141;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk, role_type rt
		case 2760:
			return 64167;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk, title t
		case 4808:
			return 15373;
		// cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n
		case 1864:
			return 118;
		// cast_info ci, keyword k, movie_info mi, movie_keyword mk, role_type rt
		case 2888:
			return 2449;
		// cast_info ci, keyword k, movie_info mi, movie_keyword mk, title t
		case 4936:
			return 4439;
		// cast_info ci, keyword k, movie_keyword mk, name n, role_type rt
		case 3656:
			return 331;
		// cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 5704:
			return 30;
		// cast_info ci, keyword k, movie_keyword mk, role_type rt, title t
		case 6728:
			return 603;
		// cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1928:
			return 271486;
		// cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 2952:
			return 6725914;
		// cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5000:
			return 8483764;
		// cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt
		case 3464:
			return 5355;
		// cast_info ci, movie_companies mc, movie_info mi, name n, title t
		case 5512:
			return 2850;
		// cast_info ci, movie_companies mc, movie_info mi, role_type rt, title t
		case 6536:
			return 76663;
		// cast_info ci, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3720:
			return 442750;
		// cast_info ci, movie_companies mc, movie_keyword mk, name n, title t
		case 5768:
			return 41491;
		// cast_info ci, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6792:
			return 857647;
		// cast_info ci, movie_companies mc, name n, role_type rt, title t
		case 7304:
			return 1918;
		// cast_info ci, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3848:
			return 15613;
		// cast_info ci, movie_info mi, movie_keyword mk, name n, title t
		case 5896:
			return 5713;
		// cast_info ci, movie_info mi, movie_keyword mk, role_type rt, title t
		case 6920:
			return 160680;
		// cast_info ci, movie_info mi, name n, role_type rt, title t
		case 7432:
			return 619;
		// cast_info ci, movie_keyword mk, name n, role_type rt, title t
		case 7688:
			return 3604;
		// company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk
		case 944:
			return 3657326;
		// company_name cn, info_type it, movie_companies mc, movie_info mi, title t
		case 4528:
			return 142261;
		// company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 976:
			return 7931;
		// company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 4816:
			return 1576;
		// company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5008:
			return 1261206;
		// info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 992:
			return 33033;
		// info_type it, keyword k, movie_info mi, movie_keyword mk, title t
		case 4960:
			return 738;
		// info_type it, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5024:
			return 5387132;
		// keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5056:
			return 13560;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi
		case 414:
			return 359408;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk
		case 670:
			return 29149266;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, name n
		case 1182:
			return 8144;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, role_type rt
		case 2206:
			return 483198;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, title t
		case 4254:
			return 176284;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi
		case 430:
			return 850140;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk
		case 814:
			return 2701543;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, name n
		case 1326:
			return 1452;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, role_type rt
		case 2350:
			return 71183;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, title t
		case 4398:
			return 161720;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk
		case 718:
			return 526966;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk
		case 846:
			return 23677;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n
		case 1614:
			return 403;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_keyword mk, role_type rt
		case 2638:
			return 14175;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_keyword mk, title t
		case 4686:
			return 7289;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk
		case 910:
			return 36761510;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n
		case 1422:
			return 8226;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, role_type rt
		case 2446:
			return 230009;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, title t
		case 4494:
			return 477002;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_keyword mk, name n
		case 1678:
			return 497547;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_keyword mk, role_type rt
		case 2702:
			return 18177021;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_keyword mk, title t
		case 4750:
			return 6077073;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, name n, role_type rt
		case 3214:
			return 18345;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, name n, title t
		case 5262:
			return 2976;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, role_type rt, title t
		case 6286:
			return 98058;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, movie_keyword mk, name n
		case 1806:
			return 19771;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, movie_keyword mk, role_type rt
		case 2830:
			return 670866;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, movie_keyword mk, title t
		case 4878:
			return 1233179;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, name n, role_type rt
		case 3342:
			return 1452;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, name n, title t
		case 5390:
			return 835;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, role_type rt, title t
		case 6414:
			return 42003;
		// aka_name an, char_name chn, cast_info ci, movie_keyword mk, name n, role_type rt
		case 3598:
			return 42366;
		// aka_name an, char_name chn, cast_info ci, movie_keyword mk, name n, title t
		case 5646:
			return 3996;
		// aka_name an, char_name chn, cast_info ci, movie_keyword mk, role_type rt, title t
		case 6670:
			return 203900;
		// aka_name an, char_name chn, cast_info ci, name n, role_type rt, title t
		case 7182:
			return 779;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi
		case 442:
			return 375919;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 730:
			return 234456;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk
		case 922:
			return 11183622;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n
		case 1434:
			return 3027;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt
		case 2458:
			return 101999;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, title t
		case 4506:
			return 223464;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n
		case 1690:
			return 153824;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, role_type rt
		case 2714:
			return 7111192;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, title t
		case 4762:
			return 2271164;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt
		case 3226:
			return 8514;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, name n, title t
		case 5274:
			return 1249;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 6298:
			return 50789;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk
		case 874:
			return 24006;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk
		case 938:
			return 39983704;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n
		case 1450:
			return 8370;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 2474:
			return 250082;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, title t
		case 4522:
			return 490013;
		// aka_name an, cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n
		case 1834:
			return 20214;
		// aka_name an, cast_info ci, info_type it, movie_info mi, movie_keyword mk, role_type rt
		case 2858:
			return 742156;
		// aka_name an, cast_info ci, info_type it, movie_info mi, movie_keyword mk, title t
		case 4906:
			return 1264274;
		// aka_name an, cast_info ci, info_type it, movie_info mi, name n, role_type rt
		case 3370:
			return 1474;
		// aka_name an, cast_info ci, info_type it, movie_info mi, name n, title t
		case 5418:
			return 842;
		// aka_name an, cast_info ci, info_type it, movie_info mi, role_type rt, title t
		case 6442:
			return 43125;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 970:
			return 214478;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n
		case 1738:
			return 4150;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, role_type rt
		case 2762:
			return 121605;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, title t
		case 4810:
			return 38060;
		// aka_name an, cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n
		case 1866:
			return 176;
		// aka_name an, cast_info ci, keyword k, movie_info mi, movie_keyword mk, role_type rt
		case 2890:
			return 4455;
		// aka_name an, cast_info ci, keyword k, movie_info mi, movie_keyword mk, title t
		case 4938:
			return 12761;
		// aka_name an, cast_info ci, keyword k, movie_keyword mk, name n, role_type rt
		case 3658:
			return 405;
		// aka_name an, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 5706:
			return 39;
		// aka_name an, cast_info ci, keyword k, movie_keyword mk, role_type rt, title t
		case 6730:
			return 1387;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1930:
			return 424620;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 2954:
			return 10474115;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5002:
			return 14924180;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt
		case 3466:
			return 8370;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, name n, title t
		case 5514:
			return 4270;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, role_type rt, title t
		case 6538:
			return 130612;
		// aka_name an, cast_info ci, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3722:
			return 525307;
		// aka_name an, cast_info ci, movie_companies mc, movie_keyword mk, name n, title t
		case 5770:
			return 50955;
		// aka_name an, cast_info ci, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6794:
			return 1419987;
		// aka_name an, cast_info ci, movie_companies mc, name n, role_type rt, title t
		case 7306:
			return 3038;
		// aka_name an, cast_info ci, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3850:
			return 20214;
		// aka_name an, cast_info ci, movie_info mi, movie_keyword mk, name n, title t
		case 5898:
			return 6612;
		// aka_name an, cast_info ci, movie_info mi, movie_keyword mk, role_type rt, title t
		case 6922:
			return 288294;
		// aka_name an, cast_info ci, movie_info mi, name n, role_type rt, title t
		case 7434:
			return 842;
		// aka_name an, cast_info ci, movie_keyword mk, name n, role_type rt, title t
		case 7690:
			return 4162;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi
		case 444:
			return 158671;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 732:
			return 95646;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk
		case 924:
			return 6567873;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n
		case 1436:
			return 1701;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt
		case 2460:
			return 44960;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, title t
		case 4508:
			return 91357;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n
		case 1692:
			return 122511;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, role_type rt
		case 2716:
			return 3415536;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, title t
		case 4764:
			return 978115;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt
		case 3228:
			return 4503;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, title t
		case 5276:
			return 692;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 6300:
			return 19505;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk
		case 876:
			return 10454;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk
		case 940:
			return 22525434;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n
		case 1452:
			return 5056;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 2476:
			return 137706;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, title t
		case 4524:
			return 242591;
		// char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n
		case 1836:
			return 14938;
		// char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk, role_type rt
		case 2860:
			return 432502;
		// char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk, title t
		case 4908:
			return 605463;
		// char_name chn, cast_info ci, info_type it, movie_info mi, name n, role_type rt
		case 3372:
			return 969;
		// char_name chn, cast_info ci, info_type it, movie_info mi, name n, title t
		case 5420:
			return 601;
		// char_name chn, cast_info ci, info_type it, movie_info mi, role_type rt, title t
		case 6444:
			return 21824;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 972:
			return 100039;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n
		case 1740:
			return 2959;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, role_type rt
		case 2764:
			return 58829;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, title t
		case 4812:
			return 15119;
		// char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n
		case 1868:
			return 109;
		// char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk, role_type rt
		case 2892:
			return 2368;
		// char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk, title t
		case 4940:
			return 4373;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, role_type rt
		case 3660:
			return 314;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 5708:
			return 29;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk, role_type rt, title t
		case 6732:
			return 588;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1932:
			return 259372;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 2956:
			return 6029155;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5004:
			return 8330448;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt
		case 3468:
			return 5056;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n, title t
		case 5516:
			return 2800;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, role_type rt, title t
		case 6540:
			return 73577;
		// char_name chn, cast_info ci, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3724:
			return 392357;
		// char_name chn, cast_info ci, movie_companies mc, movie_keyword mk, name n, title t
		case 5772:
			return 40944;
		// char_name chn, cast_info ci, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6796:
			return 837239;
		// char_name chn, cast_info ci, movie_companies mc, name n, role_type rt, title t
		case 7308:
			return 1816;
		// char_name chn, cast_info ci, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3852:
			return 14938;
		// char_name chn, cast_info ci, movie_info mi, movie_keyword mk, name n, title t
		case 5900:
			return 5540;
		// char_name chn, cast_info ci, movie_info mi, movie_keyword mk, role_type rt, title t
		case 6924:
			return 154796;
		// char_name chn, cast_info ci, movie_info mi, name n, role_type rt, title t
		case 7436:
			return 601;
		// char_name chn, cast_info ci, movie_keyword mk, name n, role_type rt, title t
		case 7692:
			return 3436;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk
		case 952:
			return 6976697;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n
		case 1464:
			return 1794;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 2488:
			return 48037;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, title t
		case 4536:
			return 96048;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 984:
			return 39964;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n
		case 1752:
			return 1174;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, role_type rt
		case 2776:
			return 25112;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 4824:
			return 7316;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1944:
			return 64993;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 2968:
			return 1729781;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5016:
			return 2165529;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt
		case 3480:
			return 1794;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, title t
		case 5528:
			return 958;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt, title t
		case 6552:
			return 26752;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3736:
			return 133058;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n, title t
		case 5784:
			return 10834;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6808:
			return 250949;
		// cast_info ci, company_name cn, movie_companies mc, name n, role_type rt, title t
		case 7320:
			return 729;
		// cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1000:
			return 105824;
		// cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n
		case 1896:
			return 118;
		// cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, role_type rt
		case 2920:
			return 2449;
		// cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, title t
		case 4968:
			return 4439;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1960:
			return 271486;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 2984:
			return 6725914;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5032:
			return 8483764;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 3496:
			return 5355;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 5544:
			return 2850;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 6568:
			return 76663;
		// cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3880:
			return 15613;
		// cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n, title t
		case 5928:
			return 5713;
		// cast_info ci, info_type it, movie_info mi, movie_keyword mk, role_type rt, title t
		case 6952:
			return 160680;
		// cast_info ci, info_type it, movie_info mi, name n, role_type rt, title t
		case 7464:
			return 619;
		// cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1992:
			return 1261;
		// cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3016:
			return 26271;
		// cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5064:
			return 36400;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3784:
			return 3127;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n, title t
		case 5832:
			return 183;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6856:
			return 3513;
		// cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3912:
			return 118;
		// cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n, title t
		case 5960:
			return 37;
		// cast_info ci, keyword k, movie_info mi, movie_keyword mk, role_type rt, title t
		case 6984:
			return 984;
		// cast_info ci, keyword k, movie_keyword mk, name n, role_type rt, title t
		case 7752:
			return 30;
		// cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3976:
			return 271486;
		// cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6024:
			return 102065;
		// cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7048:
			return 2019537;
		// cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7560:
			return 2850;
		// cast_info ci, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7816:
			return 41491;
		// cast_info ci, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 7944:
			return 5713;
		// company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1008:
			return 7931;
		// company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5040:
			return 1261206;
		// company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5072:
			return 3406;
		// info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5088:
			return 13560;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi
		case 446:
			return 359408;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk
		case 734:
			return 222259;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk
		case 926:
			return 10508095;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n
		case 1438:
			return 2963;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt
		case 2462:
			return 96676;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, title t
		case 4510:
			return 216167;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n
		case 1694:
			return 146873;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, role_type rt
		case 2718:
			return 6626030;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, title t
		case 4766:
			return 2231402;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt
		case 3230:
			return 8144;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, title t
		case 5278:
			return 1224;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, role_type rt, title t
		case 6302:
			return 49319;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk
		case 878:
			return 23677;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk
		case 942:
			return 36761510;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n
		case 1454:
			return 8226;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 2478:
			return 230009;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, title t
		case 4526:
			return 477002;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n
		case 1838:
			return 19771;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk, role_type rt
		case 2862:
			return 670866;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk, title t
		case 4910:
			return 1233179;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, name n, role_type rt
		case 3374:
			return 1452;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, name n, title t
		case 5422:
			return 835;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, role_type rt, title t
		case 6446:
			return 42003;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 974:
			return 206731;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n
		case 1742:
			return 4118;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, role_type rt
		case 2766:
			return 113324;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, title t
		case 4814:
			return 37715;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n
		case 1870:
			return 175;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk, role_type rt
		case 2894:
			return 4355;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk, title t
		case 4942:
			return 12691;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, role_type rt
		case 3662:
			return 403;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 5710:
			return 38;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_keyword mk, role_type rt, title t
		case 6734:
			return 1380;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1934:
			return 419374;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 2958:
			return 8928376;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5006:
			return 14709721;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt
		case 3470:
			return 8226;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n, title t
		case 5518:
			return 4227;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, role_type rt, title t
		case 6542:
			return 128032;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3726:
			return 497547;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_keyword mk, name n, title t
		case 5774:
			return 50387;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6798:
			return 1404380;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, name n, role_type rt, title t
		case 7310:
			return 2976;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3854:
			return 19771;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, movie_keyword mk, name n, title t
		case 5902:
			return 6436;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, movie_keyword mk, role_type rt, title t
		case 6926:
			return 281658;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, name n, role_type rt, title t
		case 7438:
			return 835;
		// aka_name an, char_name chn, cast_info ci, movie_keyword mk, name n, role_type rt, title t
		case 7694:
			return 3996;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk
		case 954:
			return 11183622;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n
		case 1466:
			return 3027;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 2490:
			return 101999;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, title t
		case 4538:
			return 223464;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 986:
			return 84141;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n
		case 1754:
			return 1411;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, role_type rt
		case 2778:
			return 50166;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 4826:
			return 21111;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1946:
			return 95465;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 2970:
			return 2686779;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5018:
			return 4333408;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt
		case 3482:
			return 3027;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, title t
		case 5530:
			return 1664;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt, title t
		case 6554:
			return 60230;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3738:
			return 153824;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n, title t
		case 5786:
			return 12702;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6810:
			return 539588;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt, title t
		case 7322:
			return 1249;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1002:
			return 214478;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n
		case 1898:
			return 176;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, role_type rt
		case 2922:
			return 4455;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, title t
		case 4970:
			return 12761;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1962:
			return 424620;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 2986:
			return 10474115;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5034:
			return 14924180;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 3498:
			return 8370;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 5546:
			return 4270;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 6570:
			return 130612;
		// aka_name an, cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3882:
			return 20214;
		// aka_name an, cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n, title t
		case 5930:
			return 6612;
		// aka_name an, cast_info ci, info_type it, movie_info mi, movie_keyword mk, role_type rt, title t
		case 6954:
			return 288294;
		// aka_name an, cast_info ci, info_type it, movie_info mi, name n, role_type rt, title t
		case 7466:
			return 842;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1994:
			return 2124;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3018:
			return 44811;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5066:
			return 79029;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3786:
			return 4150;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n, title t
		case 5834:
			return 347;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6858:
			return 7449;
		// aka_name an, cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3914:
			return 176;
		// aka_name an, cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n, title t
		case 5962:
			return 66;
		// aka_name an, cast_info ci, keyword k, movie_info mi, movie_keyword mk, role_type rt, title t
		case 6986:
			return 2351;
		// aka_name an, cast_info ci, keyword k, movie_keyword mk, name n, role_type rt, title t
		case 7754:
			return 39;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3978:
			return 424620;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6026:
			return 123486;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7050:
			return 2951209;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7562:
			return 4270;
		// aka_name an, cast_info ci, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7818:
			return 50955;
		// aka_name an, cast_info ci, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 7946:
			return 6612;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk
		case 956:
			return 6567873;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n
		case 1468:
			return 1701;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 2492:
			return 44960;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, title t
		case 4540:
			return 91357;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 988:
			return 38287;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n
		case 1756:
			return 1111;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, role_type rt
		case 2780:
			return 23063;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 4828:
			return 7195;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1948:
			return 61996;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 2972:
			return 1588657;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5020:
			return 2118813;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt
		case 3484:
			return 1701;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, title t
		case 5532:
			return 925;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt, title t
		case 6556:
			return 25638;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3740:
			return 122511;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n, title t
		case 5788:
			return 10440;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6812:
			return 242816;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt, title t
		case 7324:
			return 692;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1004:
			return 100039;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n
		case 1900:
			return 109;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, role_type rt
		case 2924:
			return 2368;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, title t
		case 4972:
			return 4373;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1964:
			return 259372;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 2988:
			return 6029155;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5036:
			return 8330448;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 3500:
			return 5056;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 5548:
			return 2800;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 6572:
			return 73577;
		// char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3884:
			return 14938;
		// char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n, title t
		case 5932:
			return 5540;
		// char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk, role_type rt, title t
		case 6956:
			return 154796;
		// char_name chn, cast_info ci, info_type it, movie_info mi, name n, role_type rt, title t
		case 7468:
			return 601;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1996:
			return 1178;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3020:
			return 24569;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5068:
			return 35993;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3788:
			return 2959;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n, title t
		case 5836:
			return 180;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6860:
			return 3468;
		// char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3916:
			return 109;
		// char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n, title t
		case 5964:
			return 36;
		// char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk, role_type rt, title t
		case 6988:
			return 969;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, role_type rt, title t
		case 7756:
			return 29;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3980:
			return 259372;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6028:
			return 101453;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7052:
			return 1984921;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7564:
			return 2800;
		// char_name chn, cast_info ci, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7820:
			return 40944;
		// char_name chn, cast_info ci, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 7948:
			return 5540;
		// cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1016:
			return 39964;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1976:
			return 64993;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3000:
			return 1729781;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5048:
			return 2165529;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 3512:
			return 1794;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 5560:
			return 958;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 6584:
			return 26752;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 2008:
			return 505;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3032:
			return 9328;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5080:
			return 13758;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3800:
			return 1164;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, title t
		case 5848:
			return 109;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6872:
			return 1608;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3992:
			return 64993;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6040:
			return 20257;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7064:
			return 492003;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7576:
			return 958;
		// cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7832:
			return 10834;
		// cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 2024:
			return 1261;
		// cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3048:
			return 26271;
		// cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5096:
			return 36400;
		// cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3944:
			return 118;
		// cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n, title t
		case 5992:
			return 37;
		// cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7016:
			return 984;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4008:
			return 271486;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6056:
			return 102065;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7080:
			return 2019537;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7592:
			return 2850;
		// cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 7976:
			return 5713;
		// cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4040:
			return 1261;
		// cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6088:
			return 303;
		// cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7112:
			return 7787;
		// cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7880:
			return 183;
		// cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8008:
			return 37;
		// cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8072:
			return 102065;
		// company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5104:
			return 3406;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk
		case 958:
			return 10508095;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n
		case 1470:
			return 2963;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt
		case 2494:
			return 96676;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, title t
		case 4542:
			return 216167;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 990:
			return 81885;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n
		case 1758:
			return 1402;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, role_type rt
		case 2782:
			return 46808;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, title t
		case 4830:
			return 20986;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1950:
			return 94288;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 2974:
			return 2373854;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5022:
			return 4270867;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt
		case 3486:
			return 2963;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, title t
		case 5534:
			return 1634;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, role_type rt, title t
		case 6558:
			return 58691;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3742:
			return 146873;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n, title t
		case 5790:
			return 12282;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6814:
			return 530997;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, name n, role_type rt, title t
		case 7326:
			return 1224;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1006:
			return 206731;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n
		case 1902:
			return 175;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, role_type rt
		case 2926:
			return 4355;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, title t
		case 4974:
			return 12691;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1966:
			return 419374;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 2990:
			return 8928376;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5038:
			return 14709721;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 3502:
			return 8226;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 5550:
			return 4227;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 6574:
			return 128032;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3886:
			return 19771;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n, title t
		case 5934:
			return 6436;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk, role_type rt, title t
		case 6958:
			return 281658;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, name n, role_type rt, title t
		case 7470:
			return 835;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1998:
			return 2121;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3022:
			return 42484;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5070:
			return 78291;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3790:
			return 4118;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n, title t
		case 5838:
			return 344;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6862:
			return 7428;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3918:
			return 175;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n, title t
		case 5966:
			return 65;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk, role_type rt, title t
		case 6990:
			return 2344;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, role_type rt, title t
		case 7758:
			return 38;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3982:
			return 419374;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6030:
			return 122848;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7054:
			return 2930141;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7566:
			return 4227;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7822:
			return 50387;
		// aka_name an, char_name chn, cast_info ci, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 7950:
			return 6436;
		// aka_name an, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1018:
			return 84141;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1978:
			return 95465;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3002:
			return 2686779;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5050:
			return 4333408;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 3514:
			return 3027;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 5562:
			return 1664;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 6586:
			return 60230;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 2010:
			return 709;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3034:
			return 16551;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5082:
			return 36786;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3802:
			return 1411;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, title t
		case 5850:
			return 127;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6874:
			return 4058;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3994:
			return 95465;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6042:
			return 28092;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7066:
			return 867029;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7578:
			return 1664;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7834:
			return 12702;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 2026:
			return 2124;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3050:
			return 44811;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5098:
			return 79029;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3946:
			return 176;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n, title t
		case 5994:
			return 66;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7018:
			return 2351;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4010:
			return 424620;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6058:
			return 123486;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7082:
			return 2951209;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7594:
			return 4270;
		// aka_name an, cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 7978:
			return 6612;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4042:
			return 2124;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6090:
			return 895;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7114:
			return 14511;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7882:
			return 347;
		// aka_name an, cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8010:
			return 66;
		// aka_name an, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8074:
			return 123486;
		// char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1020:
			return 38287;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1980:
			return 61996;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3004:
			return 1588657;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5052:
			return 2118813;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 3516:
			return 1701;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 5564:
			return 925;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 6588:
			return 25638;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 2012:
			return 475;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3036:
			return 8815;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5084:
			return 13608;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3804:
			return 1111;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, title t
		case 5852:
			return 107;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6876:
			return 1578;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3996:
			return 61996;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6044:
			return 19793;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7068:
			return 480610;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7580:
			return 925;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7836:
			return 10440;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 2028:
			return 1178;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3052:
			return 24569;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5100:
			return 35993;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3948:
			return 109;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n, title t
		case 5996:
			return 36;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7020:
			return 969;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4012:
			return 259372;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6060:
			return 101453;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7084:
			return 1984921;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7596:
			return 2800;
		// char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 7980:
			return 5540;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4044:
			return 1178;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6092:
			return 300;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7116:
			return 7742;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7884:
			return 180;
		// char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8012:
			return 36;
		// char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8076:
			return 101453;
		// cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 2040:
			return 505;
		// cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3064:
			return 9328;
		// cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5112:
			return 13758;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4024:
			return 64993;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6072:
			return 20257;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7096:
			return 492003;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7608:
			return 958;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4056:
			return 505;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6104:
			return 143;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7128:
			return 2778;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7896:
			return 109;
		// cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8088:
			return 20257;
		// cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4072:
			return 1261;
		// cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6120:
			return 303;
		// cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7144:
			return 7787;
		// cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8040:
			return 37;
		// cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8104:
			return 102065;
		// cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8136:
			return 303;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk
		case 1022:
			return 81885;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 1982:
			return 94288;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3006:
			return 2373854;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5054:
			return 4270867;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt
		case 3518:
			return 2963;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, title t
		case 5566:
			return 1634;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, role_type rt, title t
		case 6590:
			return 58691;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 2014:
			return 707;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3038:
			return 15868;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5086:
			return 36578;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt
		case 3806:
			return 1402;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, title t
		case 5854:
			return 125;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, role_type rt, title t
		case 6878:
			return 4044;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3998:
			return 94288;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6046:
			return 27602;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7070:
			return 855447;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7582:
			return 1634;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7838:
			return 12282;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 2030:
			return 2121;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3054:
			return 42484;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5102:
			return 78291;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt
		case 3950:
			return 175;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n, title t
		case 5998:
			return 65;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7022:
			return 2344;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4014:
			return 419374;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6062:
			return 122848;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7086:
			return 2930141;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7598:
			return 4227;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 7982:
			return 6436;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4046:
			return 2121;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6094:
			return 892;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7118:
			return 14490;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7886:
			return 344;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8014:
			return 65;
		// aka_name an, char_name chn, cast_info ci, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8078:
			return 122848;
		// aka_name an, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 2042:
			return 709;
		// aka_name an, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3066:
			return 16551;
		// aka_name an, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5114:
			return 36786;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4026:
			return 95465;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6074:
			return 28092;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7098:
			return 867029;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7610:
			return 1664;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4058:
			return 709;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6106:
			return 277;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7130:
			return 6532;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7898:
			return 127;
		// aka_name an, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8090:
			return 28092;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4074:
			return 2124;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6122:
			return 895;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7146:
			return 14511;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8042:
			return 66;
		// aka_name an, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8106:
			return 123486;
		// aka_name an, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8138:
			return 895;
		// char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 2044:
			return 475;
		// char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3068:
			return 8815;
		// char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5116:
			return 13608;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4028:
			return 61996;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6076:
			return 19793;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7100:
			return 480610;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7612:
			return 925;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4060:
			return 475;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6108:
			return 141;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7132:
			return 2748;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7900:
			return 107;
		// char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8092:
			return 19793;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4076:
			return 1178;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6124:
			return 300;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7148:
			return 7742;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8044:
			return 36;
		// char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8108:
			return 101453;
		// char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8140:
			return 300;
		// cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4088:
			return 505;
		// cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6136:
			return 143;
		// cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7160:
			return 2778;
		// cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8120:
			return 20257;
		// cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8152:
			return 143;
		// cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8168:
			return 303;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n
		case 2046:
			return 707;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt
		case 3070:
			return 15868;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, title t
		case 5118:
			return 36578;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4030:
			return 94288;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6078:
			return 27602;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7102:
			return 855447;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, name n, role_type rt, title t
		case 7614:
			return 1634;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4062:
			return 707;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6110:
			return 275;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7134:
			return 6518;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_keyword mk, name n, role_type rt, title t
		case 7902:
			return 125;
		// aka_name an, char_name chn, cast_info ci, company_name cn, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8094:
			return 27602;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4078:
			return 2121;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6126:
			return 892;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7150:
			return 14490;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8046:
			return 65;
		// aka_name an, char_name chn, cast_info ci, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8110:
			return 122848;
		// aka_name an, char_name chn, cast_info ci, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8142:
			return 892;
		// aka_name an, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4090:
			return 709;
		// aka_name an, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6138:
			return 277;
		// aka_name an, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7162:
			return 6532;
		// aka_name an, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8122:
			return 28092;
		// aka_name an, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8154:
			return 277;
		// aka_name an, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8170:
			return 895;
		// char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4092:
			return 475;
		// char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6140:
			return 141;
		// char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7164:
			return 2748;
		// char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8124:
			return 19793;
		// char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8156:
			return 141;
		// char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8172:
			return 300;
		// cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8184:
			return 143;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt
		case 4094:
			return 707;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, title t
		case 6142:
			return 275;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, role_type rt, title t
		case 7166:
			return 6518;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8126:
			return 27602;
		// aka_name an, char_name chn, cast_info ci, company_name cn, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8158:
			return 275;
		// aka_name an, char_name chn, cast_info ci, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8174:
			return 892;
		// aka_name an, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8186:
			return 277;
		// char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8188:
			return 141;
		// aka_name an, char_name chn, cast_info ci, company_name cn, info_type it, keyword k, movie_companies mc, movie_info mi, movie_keyword mk, name n, role_type rt, title t
		case 8190:
			return 275;
	};
}

// [cast_info ci, info_type it1, info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n, title t, ]
double
get_truth_cardinality_job_query_25(int total_relids)
{
	switch (total_relids) {
		// cast_info ci
		case 2:
			return 1244716;
		// info_type it1
		case 4:
			return 1;
		// info_type it2
		case 8:
			return 1;
		// keyword k
		case 16:
			return 5;
		// movie_info mi
		case 32:
			return 30801;
		// movie_info_idx mi_idx
		case 64:
			return 1380035;
		// movie_keyword mk
		case 128:
			return 4523930;
		// name n
		case 256:
			return 1739579;
		// title t
		case 512:
			return 2528312;
		// cast_info ci, movie_info mi
		case 34:
			return 16172;
		// cast_info ci, movie_info_idx mi_idx
		case 66:
			return 1000868;
		// cast_info ci, movie_keyword mk
		case 130:
			return 2619220;
		// cast_info ci, name n
		case 258:
			return 558518;
		// cast_info ci, title t
		case 514:
			return 1244716;
		// info_type it1, movie_info mi
		case 36:
			return 30413;
		// info_type it2, movie_info_idx mi_idx
		case 72:
			return 459925;
		// keyword k, movie_keyword mk
		case 144:
			return 62096;
		// movie_info mi, movie_info_idx mi_idx
		case 96:
			return 50629;
		// movie_info mi, movie_keyword mk
		case 160:
			return 378072;
		// movie_info mi, title t
		case 544:
			return 30801;
		// movie_info_idx mi_idx, movie_keyword mk
		case 192:
			return 10424626;
		// movie_info_idx mi_idx, title t
		case 576:
			return 1380035;
		// movie_keyword mk, title t
		case 640:
			return 4523930;
		// cast_info ci, info_type it1, movie_info mi
		case 38:
			return 15897;
		// cast_info ci, info_type it2, movie_info_idx mi_idx
		case 74:
			return 333558;
		// cast_info ci, keyword k, movie_keyword mk
		case 146:
			return 33626;
		// cast_info ci, movie_info mi, movie_info_idx mi_idx
		case 98:
			return 26785;
		// cast_info ci, movie_info mi, movie_keyword mk
		case 162:
			return 243528;
		// cast_info ci, movie_info mi, name n
		case 290:
			return 8471;
		// cast_info ci, movie_info mi, title t
		case 546:
			return 16172;
		// cast_info ci, movie_info_idx mi_idx, movie_keyword mk
		case 194:
			return 6806711;
		// cast_info ci, movie_info_idx mi_idx, name n
		case 322:
			return 501122;
		// cast_info ci, movie_info_idx mi_idx, title t
		case 578:
			return 1000868;
		// cast_info ci, movie_keyword mk, name n
		case 386:
			return 1436455;
		// cast_info ci, movie_keyword mk, title t
		case 642:
			return 2619220;
		// cast_info ci, name n, title t
		case 770:
			return 558518;
		// info_type it1, movie_info mi, movie_info_idx mi_idx
		case 100:
			return 49452;
		// info_type it1, movie_info mi, movie_keyword mk
		case 164:
			return 338846;
		// info_type it1, movie_info mi, title t
		case 548:
			return 30413;
		// info_type it2, movie_info mi, movie_info_idx mi_idx
		case 104:
			return 16867;
		// info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 200:
			return 3461792;
		// info_type it2, movie_info_idx mi_idx, title t
		case 584:
			return 459925;
		// keyword k, movie_info mi, movie_keyword mk
		case 176:
			return 13309;
		// keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 208:
			return 152720;
		// keyword k, movie_keyword mk, title t
		case 656:
			return 62096;
		// movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 224:
			return 1080149;
		// movie_info mi, movie_info_idx mi_idx, title t
		case 608:
			return 50629;
		// movie_info mi, movie_keyword mk, title t
		case 672:
			return 378072;
		// movie_info_idx mi_idx, movie_keyword mk, title t
		case 704:
			return 10424626;
		// cast_info ci, info_type it1, movie_info mi, movie_info_idx mi_idx
		case 102:
			return 25956;
		// cast_info ci, info_type it1, movie_info mi, movie_keyword mk
		case 166:
			return 215873;
		// cast_info ci, info_type it1, movie_info mi, name n
		case 294:
			return 8266;
		// cast_info ci, info_type it1, movie_info mi, title t
		case 550:
			return 15897;
		// cast_info ci, info_type it2, movie_info mi, movie_info_idx mi_idx
		case 106:
			return 8925;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 202:
			return 2258844;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, name n
		case 330:
			return 166987;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, title t
		case 586:
			return 333558;
		// cast_info ci, keyword k, movie_info mi, movie_keyword mk
		case 178:
			return 8230;
		// cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 210:
			return 91141;
		// cast_info ci, keyword k, movie_keyword mk, name n
		case 402:
			return 18967;
		// cast_info ci, keyword k, movie_keyword mk, title t
		case 658:
			return 33626;
		// cast_info ci, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 226:
			return 705503;
		// cast_info ci, movie_info mi, movie_info_idx mi_idx, name n
		case 354:
			return 15178;
		// cast_info ci, movie_info mi, movie_info_idx mi_idx, title t
		case 610:
			return 26785;
		// cast_info ci, movie_info mi, movie_keyword mk, name n
		case 418:
			return 155920;
		// cast_info ci, movie_info mi, movie_keyword mk, title t
		case 674:
			return 243528;
		// cast_info ci, movie_info mi, name n, title t
		case 802:
			return 8471;
		// cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n
		case 450:
			return 3884477;
		// cast_info ci, movie_info_idx mi_idx, movie_keyword mk, title t
		case 706:
			return 6806711;
		// cast_info ci, movie_info_idx mi_idx, name n, title t
		case 834:
			return 501122;
		// cast_info ci, movie_keyword mk, name n, title t
		case 898:
			return 1436455;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx
		case 108:
			return 16480;
		// info_type it1, keyword k, movie_info mi, movie_keyword mk
		case 180:
			return 12438;
		// info_type it1, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 228:
			return 959756;
		// info_type it1, movie_info mi, movie_info_idx mi_idx, title t
		case 612:
			return 49452;
		// info_type it1, movie_info mi, movie_keyword mk, title t
		case 676:
			return 338846;
		// info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 216:
			return 50760;
		// info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 232:
			return 358706;
		// info_type it2, movie_info mi, movie_info_idx mi_idx, title t
		case 616:
			return 16867;
		// info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 712:
			return 3461792;
		// keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 240:
			return 36852;
		// keyword k, movie_info mi, movie_keyword mk, title t
		case 688:
			return 13309;
		// keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 720:
			return 152720;
		// movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 736:
			return 1080149;
		// cast_info ci, info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx
		case 110:
			return 8650;
		// cast_info ci, info_type it1, keyword k, movie_info mi, movie_keyword mk
		case 182:
			return 7602;
		// cast_info ci, info_type it1, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 230:
			return 621758;
		// cast_info ci, info_type it1, movie_info mi, movie_info_idx mi_idx, name n
		case 358:
			return 14559;
		// cast_info ci, info_type it1, movie_info mi, movie_info_idx mi_idx, title t
		case 614:
			return 25956;
		// cast_info ci, info_type it1, movie_info mi, movie_keyword mk, name n
		case 422:
			return 133164;
		// cast_info ci, info_type it1, movie_info mi, movie_keyword mk, title t
		case 678:
			return 215873;
		// cast_info ci, info_type it1, movie_info mi, name n, title t
		case 806:
			return 8266;
		// cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 218:
			return 30276;
		// cast_info ci, info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 234:
			return 234746;
		// cast_info ci, info_type it2, movie_info mi, movie_info_idx mi_idx, name n
		case 362:
			return 5056;
		// cast_info ci, info_type it2, movie_info mi, movie_info_idx mi_idx, title t
		case 618:
			return 8925;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n
		case 458:
			return 1286350;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 714:
			return 2258844;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, name n, title t
		case 842:
			return 166987;
		// cast_info ci, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 242:
			return 23252;
		// cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n
		case 434:
			return 5196;
		// cast_info ci, keyword k, movie_info mi, movie_keyword mk, title t
		case 690:
			return 8230;
		// cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 466:
			return 52875;
		// cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 722:
			return 91141;
		// cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 914:
			return 18967;
		// cast_info ci, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n
		case 482:
			return 455303;
		// cast_info ci, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 738:
			return 705503;
		// cast_info ci, movie_info mi, movie_info_idx mi_idx, name n, title t
		case 866:
			return 15178;
		// cast_info ci, movie_info mi, movie_keyword mk, name n, title t
		case 930:
			return 155920;
		// cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 962:
			return 3884477;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 236:
			return 319480;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, title t
		case 620:
			return 16480;
		// info_type it1, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 244:
			return 34190;
		// info_type it1, keyword k, movie_info mi, movie_keyword mk, title t
		case 692:
			return 12438;
		// info_type it1, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 740:
			return 959756;
		// info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 248:
			return 12260;
		// info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 728:
			return 50760;
		// info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 744:
			return 358706;
		// keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 752:
			return 36852;
		// cast_info ci, info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 238:
			return 207091;
		// cast_info ci, info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, name n
		case 366:
			return 4851;
		// cast_info ci, info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, title t
		case 622:
			return 8650;
		// cast_info ci, info_type it1, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 246:
			return 21348;
		// cast_info ci, info_type it1, keyword k, movie_info mi, movie_keyword mk, name n
		case 438:
			return 4690;
		// cast_info ci, info_type it1, keyword k, movie_info mi, movie_keyword mk, title t
		case 694:
			return 7602;
		// cast_info ci, info_type it1, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n
		case 486:
			return 386255;
		// cast_info ci, info_type it1, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 742:
			return 621758;
		// cast_info ci, info_type it1, movie_info mi, movie_info_idx mi_idx, name n, title t
		case 870:
			return 14559;
		// cast_info ci, info_type it1, movie_info mi, movie_keyword mk, name n, title t
		case 934:
			return 133164;
		// cast_info ci, info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 250:
			return 7740;
		// cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 474:
			return 17537;
		// cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 730:
			return 30276;
		// cast_info ci, info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n
		case 490:
			return 151346;
		// cast_info ci, info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 746:
			return 234746;
		// cast_info ci, info_type it2, movie_info mi, movie_info_idx mi_idx, name n, title t
		case 874:
			return 5056;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 970:
			return 1286350;
		// cast_info ci, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n
		case 498:
			return 14771;
		// cast_info ci, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 754:
			return 23252;
		// cast_info ci, keyword k, movie_info mi, movie_keyword mk, name n, title t
		case 946:
			return 5196;
		// cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 978:
			return 52875;
		// cast_info ci, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 994:
			return 455303;
		// info_type it1, info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 252:
			return 11389;
		// info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 748:
			return 319480;
		// info_type it1, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 756:
			return 34190;
		// info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 760:
			return 12260;
		// cast_info ci, info_type it1, info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk
		case 254:
			return 7112;
		// cast_info ci, info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n
		case 494:
			return 128590;
		// cast_info ci, info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 750:
			return 207091;
		// cast_info ci, info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, name n, title t
		case 878:
			return 4851;
		// cast_info ci, info_type it1, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n
		case 502:
			return 13233;
		// cast_info ci, info_type it1, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 758:
			return 21348;
		// cast_info ci, info_type it1, keyword k, movie_info mi, movie_keyword mk, name n, title t
		case 950:
			return 4690;
		// cast_info ci, info_type it1, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 998:
			return 386255;
		// cast_info ci, info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n
		case 506:
			return 4913;
		// cast_info ci, info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 762:
			return 7740;
		// cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 986:
			return 17537;
		// cast_info ci, info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 1002:
			return 151346;
		// cast_info ci, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 1010:
			return 14771;
		// info_type it1, info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 764:
			return 11389;
		// cast_info ci, info_type it1, info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n
		case 510:
			return 4407;
		// cast_info ci, info_type it1, info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, title t
		case 766:
			return 7112;
		// cast_info ci, info_type it1, info_type it2, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 1006:
			return 128590;
		// cast_info ci, info_type it1, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 1014:
			return 13233;
		// cast_info ci, info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 1018:
			return 4913;
		// cast_info ci, info_type it1, info_type it2, keyword k, movie_info mi, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 1022:
			return 4407;
	};
}

// [complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t, ]
double
get_truth_cardinality_job_query_26(int total_relids)
{
	switch (total_relids) {
		// complete_cast cc
		case 2:
			return 135086;
		// comp_cast_type cct1
		case 4:
			return 1;
		// comp_cast_type cct2
		case 8:
			return 2;
		// char_name chn
		case 16:
			return 180152;
		// cast_info ci
		case 32:
			return 36244344;
		// info_type it2
		case 64:
			return 1;
		// keyword k
		case 128:
			return 10;
		// kind_type kt
		case 256:
			return 1;
		// movie_info_idx mi_idx
		case 512:
			return 193895;
		// movie_keyword mk
		case 1024:
			return 4523930;
		// name n
		case 2048:
			return 4167491;
		// title t
		case 4096:
			return 1381453;
		// complete_cast cc, comp_cast_type cct1
		case 6:
			return 85941;
		// complete_cast cc, comp_cast_type cct2
		case 10:
			return 135086;
		// complete_cast cc, cast_info ci
		case 34:
			return 5212164;
		// complete_cast cc, movie_info_idx mi_idx
		case 514:
			return 43850;
		// complete_cast cc, movie_keyword mk
		case 1026:
			return 2171367;
		// complete_cast cc, title t
		case 4098:
			return 38722;
		// char_name chn, cast_info ci
		case 48:
			return 623586;
		// cast_info ci, movie_info_idx mi_idx
		case 544:
			return 6265431;
		// cast_info ci, movie_keyword mk
		case 1056:
			return 215765477;
		// cast_info ci, name n
		case 2080:
			return 36244344;
		// cast_info ci, title t
		case 4128:
			return 21334720;
		// info_type it2, movie_info_idx mi_idx
		case 576:
			return 121572;
		// keyword k, movie_keyword mk
		case 1152:
			return 24091;
		// kind_type kt, title t
		case 4352:
			return 274015;
		// movie_info_idx mi_idx, movie_keyword mk
		case 1536:
			return 1479312;
		// movie_info_idx mi_idx, title t
		case 4608:
			return 99749;
		// movie_keyword mk, title t
		case 5120:
			return 1970380;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2
		case 14:
			return 85941;
		// complete_cast cc, comp_cast_type cct1, cast_info ci
		case 38:
			return 3409569;
		// complete_cast cc, comp_cast_type cct1, movie_info_idx mi_idx
		case 518:
			return 26915;
		// complete_cast cc, comp_cast_type cct1, movie_keyword mk
		case 1030:
			return 1436647;
		// complete_cast cc, comp_cast_type cct1, title t
		case 4102:
			return 23557;
		// complete_cast cc, comp_cast_type cct2, cast_info ci
		case 42:
			return 5212164;
		// complete_cast cc, comp_cast_type cct2, movie_info_idx mi_idx
		case 522:
			return 43850;
		// complete_cast cc, comp_cast_type cct2, movie_keyword mk
		case 1034:
			return 2171367;
		// complete_cast cc, comp_cast_type cct2, title t
		case 4106:
			return 38722;
		// complete_cast cc, char_name chn, cast_info ci
		case 50:
			return 183541;
		// complete_cast cc, cast_info ci, movie_info_idx mi_idx
		case 546:
			return 1976897;
		// complete_cast cc, cast_info ci, movie_keyword mk
		case 1058:
			return 157283028;
		// complete_cast cc, cast_info ci, name n
		case 2082:
			return 5212164;
		// complete_cast cc, cast_info ci, title t
		case 4130:
			return 1702654;
		// complete_cast cc, info_type it2, movie_info_idx mi_idx
		case 578:
			return 29914;
		// complete_cast cc, keyword k, movie_keyword mk
		case 1154:
			return 9392;
		// complete_cast cc, kind_type kt, title t
		case 4354:
			return 6234;
		// complete_cast cc, movie_info_idx mi_idx, movie_keyword mk
		case 1538:
			return 992789;
		// complete_cast cc, movie_info_idx mi_idx, title t
		case 4610:
			return 12970;
		// complete_cast cc, movie_keyword mk, title t
		case 5122:
			return 468474;
		// char_name chn, cast_info ci, movie_info_idx mi_idx
		case 560:
			return 136631;
		// char_name chn, cast_info ci, movie_keyword mk
		case 1072:
			return 7359406;
		// char_name chn, cast_info ci, name n
		case 2096:
			return 623586;
		// char_name chn, cast_info ci, title t
		case 4144:
			return 296510;
		// cast_info ci, info_type it2, movie_info_idx mi_idx
		case 608:
			return 4191208;
		// cast_info ci, keyword k, movie_keyword mk
		case 1184:
			return 1176263;
		// cast_info ci, kind_type kt, title t
		case 4384:
			return 4911717;
		// cast_info ci, movie_info_idx mi_idx, movie_keyword mk
		case 1568:
			return 92348344;
		// cast_info ci, movie_info_idx mi_idx, name n
		case 2592:
			return 6265431;
		// cast_info ci, movie_info_idx mi_idx, title t
		case 4640:
			return 3615786;
		// cast_info ci, movie_keyword mk, name n
		case 3104:
			return 215765477;
		// cast_info ci, movie_keyword mk, title t
		case 5152:
			return 114182642;
		// cast_info ci, name n, title t
		case 6176:
			return 21334720;
		// info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1600:
			return 963300;
		// info_type it2, movie_info_idx mi_idx, title t
		case 4672:
			return 63857;
		// keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1664:
			return 6621;
		// keyword k, movie_keyword mk, title t
		case 5248:
			return 10613;
		// kind_type kt, movie_info_idx mi_idx, title t
		case 4864:
			return 27262;
		// kind_type kt, movie_keyword mk, title t
		case 5376:
			return 1053171;
		// movie_info_idx mi_idx, movie_keyword mk, title t
		case 5632:
			return 657749;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci
		case 46:
			return 3409569;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, movie_info_idx mi_idx
		case 526:
			return 26915;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, movie_keyword mk
		case 1038:
			return 1436647;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, title t
		case 4110:
			return 23557;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci
		case 54:
			return 118833;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_info_idx mi_idx
		case 550:
			return 1236656;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_keyword mk
		case 1062:
			return 109052152;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, name n
		case 2086:
			return 3409569;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, title t
		case 4134:
			return 1113925;
		// complete_cast cc, comp_cast_type cct1, info_type it2, movie_info_idx mi_idx
		case 582:
			return 17898;
		// complete_cast cc, comp_cast_type cct1, keyword k, movie_keyword mk
		case 1158:
			return 6396;
		// complete_cast cc, comp_cast_type cct1, kind_type kt, title t
		case 4358:
			return 4696;
		// complete_cast cc, comp_cast_type cct1, movie_info_idx mi_idx, movie_keyword mk
		case 1542:
			return 621414;
		// complete_cast cc, comp_cast_type cct1, movie_info_idx mi_idx, title t
		case 4614:
			return 8037;
		// complete_cast cc, comp_cast_type cct1, movie_keyword mk, title t
		case 5126:
			return 365390;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci
		case 58:
			return 183541;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx
		case 554:
			return 1976897;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_keyword mk
		case 1066:
			return 157283028;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, name n
		case 2090:
			return 5212164;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, title t
		case 4138:
			return 1702654;
		// complete_cast cc, comp_cast_type cct2, info_type it2, movie_info_idx mi_idx
		case 586:
			return 29914;
		// complete_cast cc, comp_cast_type cct2, keyword k, movie_keyword mk
		case 1162:
			return 9392;
		// complete_cast cc, comp_cast_type cct2, kind_type kt, title t
		case 4362:
			return 6234;
		// complete_cast cc, comp_cast_type cct2, movie_info_idx mi_idx, movie_keyword mk
		case 1546:
			return 992789;
		// complete_cast cc, comp_cast_type cct2, movie_info_idx mi_idx, title t
		case 4618:
			return 12970;
		// complete_cast cc, comp_cast_type cct2, movie_keyword mk, title t
		case 5130:
			return 468474;
		// complete_cast cc, char_name chn, cast_info ci, movie_info_idx mi_idx
		case 562:
			return 67513;
		// complete_cast cc, char_name chn, cast_info ci, movie_keyword mk
		case 1074:
			return 7089299;
		// complete_cast cc, char_name chn, cast_info ci, name n
		case 2098:
			return 183541;
		// complete_cast cc, char_name chn, cast_info ci, title t
		case 4146:
			return 30253;
		// complete_cast cc, cast_info ci, info_type it2, movie_info_idx mi_idx
		case 610:
			return 1347524;
		// complete_cast cc, cast_info ci, keyword k, movie_keyword mk
		case 1186:
			return 704280;
		// complete_cast cc, cast_info ci, kind_type kt, title t
		case 4386:
			return 487001;
		// complete_cast cc, cast_info ci, movie_info_idx mi_idx, movie_keyword mk
		case 1570:
			return 79144381;
		// complete_cast cc, cast_info ci, movie_info_idx mi_idx, name n
		case 2594:
			return 1976897;
		// complete_cast cc, cast_info ci, movie_info_idx mi_idx, title t
		case 4642:
			return 752382;
		// complete_cast cc, cast_info ci, movie_keyword mk, name n
		case 3106:
			return 157283028;
		// complete_cast cc, cast_info ci, movie_keyword mk, title t
		case 5154:
			return 56194507;
		// complete_cast cc, cast_info ci, name n, title t
		case 6178:
			return 1702654;
		// complete_cast cc, info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1602:
			return 675563;
		// complete_cast cc, info_type it2, movie_info_idx mi_idx, title t
		case 4674:
			return 9872;
		// complete_cast cc, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1666:
			return 3529;
		// complete_cast cc, keyword k, movie_keyword mk, title t
		case 5250:
			return 2052;
		// complete_cast cc, kind_type kt, movie_info_idx mi_idx, title t
		case 4866:
			return 1619;
		// complete_cast cc, kind_type kt, movie_keyword mk, title t
		case 5378:
			return 355758;
		// complete_cast cc, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5634:
			return 231179;
		// char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx
		case 624:
			return 89096;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk
		case 1200:
			return 36816;
		// char_name chn, cast_info ci, kind_type kt, title t
		case 4400:
			return 98725;
		// char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk
		case 1584:
			return 3093065;
		// char_name chn, cast_info ci, movie_info_idx mi_idx, name n
		case 2608:
			return 136631;
		// char_name chn, cast_info ci, movie_info_idx mi_idx, title t
		case 4656:
			return 62102;
		// char_name chn, cast_info ci, movie_keyword mk, name n
		case 3120:
			return 7359406;
		// char_name chn, cast_info ci, movie_keyword mk, title t
		case 5168:
			return 2728808;
		// char_name chn, cast_info ci, name n, title t
		case 6192:
			return 296510;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1632:
			return 62075146;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, name n
		case 2656:
			return 4191208;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, title t
		case 4704:
			return 2507578;
		// cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1696:
			return 422988;
		// cast_info ci, keyword k, movie_keyword mk, name n
		case 3232:
			return 1176263;
		// cast_info ci, keyword k, movie_keyword mk, title t
		case 5280:
			return 630025;
		// cast_info ci, kind_type kt, movie_info_idx mi_idx, title t
		case 4896:
			return 808870;
		// cast_info ci, kind_type kt, movie_keyword mk, title t
		case 5408:
			return 84217062;
		// cast_info ci, kind_type kt, name n, title t
		case 6432:
			return 4911717;
		// cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3616:
			return 92348344;
		// cast_info ci, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5664:
			return 50983082;
		// cast_info ci, movie_info_idx mi_idx, name n, title t
		case 6688:
			return 3615786;
		// cast_info ci, movie_keyword mk, name n, title t
		case 7200:
			return 114182642;
		// info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1728:
			return 3908;
		// info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 4928:
			return 13736;
		// info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5696:
			return 444357;
		// keyword k, kind_type kt, movie_keyword mk, title t
		case 5504:
			return 5032;
		// keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5760:
			return 3035;
		// kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5888:
			return 333662;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci
		case 62:
			return 118833;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx
		case 558:
			return 1236656;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_keyword mk
		case 1070:
			return 109052152;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, name n
		case 2094:
			return 3409569;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, title t
		case 4142:
			return 1113925;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, info_type it2, movie_info_idx mi_idx
		case 590:
			return 17898;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, keyword k, movie_keyword mk
		case 1166:
			return 6396;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, kind_type kt, title t
		case 4366:
			return 4696;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, movie_info_idx mi_idx, movie_keyword mk
		case 1550:
			return 621414;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, movie_info_idx mi_idx, title t
		case 4622:
			return 8037;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, movie_keyword mk, title t
		case 5134:
			return 365390;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_info_idx mi_idx
		case 566:
			return 41088;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_keyword mk
		case 1078:
			return 4614301;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, name n
		case 2102:
			return 118833;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, title t
		case 4150:
			return 21516;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, movie_info_idx mi_idx
		case 614:
			return 818207;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, movie_keyword mk
		case 1190:
			return 505830;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, kind_type kt, title t
		case 4390:
			return 395336;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_info_idx mi_idx, movie_keyword mk
		case 1574:
			return 51521585;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_info_idx mi_idx, name n
		case 2598:
			return 1236656;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_info_idx mi_idx, title t
		case 4646:
			return 481079;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_keyword mk, name n
		case 3110:
			return 109052152;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_keyword mk, title t
		case 5158:
			return 45206995;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, name n, title t
		case 6182:
			return 1113925;
		// complete_cast cc, comp_cast_type cct1, info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1606:
			return 411631;
		// complete_cast cc, comp_cast_type cct1, info_type it2, movie_info_idx mi_idx, title t
		case 4678:
			return 6002;
		// complete_cast cc, comp_cast_type cct1, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1670:
			return 2295;
		// complete_cast cc, comp_cast_type cct1, keyword k, movie_keyword mk, title t
		case 5254:
			return 1595;
		// complete_cast cc, comp_cast_type cct1, kind_type kt, movie_info_idx mi_idx, title t
		case 4870:
			return 1253;
		// complete_cast cc, comp_cast_type cct1, kind_type kt, movie_keyword mk, title t
		case 5382:
			return 294672;
		// complete_cast cc, comp_cast_type cct1, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5638:
			return 171796;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx
		case 570:
			return 67513;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk
		case 1082:
			return 7089299;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, name n
		case 2106:
			return 183541;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, title t
		case 4154:
			return 30253;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx
		case 618:
			return 1347524;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk
		case 1194:
			return 704280;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, kind_type kt, title t
		case 4394:
			return 487001;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx, movie_keyword mk
		case 1578:
			return 79144381;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx, name n
		case 2602:
			return 1976897;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx, title t
		case 4650:
			return 752382;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_keyword mk, name n
		case 3114:
			return 157283028;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_keyword mk, title t
		case 5162:
			return 56194507;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, name n, title t
		case 6186:
			return 1702654;
		// complete_cast cc, comp_cast_type cct2, info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1610:
			return 675563;
		// complete_cast cc, comp_cast_type cct2, info_type it2, movie_info_idx mi_idx, title t
		case 4682:
			return 9872;
		// complete_cast cc, comp_cast_type cct2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1674:
			return 3529;
		// complete_cast cc, comp_cast_type cct2, keyword k, movie_keyword mk, title t
		case 5258:
			return 2052;
		// complete_cast cc, comp_cast_type cct2, kind_type kt, movie_info_idx mi_idx, title t
		case 4874:
			return 1619;
		// complete_cast cc, comp_cast_type cct2, kind_type kt, movie_keyword mk, title t
		case 5386:
			return 355758;
		// complete_cast cc, comp_cast_type cct2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5642:
			return 231179;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx
		case 626:
			return 43538;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, movie_keyword mk
		case 1202:
			return 30558;
		// complete_cast cc, char_name chn, cast_info ci, kind_type kt, title t
		case 4402:
			return 13456;
		// complete_cast cc, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk
		case 1586:
			return 3485443;
		// complete_cast cc, char_name chn, cast_info ci, movie_info_idx mi_idx, name n
		case 2610:
			return 67513;
		// complete_cast cc, char_name chn, cast_info ci, movie_info_idx mi_idx, title t
		case 4658:
			return 14043;
		// complete_cast cc, char_name chn, cast_info ci, movie_keyword mk, name n
		case 3122:
			return 7089299;
		// complete_cast cc, char_name chn, cast_info ci, movie_keyword mk, title t
		case 5170:
			return 1536548;
		// complete_cast cc, char_name chn, cast_info ci, name n, title t
		case 6194:
			return 30253;
		// complete_cast cc, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1634:
			return 54639204;
		// complete_cast cc, cast_info ci, info_type it2, movie_info_idx mi_idx, name n
		case 2658:
			return 1347524;
		// complete_cast cc, cast_info ci, info_type it2, movie_info_idx mi_idx, title t
		case 4706:
			return 572804;
		// complete_cast cc, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1698:
			return 307160;
		// complete_cast cc, cast_info ci, keyword k, movie_keyword mk, name n
		case 3234:
			return 704280;
		// complete_cast cc, cast_info ci, keyword k, movie_keyword mk, title t
		case 5282:
			return 248924;
		// complete_cast cc, cast_info ci, kind_type kt, movie_info_idx mi_idx, title t
		case 4898:
			return 172097;
		// complete_cast cc, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 5410:
			return 49917740;
		// complete_cast cc, cast_info ci, kind_type kt, name n, title t
		case 6434:
			return 487001;
		// complete_cast cc, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3618:
			return 79144381;
		// complete_cast cc, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5666:
			return 29003232;
		// complete_cast cc, cast_info ci, movie_info_idx mi_idx, name n, title t
		case 6690:
			return 752382;
		// complete_cast cc, cast_info ci, movie_keyword mk, name n, title t
		case 7202:
			return 56194507;
		// complete_cast cc, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1730:
			return 2243;
		// complete_cast cc, info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 4930:
			return 863;
		// complete_cast cc, info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5698:
			return 165679;
		// complete_cast cc, keyword k, kind_type kt, movie_keyword mk, title t
		case 5506:
			return 1485;
		// complete_cast cc, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5762:
			return 883;
		// complete_cast cc, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5890:
			return 154330;
		// char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1648:
			return 2065260;
		// char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, name n
		case 2672:
			return 89096;
		// char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, title t
		case 4720:
			return 42765;
		// char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1712:
			return 13094;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk, name n
		case 3248:
			return 36816;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk, title t
		case 5296:
			return 14906;
		// char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, title t
		case 4912:
			return 17614;
		// char_name chn, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 5424:
			return 2221189;
		// char_name chn, cast_info ci, kind_type kt, name n, title t
		case 6448:
			return 98725;
		// char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3632:
			return 3093065;
		// char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5680:
			return 1165484;
		// char_name chn, cast_info ci, movie_info_idx mi_idx, name n, title t
		case 6704:
			return 62102;
		// char_name chn, cast_info ci, movie_keyword mk, name n, title t
		case 7216:
			return 2728808;
		// cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1760:
			return 270805;
		// cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 4960:
			return 406035;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3680:
			return 62075146;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5728:
			return 35291374;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, name n, title t
		case 6752:
			return 2507578;
		// cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 5536:
			return 406258;
		// cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3744:
			return 422988;
		// cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5792:
			return 245366;
		// cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 7328:
			return 630025;
		// cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5920:
			return 34205461;
		// cast_info ci, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 6944:
			return 808870;
		// cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 7456:
			return 84217062;
		// cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7712:
			return 50983082;
		// info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5824:
			return 1900;
		// info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5952:
			return 199813;
		// keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6016:
			return 1484;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx
		case 574:
			return 41088;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk
		case 1086:
			return 4614301;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, name n
		case 2110:
			return 118833;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, title t
		case 4158:
			return 21516;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx
		case 622:
			return 818207;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk
		case 1198:
			return 505830;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, kind_type kt, title t
		case 4398:
			return 395336;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx, movie_keyword mk
		case 1582:
			return 51521585;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx, name n
		case 2606:
			return 1236656;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx, title t
		case 4654:
			return 481079;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_keyword mk, name n
		case 3118:
			return 109052152;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_keyword mk, title t
		case 5166:
			return 45206995;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, name n, title t
		case 6190:
			return 1113925;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1614:
			return 411631;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, info_type it2, movie_info_idx mi_idx, title t
		case 4686:
			return 6002;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1678:
			return 2295;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, keyword k, movie_keyword mk, title t
		case 5262:
			return 1595;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, kind_type kt, movie_info_idx mi_idx, title t
		case 4878:
			return 1253;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, kind_type kt, movie_keyword mk, title t
		case 5390:
			return 294672;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5646:
			return 171796;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx
		case 630:
			return 25644;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, movie_keyword mk
		case 1206:
			return 20718;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, kind_type kt, title t
		case 4406:
			return 10764;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk
		case 1590:
			return 2129375;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_info_idx mi_idx, name n
		case 2614:
			return 41088;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_info_idx mi_idx, title t
		case 4662:
			return 9338;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_keyword mk, name n
		case 3126:
			return 4614301;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_keyword mk, title t
		case 5174:
			return 1223981;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, name n, title t
		case 6198:
			return 21516;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1638:
			return 34675563;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, movie_info_idx mi_idx, name n
		case 2662:
			return 818207;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, movie_info_idx mi_idx, title t
		case 4710:
			return 356241;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1702:
			return 208626;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, movie_keyword mk, name n
		case 3238:
			return 505830;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, movie_keyword mk, title t
		case 5286:
			return 207277;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, kind_type kt, movie_info_idx mi_idx, title t
		case 4902:
			return 135929;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 5414:
			return 41145539;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, kind_type kt, name n, title t
		case 6438:
			return 395336;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3622:
			return 51521585;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5670:
			return 22060938;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_info_idx mi_idx, name n, title t
		case 6694:
			return 481079;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_keyword mk, name n, title t
		case 7206:
			return 45206995;
		// complete_cast cc, comp_cast_type cct1, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1734:
			return 1423;
		// complete_cast cc, comp_cast_type cct1, info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 4934:
			return 647;
		// complete_cast cc, comp_cast_type cct1, info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5702:
			return 119244;
		// complete_cast cc, comp_cast_type cct1, keyword k, kind_type kt, movie_keyword mk, title t
		case 5510:
			return 1267;
		// complete_cast cc, comp_cast_type cct1, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5766:
			return 659;
		// complete_cast cc, comp_cast_type cct1, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5894:
			return 123465;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx
		case 634:
			return 43538;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk
		case 1210:
			return 30558;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, title t
		case 4410:
			return 13456;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk
		case 1594:
			return 3485443;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx, name n
		case 2618:
			return 67513;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx, title t
		case 4666:
			return 14043;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk, name n
		case 3130:
			return 7089299;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk, title t
		case 5178:
			return 1536548;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, name n, title t
		case 6202:
			return 30253;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1642:
			return 54639204;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx, name n
		case 2666:
			return 1347524;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx, title t
		case 4714:
			return 572804;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1706:
			return 307160;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk, name n
		case 3242:
			return 704280;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk, title t
		case 5290:
			return 248924;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, kind_type kt, movie_info_idx mi_idx, title t
		case 4906:
			return 172097;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 5418:
			return 49917740;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, kind_type kt, name n, title t
		case 6442:
			return 487001;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3626:
			return 79144381;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5674:
			return 29003232;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx, name n, title t
		case 6698:
			return 752382;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_keyword mk, name n, title t
		case 7210:
			return 56194507;
		// complete_cast cc, comp_cast_type cct2, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1738:
			return 2243;
		// complete_cast cc, comp_cast_type cct2, info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 4938:
			return 863;
		// complete_cast cc, comp_cast_type cct2, info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5706:
			return 165679;
		// complete_cast cc, comp_cast_type cct2, keyword k, kind_type kt, movie_keyword mk, title t
		case 5514:
			return 1485;
		// complete_cast cc, comp_cast_type cct2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5770:
			return 883;
		// complete_cast cc, comp_cast_type cct2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5898:
			return 154330;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1650:
			return 2429739;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, name n
		case 2674:
			return 43538;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, title t
		case 4722:
			return 10446;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1714:
			return 12635;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n
		case 3250:
			return 30558;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, movie_keyword mk, title t
		case 5298:
			return 6839;
		// complete_cast cc, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, title t
		case 4914:
			return 4546;
		// complete_cast cc, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 5426:
			return 1418058;
		// complete_cast cc, char_name chn, cast_info ci, kind_type kt, name n, title t
		case 6450:
			return 13456;
		// complete_cast cc, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3634:
			return 3485443;
		// complete_cast cc, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5682:
			return 753192;
		// complete_cast cc, char_name chn, cast_info ci, movie_info_idx mi_idx, name n, title t
		case 6706:
			return 14043;
		// complete_cast cc, char_name chn, cast_info ci, movie_keyword mk, name n, title t
		case 7218:
			return 1536548;
		// complete_cast cc, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1762:
			return 203971;
		// complete_cast cc, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 4962:
			return 101312;
		// complete_cast cc, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3682:
			return 54639204;
		// complete_cast cc, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5730:
			return 20511513;
		// complete_cast cc, cast_info ci, info_type it2, movie_info_idx mi_idx, name n, title t
		case 6754:
			return 572804;
		// complete_cast cc, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 5538:
			return 220880;
		// complete_cast cc, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3746:
			return 307160;
		// complete_cast cc, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5794:
			return 121522;
		// complete_cast cc, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 7330:
			return 248924;
		// complete_cast cc, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5922:
			return 24234132;
		// complete_cast cc, cast_info ci, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 6946:
			return 172097;
		// complete_cast cc, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 7458:
			return 49917740;
		// complete_cast cc, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7714:
			return 29003232;
		// complete_cast cc, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5826:
			return 613;
		// complete_cast cc, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5954:
			return 101174;
		// complete_cast cc, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6018:
			return 615;
		// char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1776:
			return 8417;
		// char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 4976:
			return 8886;
		// char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3696:
			return 2065260;
		// char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5744:
			return 805388;
		// char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, name n, title t
		case 6768:
			return 42765;
		// char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 5552:
			return 11231;
		// char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3760:
			return 13094;
		// char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5808:
			return 5886;
		// char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 7344:
			return 14906;
		// char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5936:
			return 848788;
		// char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 6960:
			return 17614;
		// char_name chn, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 7472:
			return 2221189;
		// char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7728:
			return 1165484;
		// cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3808:
			return 270805;
		// cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5856:
			return 164373;
		// cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5984:
			return 22068083;
		// cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 7008:
			return 406035;
		// cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7776:
			return 35291374;
		// cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6048:
			return 158339;
		// cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 7584:
			return 406258;
		// cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7840:
			return 245366;
		// cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7968:
			return 34205461;
		// info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6080:
			return 884;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx
		case 638:
			return 25644;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk
		case 1214:
			return 20718;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, title t
		case 4414:
			return 10764;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk
		case 1598:
			return 2129375;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx, name n
		case 2622:
			return 41088;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx, title t
		case 4670:
			return 9338;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk, name n
		case 3134:
			return 4614301;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk, title t
		case 5182:
			return 1223981;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, name n, title t
		case 6206:
			return 21516;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1646:
			return 34675563;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx, name n
		case 2670:
			return 818207;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx, title t
		case 4718:
			return 356241;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1710:
			return 208626;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk, name n
		case 3246:
			return 505830;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk, title t
		case 5294:
			return 207277;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, kind_type kt, movie_info_idx mi_idx, title t
		case 4910:
			return 135929;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 5422:
			return 41145539;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, kind_type kt, name n, title t
		case 6446:
			return 395336;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3630:
			return 51521585;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5678:
			return 22060938;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx, name n, title t
		case 6702:
			return 481079;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_keyword mk, name n, title t
		case 7214:
			return 45206995;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1742:
			return 1423;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 4942:
			return 647;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5710:
			return 119244;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, keyword k, kind_type kt, movie_keyword mk, title t
		case 5518:
			return 1267;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5774:
			return 659;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5902:
			return 123465;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1654:
			return 1446489;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, name n
		case 2678:
			return 25644;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, title t
		case 4726:
			return 6694;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1718:
			return 8115;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n
		case 3254:
			return 20718;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, movie_keyword mk, title t
		case 5302:
			return 5719;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, title t
		case 4918:
			return 3520;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 5430:
			return 1146265;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, kind_type kt, name n, title t
		case 6454:
			return 10764;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3638:
			return 2129375;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5686:
			return 562732;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_info_idx mi_idx, name n, title t
		case 6710:
			return 9338;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_keyword mk, name n, title t
		case 7222:
			return 1223981;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1766:
			return 136158;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 4966:
			return 77466;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3686:
			return 34675563;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5734:
			return 15224277;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, movie_info_idx mi_idx, name n, title t
		case 6758:
			return 356241;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 5542:
			return 189844;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3750:
			return 208626;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5798:
			return 96026;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 7334:
			return 207277;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5926:
			return 19052072;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 6950:
			return 135929;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 7462:
			return 41145539;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7718:
			return 22060938;
		// complete_cast cc, comp_cast_type cct1, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5830:
			return 445;
		// complete_cast cc, comp_cast_type cct1, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5958:
			return 79039;
		// complete_cast cc, comp_cast_type cct1, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6022:
			return 507;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1658:
			return 2429739;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, name n
		case 2682:
			return 43538;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, title t
		case 4730:
			return 10446;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1722:
			return 12635;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n
		case 3258:
			return 30558;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk, title t
		case 5306:
			return 6839;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, title t
		case 4922:
			return 4546;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 5434:
			return 1418058;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, name n, title t
		case 6458:
			return 13456;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3642:
			return 3485443;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5690:
			return 753192;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx, name n, title t
		case 6714:
			return 14043;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk, name n, title t
		case 7226:
			return 1536548;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1770:
			return 203971;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 4970:
			return 101312;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3690:
			return 54639204;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5738:
			return 20511513;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx, name n, title t
		case 6762:
			return 572804;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 5546:
			return 220880;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3754:
			return 307160;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5802:
			return 121522;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 7338:
			return 248924;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5930:
			return 24234132;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 6954:
			return 172097;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 7466:
			return 49917740;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7722:
			return 29003232;
		// complete_cast cc, comp_cast_type cct2, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5834:
			return 613;
		// complete_cast cc, comp_cast_type cct2, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5962:
			return 101174;
		// complete_cast cc, comp_cast_type cct2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6026:
			return 615;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1778:
			return 8277;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 4978:
			return 2774;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3698:
			return 2429739;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5746:
			return 547365;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, name n, title t
		case 6770:
			return 10446;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 5554:
			return 6371;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3762:
			return 12635;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5810:
			return 3310;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 7346:
			return 6839;
		// complete_cast cc, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5938:
			return 656523;
		// complete_cast cc, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 6962:
			return 4546;
		// complete_cast cc, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 7474:
			return 1418058;
		// complete_cast cc, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7730:
			return 753192;
		// complete_cast cc, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3810:
			return 203971;
		// complete_cast cc, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5858:
			return 84298;
		// complete_cast cc, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5986:
			return 16464230;
		// complete_cast cc, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 7010:
			return 101312;
		// complete_cast cc, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7778:
			return 20511513;
		// complete_cast cc, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6050:
			return 106895;
		// complete_cast cc, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 7586:
			return 220880;
		// complete_cast cc, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7842:
			return 121522;
		// complete_cast cc, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7970:
			return 24234132;
		// complete_cast cc, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6082:
			return 401;
		// char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3824:
			return 8417;
		// char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5872:
			return 4066;
		// char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6000:
			return 561866;
		// char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 7024:
			return 8886;
		// char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7792:
			return 805388;
		// char_name chn, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6064:
			return 4255;
		// char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 7600:
			return 11231;
		// char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7856:
			return 5886;
		// char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7984:
			return 848788;
		// cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6112:
			return 105632;
		// cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7904:
			return 164373;
		// cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8032:
			return 22068083;
		// cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8096:
			return 158339;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk
		case 1662:
			return 1446489;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, name n
		case 2686:
			return 25644;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, title t
		case 4734:
			return 6694;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1726:
			return 8115;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n
		case 3262:
			return 20718;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk, title t
		case 5310:
			return 5719;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, title t
		case 4926:
			return 3520;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, title t
		case 5438:
			return 1146265;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, name n, title t
		case 6462:
			return 10764;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3646:
			return 2129375;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5694:
			return 562732;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx, name n, title t
		case 6718:
			return 9338;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_keyword mk, name n, title t
		case 7230:
			return 1223981;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1774:
			return 136158;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 4974:
			return 77466;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3694:
			return 34675563;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5742:
			return 15224277;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx, name n, title t
		case 6766:
			return 356241;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 5550:
			return 189844;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3758:
			return 208626;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5806:
			return 96026;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 7342:
			return 207277;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5934:
			return 19052072;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 6958:
			return 135929;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 7470:
			return 41145539;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7726:
			return 22060938;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5838:
			return 445;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5966:
			return 79039;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6030:
			return 507;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1782:
			return 5264;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 4982:
			return 2047;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3702:
			return 1446489;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5750:
			return 398523;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, name n, title t
		case 6774:
			return 6694;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 5558:
			return 5406;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3766:
			return 8115;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5814:
			return 2580;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 7350:
			return 5719;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5942:
			return 502904;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 6966:
			return 3520;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 7478:
			return 1146265;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7734:
			return 562732;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3814:
			return 136158;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5862:
			return 65972;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5990:
			return 12681608;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 7014:
			return 77466;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7782:
			return 15224277;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6054:
			return 87325;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 7590:
			return 189844;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7846:
			return 96026;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7974:
			return 19052072;
		// complete_cast cc, comp_cast_type cct1, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6086:
			return 326;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1786:
			return 8277;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 4986:
			return 2774;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3706:
			return 2429739;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5754:
			return 547365;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, name n, title t
		case 6778:
			return 10446;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 5562:
			return 6371;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3770:
			return 12635;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5818:
			return 3310;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 7354:
			return 6839;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5946:
			return 656523;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 6970:
			return 4546;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 7482:
			return 1418058;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7738:
			return 753192;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3818:
			return 203971;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5866:
			return 84298;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5994:
			return 16464230;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 7018:
			return 101312;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7786:
			return 20511513;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6058:
			return 106895;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 7594:
			return 220880;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7850:
			return 121522;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7978:
			return 24234132;
		// complete_cast cc, comp_cast_type cct2, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6090:
			return 401;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3826:
			return 8277;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5874:
			return 2391;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6002:
			return 467210;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 7026:
			return 2774;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7794:
			return 547365;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6066:
			return 3070;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 7602:
			return 6371;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7858:
			return 3310;
		// complete_cast cc, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7986:
			return 656523;
		// complete_cast cc, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6114:
			return 72379;
		// complete_cast cc, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7906:
			return 84298;
		// complete_cast cc, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8034:
			return 16464230;
		// complete_cast cc, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8098:
			return 106895;
		// char_name chn, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6128:
			return 2929;
		// char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7920:
			return 4066;
		// char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8048:
			return 561866;
		// char_name chn, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8112:
			return 4255;
		// cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8160:
			return 105632;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk
		case 1790:
			return 5264;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, title t
		case 4990:
			return 2047;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3710:
			return 1446489;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5758:
			return 398523;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, name n, title t
		case 6782:
			return 6694;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, title t
		case 5566:
			return 5406;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3774:
			return 8115;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5822:
			return 2580;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_keyword mk, name n, title t
		case 7358:
			return 5719;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5950:
			return 502904;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 6974:
			return 3520;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_keyword mk, name n, title t
		case 7486:
			return 1146265;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7742:
			return 562732;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3822:
			return 136158;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5870:
			return 65972;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5998:
			return 12681608;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 7022:
			return 77466;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7790:
			return 15224277;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6062:
			return 87325;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 7598:
			return 189844;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7854:
			return 96026;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7982:
			return 19052072;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6094:
			return 326;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3830:
			return 5264;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5878:
			return 1844;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6006:
			return 349357;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 7030:
			return 2047;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7798:
			return 398523;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6070:
			return 2429;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 7606:
			return 5406;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7862:
			return 2580;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7990:
			return 502904;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6118:
			return 58947;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7910:
			return 65972;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8038:
			return 12681608;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8102:
			return 87325;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3834:
			return 8277;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5882:
			return 2391;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6010:
			return 467210;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 7034:
			return 2774;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7802:
			return 547365;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6074:
			return 3070;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 7610:
			return 6371;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7866:
			return 3310;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7994:
			return 656523;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6122:
			return 72379;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7914:
			return 84298;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8042:
			return 16464230;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8106:
			return 106895;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6130:
			return 2199;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7922:
			return 2391;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8050:
			return 467210;
		// complete_cast cc, char_name chn, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8114:
			return 3070;
		// complete_cast cc, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8162:
			return 72379;
		// char_name chn, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8176:
			return 2929;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n
		case 3838:
			return 5264;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, title t
		case 5886:
			return 1844;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6014:
			return 349357;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, name n, title t
		case 7038:
			return 2047;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7806:
			return 398523;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6078:
			return 2429;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, kind_type kt, movie_keyword mk, name n, title t
		case 7614:
			return 5406;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7870:
			return 2580;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7998:
			return 502904;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6126:
			return 58947;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7918:
			return 65972;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8046:
			return 12681608;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8110:
			return 87325;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6134:
			return 1728;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7926:
			return 1844;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8054:
			return 349357;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8118:
			return 2429;
		// complete_cast cc, comp_cast_type cct1, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8166:
			return 58947;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6138:
			return 2199;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7930:
			return 2391;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8058:
			return 467210;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8122:
			return 3070;
		// complete_cast cc, comp_cast_type cct2, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8170:
			return 72379;
		// complete_cast cc, char_name chn, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8178:
			return 2199;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, title t
		case 6142:
			return 1728;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, keyword k, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 7934:
			return 1844;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8062:
			return 349357;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8126:
			return 2429;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8174:
			return 58947;
		// complete_cast cc, comp_cast_type cct1, char_name chn, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8182:
			return 1728;
		// complete_cast cc, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8186:
			return 2199;
		// complete_cast cc, comp_cast_type cct1, comp_cast_type cct2, char_name chn, cast_info ci, info_type it2, keyword k, kind_type kt, movie_info_idx mi_idx, movie_keyword mk, name n, title t
		case 8190:
			return 1728;
	};
}

