#include "postgres.h"
#include "miscadmin.h"

double get_tpch_truth_cardinality(int total_relids);
double get_truth_cardinality_tpch_1_query_0(int total_relids);
double get_truth_cardinality_tpch_1_query_1(int total_relids);
double get_truth_cardinality_tpch_1_query_2(int total_relids);
double get_truth_cardinality_tpch_1_query_3(int total_relids);
double get_truth_cardinality_tpch_1_query_4(int total_relids);
double get_truth_cardinality_tpch_1_query_5(int total_relids);
double get_truth_cardinality_tpch_1_query_6(int total_relids);
double get_truth_cardinality_tpch_1_query_7(int total_relids);
double get_truth_cardinality_tpch_1_query_8(int total_relids);
double get_truth_cardinality_tpch_1_query_9(int total_relids);
double get_truth_cardinality_tpch_1_query_10(int total_relids);
double get_truth_cardinality_tpch_1_query_11(int total_relids);
double get_truth_cardinality_tpch_5_query_0(int total_relids);
double get_truth_cardinality_tpch_5_query_1(int total_relids);
double get_truth_cardinality_tpch_5_query_2(int total_relids);
double get_truth_cardinality_tpch_5_query_3(int total_relids);
double get_truth_cardinality_tpch_5_query_4(int total_relids);
double get_truth_cardinality_tpch_5_query_5(int total_relids);
double get_truth_cardinality_tpch_5_query_6(int total_relids);
double get_truth_cardinality_tpch_5_query_7(int total_relids);
double get_truth_cardinality_tpch_5_query_9(int total_relids);
double get_truth_cardinality_tpch_5_query_10(int total_relids);
double get_truth_cardinality_tpch_5_query_11(int total_relids);
double get_truth_cardinality_tpch_10_query_0(int total_relids);
double get_truth_cardinality_tpch_10_query_1(int total_relids);
double get_truth_cardinality_tpch_10_query_2(int total_relids);
double get_truth_cardinality_tpch_10_query_3(int total_relids);
double get_truth_cardinality_tpch_10_query_4(int total_relids);
double get_truth_cardinality_tpch_10_query_5(int total_relids);
double get_truth_cardinality_tpch_10_query_6(int total_relids);
double get_truth_cardinality_tpch_10_query_7(int total_relids);
double get_truth_cardinality_tpch_10_query_9(int total_relids);
double get_truth_cardinality_tpch_10_query_10(int total_relids);
double get_truth_cardinality_tpch_10_query_11(int total_relids);
double get_truth_cardinality_tpch_50_query_0(int total_relids);
double get_truth_cardinality_tpch_50_query_1(int total_relids);
double get_truth_cardinality_tpch_50_query_2(int total_relids);
double get_truth_cardinality_tpch_50_query_3(int total_relids);
double get_truth_cardinality_tpch_50_query_4(int total_relids);
double get_truth_cardinality_tpch_50_query_5(int total_relids);
double get_truth_cardinality_tpch_50_query_6(int total_relids);
double get_truth_cardinality_tpch_50_query_7(int total_relids);
double get_truth_cardinality_tpch_50_query_9(int total_relids);
double get_truth_cardinality_tpch_50_query_10(int total_relids);
double get_truth_cardinality_tpch_50_query_11(int total_relids);
double get_truth_cardinality_tpch_100_query_0(int total_relids);
double get_truth_cardinality_tpch_100_query_1(int total_relids);
double get_truth_cardinality_tpch_100_query_2(int total_relids);
double get_truth_cardinality_tpch_100_query_3(int total_relids);
double get_truth_cardinality_tpch_100_query_4(int total_relids);
double get_truth_cardinality_tpch_100_query_5(int total_relids);
double get_truth_cardinality_tpch_100_query_6(int total_relids);
double get_truth_cardinality_tpch_100_query_7(int total_relids);
double get_truth_cardinality_tpch_100_query_9(int total_relids);
double get_truth_cardinality_tpch_100_query_10(int total_relids);
double get_truth_cardinality_tpch_100_query_11(int total_relids);

double get_tpch_truth_cardinality(int total_relids){
    switch (benchmark) {
        case 5:
            switch (query_order) {
                case 0:
					return get_truth_cardinality_tpch_1_query_0(total_relids);
                case 1:
					return get_truth_cardinality_tpch_1_query_1(total_relids);
				case 2:
					return get_truth_cardinality_tpch_1_query_2(total_relids);
				case 3:
					return get_truth_cardinality_tpch_1_query_3(total_relids);
                case 4:
					return get_truth_cardinality_tpch_1_query_4(total_relids);
				case 5:
					return get_truth_cardinality_tpch_1_query_5(total_relids);
                case 6:
					return get_truth_cardinality_tpch_1_query_6(total_relids);
				case 7:
					return get_truth_cardinality_tpch_1_query_7(total_relids);
                case 8:
					return get_truth_cardinality_tpch_1_query_8(total_relids);
				case 9:
					return get_truth_cardinality_tpch_1_query_9(total_relids);
				case 10:
					return get_truth_cardinality_tpch_1_query_10(total_relids);
                case 11:
					return get_truth_cardinality_tpch_1_query_11(total_relids);
            }
            break;
        case 6:
            switch (query_order) {
				case 0:
					return get_truth_cardinality_tpch_5_query_0(total_relids);
                case 1:
					return get_truth_cardinality_tpch_5_query_1(total_relids);
				case 2:
					return get_truth_cardinality_tpch_5_query_2(total_relids);
				case 3:
					return get_truth_cardinality_tpch_5_query_3(total_relids);
                case 4:
					return get_truth_cardinality_tpch_5_query_4(total_relids);
				case 5:
					return get_truth_cardinality_tpch_5_query_5(total_relids);
                case 6:
					return get_truth_cardinality_tpch_5_query_6(total_relids);
				case 7:
					return get_truth_cardinality_tpch_5_query_7(total_relids);
				case 9:
					return get_truth_cardinality_tpch_5_query_9(total_relids);
				case 10:
					return get_truth_cardinality_tpch_5_query_10(total_relids);
                case 11:
					return get_truth_cardinality_tpch_5_query_11(total_relids);
            }
            break;
        case 7:
            switch (query_order) {
				case 0:
					return get_truth_cardinality_tpch_10_query_0(total_relids);
                case 1:
					return get_truth_cardinality_tpch_10_query_1(total_relids);
				case 2:
					return get_truth_cardinality_tpch_10_query_2(total_relids);
				case 3:
					return get_truth_cardinality_tpch_10_query_3(total_relids);
                case 4:
					return get_truth_cardinality_tpch_10_query_4(total_relids);
				case 5:
					return get_truth_cardinality_tpch_10_query_5(total_relids);
                case 6:
					return get_truth_cardinality_tpch_10_query_6(total_relids);
				case 7:
					return get_truth_cardinality_tpch_10_query_7(total_relids);
                case 9:
					return get_truth_cardinality_tpch_10_query_9(total_relids);
				case 10:
					return get_truth_cardinality_tpch_10_query_10(total_relids);
                case 11:
					return get_truth_cardinality_tpch_10_query_11(total_relids);
            }
            break;
        case 8:
            switch (query_order) {
				case 0:
					return get_truth_cardinality_tpch_50_query_0(total_relids);
                case 1:
					return get_truth_cardinality_tpch_50_query_1(total_relids);
				case 2:
					return get_truth_cardinality_tpch_50_query_2(total_relids);
				case 3:
					return get_truth_cardinality_tpch_50_query_3(total_relids);
                case 4:
					return get_truth_cardinality_tpch_50_query_4(total_relids);
				case 5:
					return get_truth_cardinality_tpch_50_query_5(total_relids);
                case 6:
					return get_truth_cardinality_tpch_50_query_6(total_relids);
				case 7:
					return get_truth_cardinality_tpch_50_query_7(total_relids);
				case 9:
					return get_truth_cardinality_tpch_50_query_9(total_relids);
				case 10:
					return get_truth_cardinality_tpch_50_query_10(total_relids);
                case 11:
					return get_truth_cardinality_tpch_50_query_11(total_relids);
            }
            break;
        case 9:
            switch (query_order) {
				case 0:
					return get_truth_cardinality_tpch_100_query_0(total_relids);
                case 1:
					return get_truth_cardinality_tpch_100_query_1(total_relids);
				case 2:
					return get_truth_cardinality_tpch_100_query_2(total_relids);
				case 3:
					return get_truth_cardinality_tpch_100_query_3(total_relids);
                case 4:
					return get_truth_cardinality_tpch_100_query_4(total_relids);
				case 5:
					return get_truth_cardinality_tpch_100_query_5(total_relids);
                case 6:
					return get_truth_cardinality_tpch_100_query_6(total_relids);
				case 7:
					return get_truth_cardinality_tpch_100_query_7(total_relids);
                case 9:
					return get_truth_cardinality_tpch_100_query_9(total_relids);
				case 10:
					return get_truth_cardinality_tpch_100_query_10(total_relids);
                case 11:
					return get_truth_cardinality_tpch_100_query_11(total_relids);
            }
            break;
    }
}

// [lineitem l, ]
double
get_truth_cardinality_tpch_1_query_0(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 5886255;
	};
}

double
get_truth_cardinality_tpch_1_query_1(int total_relids)
{
	switch (total_relids) {
		// customer c
		case 2:
			return 150000;
		// orders o
		case 4:
			return 55462;
		// lineitem l
		case 8:
			return 1478870;
		// nation n
		case 16:
			return 25;
		// customer c, orders o
		case 6:
			return 55462;
		// customer c, nation n
		case 18:
			return 150000;
		// orders o, lineitem l
		case 12:
			return 110603;
		// customer c, orders o, lineitem l
		case 14:
			return 110603;
		// customer c, orders o, nation n
		case 22:
			return 55462;
		// customer c, orders o, lineitem l, nation n
		case 30:
			return 110603;
	};
}

// [orders o, lineitem l, ]
double
get_truth_cardinality_tpch_1_query_2(int total_relids)
{
	switch (total_relids) {
		// orders o
		case 2:
			return 1500000;
		// lineitem l
		case 4:
			return 31238;
		// orders o, lineitem l
		case 6:
			return 31238;
	};
}

// [customer c, orders o, ]
double
get_truth_cardinality_tpch_1_query_3(int total_relids)
{
	switch (total_relids) {
		// customer c
		case 2:
			return 150000;
		// orders o
		case 4:
			return 1483918;
		// customer c, orders o
		case 6:
			return 1533923;
	};
}

// [lineitem l, part p, ]
double
get_truth_cardinality_tpch_1_query_4(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 69872;
		// part p
		case 4:
			return 200000;
		// lineitem l, part p
		case 6:
			return 69872;
	};
}

// [lineitem l, part p, ]
double
get_truth_cardinality_tpch_1_query_5(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 132335;
		// part p
		case 4:
			return 478;
		// lineitem l, part p
		case 6:
			return 122;
	};
}

// [customer c, orders o, lineitem l, ]
double
get_truth_cardinality_tpch_1_query_6(int total_relids)
{
	switch (total_relids) {
		// customer c
		case 2:
			return 30142;
		// orders o
		case 4:
			return 727908;
		// lineitem l
		case 8:
			return 3239288;
		// customer c, orders o
		case 6:
			return 147264;
		// orders o, lineitem l
		case 12:
			return 151263;
		// customer c, orders o, lineitem l
		case 14:
			return 30592;
	};
}

// [orders o, lineitem l, ]
double
get_truth_cardinality_tpch_1_query_7(int total_relids)
{
	switch (total_relids) {
		// orders o
		case 2:
			return 57687;
		// lineitem l
		case 4:
			return 3793296;
		// orders o, lineitem l
		case 6:
			return 52874;
	};
}

// [customer c, orders o, lineitem l, supplier s, nation n, region r, ]
double
get_truth_cardinality_tpch_1_query_8(int total_relids)
{
	switch (total_relids) {
		// customer c
		case 2:
			return 150000;
		// orders o
		case 4:
			return 226645;
		// lineitem l
		case 8:
			return 6001215;
		// supplier s
		case 16:
			return 10000;
		// nation n
		case 32:
			return 25;
		// region r
		case 64:
			return 1;
		// customer c, orders o
		case 6:
			return 226645;
		// customer c, supplier s
		case 18:
			return 60000414;
		// customer c, nation n
		case 34:
			return 150000;
		// orders o, lineitem l
		case 12:
			return 908238;
		// lineitem l, supplier s
		case 24:
			return 6001215;
		// supplier s, nation n
		case 48:
			return 10000;
		// nation n, region r
		case 96:
			return 5;
		// customer c, orders o, lineitem l
		case 14:
			return 908238;
		// customer c, orders o, supplier s
		case 22:
			return 90646410;
		// customer c, orders o, nation n
		case 38:
			return 226645;
		// customer c, lineitem l, supplier s
		case 26:
			return 36007310944;
		// customer c, supplier s, nation n
		case 50:
			return 60000414;
		// customer c, nation n, region r
		case 98:
			return 29764;
		// orders o, lineitem l, supplier s
		case 28:
			return 908238;
		// lineitem l, supplier s, nation n
		case 56:
			return 6001215;
		// supplier s, nation n, region r
		case 112:
			return 1955;
		// customer c, orders o, lineitem l, supplier s
		case 30:
			return 36654;
		// customer c, orders o, lineitem l, nation n
		case 46:
			return 908238;
		// customer c, orders o, supplier s, nation n
		case 54:
			return 90646410;
		// customer c, orders o, nation n, region r
		case 102:
			return 45280;
		// customer c, lineitem l, supplier s, nation n
		case 58:
			return 36007310944;
		// customer c, supplier s, nation n, region r
		case 114:
			return 11637229;
		// orders o, lineitem l, supplier s, nation n
		case 60:
			return 908238;
		// lineitem l, supplier s, nation n, region r
		case 120:
			return 1173734;
		// customer c, orders o, lineitem l, supplier s, nation n
		case 62:
			return 36654;
		// customer c, orders o, lineitem l, nation n, region r
		case 110:
			return 181464;
		// customer c, orders o, supplier s, nation n, region r
		case 118:
			return 17708881;
		// customer c, lineitem l, supplier s, nation n, region r
		case 122:
			return 6986681829;
		// orders o, lineitem l, supplier s, nation n, region r
		case 124:
			return 177994;
		// customer c, orders o, lineitem l, supplier s, nation n, region r
		case 126:
			return 7228;
	};
}

// [lineitem l, ]
double
get_truth_cardinality_tpch_1_query_9(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 119208;
	};
}

// [supplier s, lineitem l, orders o, customer c, nation n1, nation n2, ]
double
get_truth_cardinality_tpch_1_query_10(int total_relids)
{
	switch (total_relids) {
		// supplier s
		case 2:
			return 10000;
		// lineitem l
		case 4:
			return 1828450;
		// orders o
		case 8:
			return 1500000;
		// customer c
		case 16:
			return 150000;
		// nation n1
		case 32:
			return 2;
		// nation n2
		case 64:
			return 2;
		// supplier s, lineitem l
		case 6:
			return 1828450;
		// supplier s, nation n1
		case 34:
			return 10421;
		// lineitem l, orders o
		case 12:
			return 1828450;
		// orders o, customer c
		case 24:
			return 1500000;
		// customer c, nation n2
		case 80:
			return 156161;
		// supplier s, lineitem l, orders o
		case 14:
			return 1828450;
		// supplier s, lineitem l, nation n1
		case 38:
			return 150888;
		// lineitem l, orders o, customer c
		case 28:
			return 1828450;
		// orders o, customer c, nation n2
		case 88:
			return 120395;
		// supplier s, lineitem l, orders o, customer c
		case 30:
			return 1828450;
		// supplier s, lineitem l, orders o, nation n1
		case 46:
			return 150888;
		// lineitem l, orders o, customer c, nation n2
		case 92:
			return 147396;
		// supplier s, lineitem l, orders o, customer c, nation n1
		case 62:
			return 150888;
		// supplier s, lineitem l, orders o, customer c, nation n2
		case 94:
			return 147396;
		// supplier s, lineitem l, orders o, customer c, nation n1, nation n2
		case 126:
			return 6080;
	};
}

// [part p, supplier s, lineitem l, orders o, customer c, nation n1, nation n2, region r, ]
double
get_truth_cardinality_tpch_1_query_11(int total_relids)
{
	switch (total_relids) {
		// part p
		case 2:
			return 1302;
		// supplier s
		case 4:
			return 10000;
		// lineitem l
		case 8:
			return 6001215;
		// orders o
		case 16:
			return 457263;
		// customer c
		case 32:
			return 150000;
		// nation n1
		case 64:
			return 25;
		// nation n2
		case 128:
			return 25;
		// region r
		case 256:
			return 1;
		// part p, lineitem l
		case 10:
			return 39356;
		// supplier s, lineitem l
		case 12:
			return 6001215;
		// supplier s, nation n2
		case 132:
			return 10000;
		// lineitem l, orders o
		case 24:
			return 1829418;
		// orders o, customer c
		case 48:
			return 457263;
		// customer c, nation n1
		case 96:
			return 150000;
		// nation n1, region r
		case 320:
			return 5;
		// part p, supplier s, lineitem l
		case 14:
			return 39356;
		// part p, lineitem l, orders o
		case 26:
			return 12122;
		// supplier s, lineitem l, orders o
		case 28:
			return 1829418;
		// supplier s, lineitem l, nation n2
		case 140:
			return 6001215;
		// lineitem l, orders o, customer c
		case 56:
			return 1829418;
		// orders o, customer c, nation n1
		case 112:
			return 457263;
		// customer c, nation n1, region r
		case 352:
			return 29952;
		// part p, supplier s, lineitem l, orders o
		case 30:
			return 12122;
		// part p, supplier s, lineitem l, nation n2
		case 142:
			return 39356;
		// part p, lineitem l, orders o, customer c
		case 58:
			return 12122;
		// supplier s, lineitem l, orders o, customer c
		case 60:
			return 1829418;
		// supplier s, lineitem l, orders o, nation n2
		case 156:
			return 1829418;
		// lineitem l, orders o, customer c, nation n1
		case 120:
			return 1829418;
		// orders o, customer c, nation n1, region r
		case 368:
			return 91179;
		// part p, supplier s, lineitem l, orders o, customer c
		case 62:
			return 12122;
		// part p, supplier s, lineitem l, orders o, nation n2
		case 158:
			return 12122;
		// part p, lineitem l, orders o, customer c, nation n1
		case 122:
			return 12122;
		// supplier s, lineitem l, orders o, customer c, nation n1
		case 124:
			return 1829418;
		// supplier s, lineitem l, orders o, customer c, nation n2
		case 188:
			return 1829418;
		// lineitem l, orders o, customer c, nation n1, region r
		case 376:
			return 365091;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1
		case 126:
			return 12122;
		// part p, supplier s, lineitem l, orders o, customer c, nation n2
		case 190:
			return 12122;
		// part p, lineitem l, orders o, customer c, nation n1, region r
		case 378:
			return 2516;
		// supplier s, lineitem l, orders o, customer c, nation n1, nation n2
		case 252:
			return 1829418;
		// supplier s, lineitem l, orders o, customer c, nation n1, region r
		case 380:
			return 365091;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1, nation n2
		case 254:
			return 12122;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1, region r
		case 382:
			return 2516;
		// supplier s, lineitem l, orders o, customer c, nation n1, nation n2, region r
		case 508:
			return 365091;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1, nation n2, region r
		case 510:
			return 2516;
	};
}

// [lineitem l, ]
double
get_truth_cardinality_tpch_5_query_0(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 29426306;
	};
}

// [customer c, orders o, lineitem l, nation n, ]
double
get_truth_cardinality_tpch_5_query_1(int total_relids)
{
	switch (total_relids) {
		// customer c7/9
		case 2:
			return 750000;
		// orders o
		case 4:
			return 277597;
		// lineitem l
		case 8:
			return 7406353;
		// nation n
		case 16:
			return 25;
		// customer c, orders o
		case 6:
			return 277597;
		// customer c, nation n
		case 18:
			return 750000;
		// orders o, lineitem l
		case 12:
			return 555290;
		// customer c, orders o, lineitem l
		case 14:
			return 555290;
		// customer c, orders o, nation n
		case 22:
			return 277597;
		// customer c, orders o, lineitem l, nation n
		case 30:
			return 555290;
	};
}

// [orders o, lineitem l, ]
double
get_truth_cardinality_tpch_5_query_2(int total_relids)
{
	switch (total_relids) {
		// orders o
		case 2:
			return 7500000;
		// lineitem l
		case 4:
			return 155941;
		// orders o, lineitem l
		case 6:
			return 155941;
	};
}

// [customer c, orders o, ]
double
get_truth_cardinality_tpch_5_query_3(int total_relids)
{
	switch (total_relids) {
		// customer c
		case 2:
			return 750000;
		// orders o
		case 4:
			return 7418748;
		// customer c, orders o
		case 6:
			return 7668760;
	};
}

// [lineitem l, part p, ]
double
get_truth_cardinality_tpch_5_query_4(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 349280;
		// part p
		case 4:
			return 1000000;
		// lineitem l, part p
		case 6:
			return 349280;
	};
}

// [lineitem l, part p, ]
double
get_truth_cardinality_tpch_5_query_5(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 663976;
		// part p
		case 4:
			return 2442;
		// lineitem l, part p
		case 6:
			return 581;
	};
}

// [customer c, orders o, lineitem l, ]
double
get_truth_cardinality_tpch_5_query_6(int total_relids)
{
	switch (total_relids) {
		// customer c
		case 2:
			return 150297;
		// orders o
		case 4:
			return 3647792;
		// lineitem l
		case 8:
			return 16156481;
		// customer c, orders o
		case 6:
			return 732777;
		// orders o, lineitem l
		case 12:
			return 749157;
		// customer c, orders o, lineitem l
		case 14:
			return 150607;
	};
}

// [orders o, lineitem l, ]
double
get_truth_cardinality_tpch_5_query_7(int total_relids)
{
	switch (total_relids) {
		// orders o
		case 2:
			return 286645;
		// lineitem l
		case 4:
			return 18968104;
		// orders o, lineitem l
		case 6:
			return 262606;
	};
}

// [lineitem l, ]
double
get_truth_cardinality_tpch_5_query_9(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 597497;
	};
}

// [supplier s, lineitem l, orders o, customer c, nation n1, nation n2, ]
double
get_truth_cardinality_tpch_5_query_10(int total_relids)
{
	switch (total_relids) {
		// supplier s
		case 2:
			return 50000;
		// lineitem l
		case 4:
			return 9113219;
		// orders o
		case 8:
			return 7500000;
		// customer c
		case 16:
			return 750000;
		// nation n1
		case 32:
			return 2;
		// nation n2
		case 64:
			return 2;
		// supplier s, lineitem l
		case 6:
			return 9113219;
		// supplier s, nation n1
		case 34:
			return 51999;
		// lineitem l, orders o
		case 12:
			return 9113219;
		// orders o, customer c
		case 24:
			return 7500000;
		// customer c, nation n2
		case 80:
			return 780401;
		// supplier s, lineitem l, orders o
		case 14:
			return 9113219;
		// supplier s, lineitem l, nation n1
		case 38:
			return 735318;
		// lineitem l, orders o, customer c
		case 28:
			return 9113219;
		// orders o, customer c, nation n2
		case 88:
			return 600753;
		// supplier s, lineitem l, orders o, customer c
		case 30:
			return 9113219;
		// supplier s, lineitem l, orders o, nation n1
		case 46:
			return 735318;
		// lineitem l, orders o, customer c, nation n2
		case 92:
			return 728431;
		// supplier s, lineitem l, orders o, customer c, nation n1
		case 62:
			return 735318;
		// supplier s, lineitem l, orders o, customer c, nation n2
		case 94:
			return 728431;
		// supplier s, lineitem l, orders o, customer c, nation n1, nation n2
		case 126:
			return 29340;
	};
}


// [part p, supplier s, lineitem l, orders o, customer c, nation n1, nation n2, region r, ]
double
get_truth_cardinality_tpch_5_query_11(int total_relids)
{
	switch (total_relids) {
		// part p
		case 2:
			return 6494;
		// supplier s
		case 4:
			return 50000;
		// lineitem l
		case 8:
			return 29999795;
		// orders o
		case 16:
			return 2277864;
		// customer c
		case 32:
			return 750000;
		// nation n1
		case 64:
			return 25;
		// nation n2
		case 128:
			return 25;
		// region r
		case 256:
			return 1;
		// part p, lineitem l
		case 10:
			return 194281;
		// supplier s, lineitem l
		case 12:
			return 29999795;
		// supplier s, nation n2
		case 132:
			return 50000;
		// lineitem l, orders o
		case 24:
			return 9113548;
		// orders o, customer c
		case 48:
			return 2277864;
		// customer c, nation n1
		case 96:
			return 750000;
		// nation n1, region r
		case 320:
			return 5;
		// part p, supplier s, lineitem l
		case 14:
			return 194281;
		// part p, lineitem l, orders o
		case 26:
			return 58885;
		// supplier s, lineitem l, orders o
		case 28:
			return 9113548;
		// supplier s, lineitem l, nation n2
		case 140:
			return 29999795;
		// lineitem l, orders o, customer c
		case 56:
			return 9113548;
		// orders o, customer c, nation n1
		case 112:
			return 2277864;
		// customer c, nation n1, region r
		case 352:
			return 149877;
		// part p, supplier s, lineitem l, orders o
		case 30:
			return 58885;
		// part p, supplier s, lineitem l, nation n2
		case 142:
			return 194281;
		// part p, lineitem l, orders o, customer c
		case 58:
			return 58885;
		// supplier s, lineitem l, orders o, customer c
		case 60:
			return 9113548;
		// supplier s, lineitem l, orders o, nation n2
		case 156:
			return 9113548;
		// lineitem l, orders o, customer c, nation n1
		case 120:
			return 9113548;
		// orders o, customer c, nation n1, region r
		case 368:
			return 454139;
		// part p, supplier s, lineitem l, orders o, customer c
		case 62:
			return 58885;
		// part p, supplier s, lineitem l, orders o, nation n2
		case 158:
			return 58885;
		// part p, lineitem l, orders o, customer c, nation n1
		case 122:
			return 58885;
		// supplier s, lineitem l, orders o, customer c, nation n1
		case 124:
			return 9113548;
		// supplier s, lineitem l, orders o, customer c, nation n2
		case 188:
			return 9113548;
		// lineitem l, orders o, customer c, nation n1, region r
		case 376:
			return 1817063;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1
		case 126:
			return 58885;
		// part p, supplier s, lineitem l, orders o, customer c, nation n2
		case 190:
			return 58885;
		// part p, lineitem l, orders o, customer c, nation n1, region r
		case 378:
			return 11830;
		// supplier s, lineitem l, orders o, customer c, nation n1, nation n2
		case 252:
			return 9113548;
		// supplier s, lineitem l, orders o, customer c, nation n1, region r
		case 380:
			return 1817063;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1, nation n2
		case 254:
			return 58885;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1, region r
		case 382:
			return 11830;
		// supplier s, lineitem l, orders o, customer c, nation n1, nation n2, region r
		case 508:
			return 1817063;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1, nation n2, region r
		case 510:
			return 11830;
	};
}

// [lineitem l, ]
double
get_truth_cardinality_tpch_10_query_0(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 58839715;
	};
}

// [customer c, orders o, lineitem l, nation n, ]
double
get_truth_cardinality_tpch_10_query_1(int total_relids)
{
	switch (total_relids) {
		// customer c
		case 2:
			return 1500000;
		// orders o
		case 4:
			return 554271;
		// lineitem l
		case 8:
			return 14808183;
		// nation n
		case 16:
			return 25;
		// customer c, orders o
		case 6:
			return 554271;
		// customer c, nation n
		case 18:
			return 1500000;
		// orders o, lineitem l
		case 12:
			return 1109536;
		// customer c, orders o, lineitem l
		case 14:
			return 1109536;
		// customer c, orders o, nation n
		case 22:
			return 554271;
		// customer c, orders o, lineitem l, nation n
		case 30:
			return 1109536;
	};
}

// [orders o, lineitem l, ]
double
get_truth_cardinality_tpch_10_query_2(int total_relids)
{
	switch (total_relids) {
		// orders o
		case 2:
			return 15000000;
		// lineitem l
		case 4:
			return 312477;
		// orders o, lineitem l
		case 6:
			return 312477;
	};
}

// [customer c, orders o, ]
double
get_truth_cardinality_tpch_10_query_3(int total_relids)
{
	switch (total_relids) {
		// customer c
		case 2:
			return 1500000;
		// orders o
		case 4:
			return 14837583;
		// customer c, orders o
		case 6:
			return 15337604;
	};
}

// [lineitem l, part p, ]
double
get_truth_cardinality_tpch_10_query_4(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 697562;
		// part p
		case 4:
			return 2000000;
		// lineitem l, part p
		case 6:
			return 697562;
	};
}

// [lineitem l, part p, ]
double
get_truth_cardinality_tpch_10_query_5(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 1327252;
		// part p
		case 4:
			return 4806;
		// lineitem l, part p
		case 6:
			return 1127;
	};
}

// [customer c, orders o, lineitem l, ]
double
get_truth_cardinality_tpch_10_query_6(int total_relids)
{
	switch (total_relids) {
		// customer c
		case 2:
			return 300276;
		// orders o
		case 4:
			return 7295710;
		// lineitem l
		case 8:
			return 32309285;
		// customer c, orders o
		case 6:
			return 1463205;
		// orders o, lineitem l
		case 12:
			return 1499231;
		// customer c, orders o, lineitem l
		case 14:
			return 302301;
	};
}

// [orders o, lineitem l, ]
double
get_truth_cardinality_tpch_10_query_7(int total_relids)
{
	switch (total_relids) {
		// orders o
		case 2:
			return 573669;
		// lineitem l
		case 4:
			return 37929348;
		// orders o, lineitem l
		case 6:
			return 526155;
	};
}

// [lineitem l, ]
double
get_truth_cardinality_tpch_10_query_9(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 1194558;
	};
}

// [supplier s, lineitem l, orders o, customer c, nation n1, nation n2, ]
double
get_truth_cardinality_tpch_10_query_10(int total_relids)
{
	switch (total_relids) {
		// supplier s
		case 2:
			return 100000;
		// lineitem l
		case 4:
			return 18230325;
		// orders o
		case 8:
			return 15000000;
		// customer c
		case 16:
			return 1500000;
		// nation n1
		case 32:
			return 2;
		// nation n2
		case 64:
			return 2;
		// supplier s, lineitem l
		case 6:
			return 18230325;
		// supplier s, nation n1
		case 34:
			return 103991;
		// lineitem l, orders o
		case 12:
			return 18230325;
		// orders o, customer c
		case 24:
			return 15000000;
		// customer c, nation n2
		case 80:
			return 1560236;
		// supplier s, lineitem l, orders o
		case 14:
			return 18230325;
		// supplier s, lineitem l, nation n1
		case 38:
			return 1451652;
		// lineitem l, orders o, customer c
		case 28:
			return 18230325;
		// orders o, customer c, nation n2
		case 88:
			return 1198017;
		// supplier s, lineitem l, orders o, customer c
		case 30:
			return 18230325;
		// supplier s, lineitem l, orders o, nation n1
		case 46:
			return 1451652;
		// lineitem l, orders o, customer c, nation n2
		case 92:
			return 1453282;
		// supplier s, lineitem l, orders o, customer c, nation n1
		case 62:
			return 1451652;
		// supplier s, lineitem l, orders o, customer c, nation n2
		case 94:
			return 1453282;
		// supplier s, lineitem l, orders o, customer c, nation n1, nation n2
		case 126:
			return 58173;
	};
}

// [part p, supplier s, lineitem l, orders o, customer c, nation n1, nation n2, region r, ]
double
get_truth_cardinality_tpch_10_query_11(int total_relids)
{
	switch (total_relids) {
		// part p
		case 2:
			return 13268;
		// supplier s
		case 4:
			return 100000;
		// lineitem l
		case 8:
			return 59986052;
		// orders o
		case 16:
			return 4557513;
		// customer c
		case 32:
			return 1500000;
		// nation n1
		case 64:
			return 25;
		// nation n2
		case 128:
			return 25;
		// region r
		case 256:
			return 1;
		// part p, lineitem l
		case 10:
			return 398031;
		// supplier s, lineitem l
		case 12:
			return 59986052;
		// supplier s, nation n2
		case 132:
			return 100000;
		// lineitem l, orders o
		case 24:
			return 18227506;
		// orders o, customer c
		case 48:
			return 4557513;
		// customer c, nation n1
		case 96:
			return 1500000;
		// nation n1, region r
		case 320:
			return 5;
		// part p, supplier s, lineitem l
		case 14:
			return 398031;
		// part p, lineitem l, orders o
		case 26:
			return 120566;
		// supplier s, lineitem l, orders o
		case 28:
			return 18227506;
		// supplier s, lineitem l, nation n2
		case 140:
			return 59986052;
		// lineitem l, orders o, customer c
		case 56:
			return 18227506;
		// orders o, customer c, nation n1
		case 112:
			return 4557513;
		// customer c, nation n1, region r
		case 352:
			return 299436;
		// part p, supplier s, lineitem l, orders o
		case 30:
			return 120566;
		// part p, supplier s, lineitem l, nation n2
		case 142:
			return 398031;
		// part p, lineitem l, orders o, customer c
		case 58:
			return 120566;
		// supplier s, lineitem l, orders o, customer c
		case 60:
			return 18227506;
		// supplier s, lineitem l, orders o, nation n2
		case 156:
			return 18227506;
		// lineitem l, orders o, customer c, nation n1
		case 120:
			return 18227506;
		// orders o, customer c, nation n1, region r
		case 368:
			return 910360;
		// part p, supplier s, lineitem l, orders o, customer c
		case 62:
			return 120566;
		// part p, supplier s, lineitem l, orders o, nation n2
		case 158:
			return 120566;
		// part p, lineitem l, orders o, customer c, nation n1
		case 122:
			return 120566;
		// supplier s, lineitem l, orders o, customer c, nation n1
		case 124:
			return 18227506;
		// supplier s, lineitem l, orders o, customer c, nation n2
		case 188:
			return 18227506;
		// lineitem l, orders o, customer c, nation n1, region r
		case 376:
			return 3638929;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1
		case 126:
			return 120566;
		// part p, supplier s, lineitem l, orders o, customer c, nation n2
		case 190:
			return 120566;
		// part p, lineitem l, orders o, customer c, nation n1, region r
		case 378:
			return 23793;
		// supplier s, lineitem l, orders o, customer c, nation n1, nation n2
		case 252:
			return 18227506;
		// supplier s, lineitem l, orders o, customer c, nation n1, region r
		case 380:
			return 3638929;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1, nation n2
		case 254:
			return 120566;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1, region r
		case 382:
			return 23793;
		// supplier s, lineitem l, orders o, customer c, nation n1, nation n2, region r
		case 508:
			return 3638929;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1, nation n2, region r
		case 510:
			return 23793;
	};
}

// [lineitem l, ]
double
get_truth_cardinality_tpch_50_query_0(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 294267666;
	};
}

// [customer c, orders o, lineitem l, nation n, ]
double
get_truth_cardinality_tpch_50_query_1(int total_relids)
{
	switch (total_relids) {
		// customer c
		case 2:
			return 7500000;
		// orders o
		case 4:
			return 2773113;
		// lineitem l
		case 8:
			return 74026400;
		// nation n
		case 16:
			return 25;
		// customer c, orders o
		case 6:
			return 2773113;
		// customer c, nation n
		case 18:
			return 7500000;
		// orders o, lineitem l
		case 12:
			return 5547683;
		// customer c, orders o, lineitem l
		case 14:
			return 5547683;
		// customer c, orders o, nation n
		case 22:
			return 2773113;
		// customer c, orders o, lineitem l, nation n
		case 30:
			return 5547683;
	};
}

// [orders o, lineitem l, ]
double
get_truth_cardinality_tpch_50_query_2(int total_relids)
{
	switch (total_relids) {
		// orders o
		case 2:
			return 75000000;
		// lineitem l
		case 4:
			return 1559781;
		// orders o, lineitem l
		case 6:
			return 1559781;
	};
}

// [customer c, orders o, ]
double
get_truth_cardinality_tpch_50_query_3(int total_relids)
{
	switch (total_relids) {
		// customer c
		case 2:
			return 7500000;
		// orders o
		case 4:
			return 74190467;
		// customer c, orders o
		case 6:
			return 76690585;
	};
}

// [lineitem l, part p, ]
double
get_truth_cardinality_tpch_50_query_4(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 3490677;
		// part p
		case 4:
			return 10000000;
		// lineitem l, part p
		case 6:
			return 3490677;
	};
}

// [lineitem l, part p, ]
double
get_truth_cardinality_tpch_50_query_5(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 6643705;
		// part p
		case 4:
			return 23772;
		// lineitem l, part p
		case 6:
			return 5620;
	};
}

// [customer c, orders o, lineitem l, ]
double
get_truth_cardinality_tpch_50_query_6(int total_relids)
{
	switch (total_relids) {
		// customer c
		case 2:
			return 1500036;
		// orders o
		case 4:
			return 36468345;
		// lineitem l
		case 8:
			return 161620518;
		// customer c, orders o
		case 6:
			return 7297414;
		// orders o, lineitem l
		case 12:
			return 7487312;
		// customer c, orders o, lineitem l
		case 14:
			return 1497192;
	};
}

// [orders o, lineitem l, ]
double
get_truth_cardinality_tpch_50_query_7(int total_relids)
{
	switch (total_relids) {
		// orders o
		case 2:
			return 2868355;
		// lineitem l
		case 4:
			return 189670348;
		// orders o, lineitem l
		case 6:
			return 2630055;
	};
}

// [lineitem l, ]
double
get_truth_cardinality_tpch_50_query_9(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 5956875;
	};
}

// [supplier s, lineitem l, orders o, customer c, nation n1, nation n2, ]
double
get_truth_cardinality_tpch_50_query_10(int total_relids)
{
	switch (total_relids) {
		// supplier s
		case 2:
			return 500000;
		// lineitem l
		case 4:
			return 91146235;
		// orders o
		case 8:
			return 75000000;
		// customer c
		case 16:
			return 7500000;
		// nation n1
		case 32:
			return 2;
		// nation n2
		case 64:
			return 2;
		// supplier s, lineitem l
		case 6:
			return 91146235;
		// supplier s, nation n1
		case 34:
			return 519822;
		// lineitem l, orders o
		case 12:
			return 91146235;
		// orders o, customer c
		case 24:
			return 75000000;
		// customer c, nation n2
		case 80:
			return 7800304;
		// supplier s, lineitem l, orders o
		case 14:
			return 91146235;
		// supplier s, lineitem l, nation n1
		case 38:
			return 7240725;
		// lineitem l, orders o, customer c
		case 28:
			return 91146235;
		// orders o, customer c, nation n2
		case 88:
			return 6007674;
		// supplier s, lineitem l, orders o, customer c
		case 30:
			return 91146235;
		// supplier s, lineitem l, orders o, nation n1
		case 46:
			return 7240725;
		// lineitem l, orders o, customer c, nation n2
		case 92:
			return 7289418;
		// supplier s, lineitem l, orders o, customer c, nation n1
		case 62:
			return 7240725;
		// supplier s, lineitem l, orders o, customer c, nation n2
		case 94:
			return 7289418;
		// supplier s, lineitem l, orders o, customer c, nation n1, nation n2
		case 126:
			return 289596;
	};
}

// [part p, supplier s, lineitem l, orders o, customer c, nation n1, nation n2, region r, ]
double
get_truth_cardinality_tpch_50_query_11(int total_relids)
{
	switch (total_relids) {
		// part p
		case 2:
			return 66692;
		// supplier s
		case 4:
			return 500000;
		// lineitem l
		case 8:
			return 300005811;
		// orders o
		case 16:
			return 22789750;
		// customer c
		case 32:
			return 7500000;
		// nation n1
		case 64:
			return 25;
		// nation n2
		case 128:
			return 25;
		// region r
		case 256:
			return 1;
		// part p, lineitem l
		case 10:
			return 2000806;
		// supplier s, lineitem l
		case 12:
			return 300005811;
		// supplier s, nation n2
		case 132:
			return 500000;
		// lineitem l, orders o
		case 24:
			return 91152351;
		// orders o, customer c
		case 48:
			return 22789750;
		// customer c, nation n1
		case 96:
			return 7500000;
		// nation n1, region r
		case 320:
			return 5;
		// part p, supplier s, lineitem l
		case 14:
			return 2000806;
		// part p, lineitem l, orders o
		case 26:
			return 608007;
		// supplier s, lineitem l, orders o
		case 28:
			return 91152351;
		// supplier s, lineitem l, nation n2
		case 140:
			return 300005811;
		// lineitem l, orders o, customer c
		case 56:
			return 91152351;
		// orders o, customer c, nation n1
		case 112:
			return 22789750;
		// customer c, nation n1, region r
		case 352:
			return 1500618;
		// part p, supplier s, lineitem l, orders o
		case 30:
			return 608007;
		// part p, supplier s, lineitem l, nation n2
		case 142:
			return 2000806;
		// part p, lineitem l, orders o, customer c
		case 58:
			return 608007;
		// supplier s, lineitem l, orders o, customer c
		case 60:
			return 91152351;
		// supplier s, lineitem l, orders o, nation n2
		case 156:
			return 91152351;
		// lineitem l, orders o, customer c, nation n1
		case 120:
			return 91152351;
		// orders o, customer c, nation n1, region r
		case 368:
			return 4559074;
		// part p, supplier s, lineitem l, orders o, customer c
		case 62:
			return 608007;
		// part p, supplier s, lineitem l, orders o, nation n2
		case 158:
			return 608007;
		// part p, lineitem l, orders o, customer c, nation n1
		case 122:
			return 608007;
		// supplier s, lineitem l, orders o, customer c, nation n1
		case 124:
			return 91152351;
		// supplier s, lineitem l, orders o, customer c, nation n2
		case 188:
			return 91152351;
		// lineitem l, orders o, customer c, nation n1, region r
		case 376:
			return 18229314;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1
		case 126:
			return 608007;
		// part p, supplier s, lineitem l, orders o, customer c, nation n2
		case 190:
			return 608007;
		// part p, lineitem l, orders o, customer c, nation n1, region r
		case 378:
			return 121471;
		// supplier s, lineitem l, orders o, customer c, nation n1, nation n2
		case 252:
			return 91152351;
		// supplier s, lineitem l, orders o, customer c, nation n1, region r
		case 380:
			return 18229314;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1, nation n2
		case 254:
			return 608007;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1, region r
		case 382:
			return 121471;
		// supplier s, lineitem l, orders o, customer c, nation n1, nation n2, region r
		case 508:
			return 18229314;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1, nation n2, region r
		case 510:
			return 121471;
	};
}

// [lineitem l, ]
double
get_truth_cardinality_tpch_100_query_0(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 588567723;
	};
}

// [customer c, orders o, lineitem l, nation n, ]
double
get_truth_cardinality_tpch_100_query_1(int total_relids)
{
	switch (total_relids) {
		// customer c
		case 2:
			return 15000000;
		// orders o
		case 4:
			return 5549731;
		// lineitem l
		case 8:
			return 148067261;
		// nation n
		case 16:
			return 25;
		// customer c, orders o
		case 6:
			return 5549731;
		// customer c, nation n
		case 18:
			return 15000000;
		// orders o, lineitem l
		case 12:
			return 11099795;
		// customer c, orders o, lineitem l
		case 14:
			return 11099795;
		// customer c, orders o, nation n
		case 22:
			return 5549731;
		// customer c, orders o, lineitem l, nation n
		case 30:
			return 11099795;
	};
}

// [orders o, lineitem l, ]
double
get_truth_cardinality_tpch_100_query_2(int total_relids)
{
	switch (total_relids) {
		// orders o
		case 2:
			return 150000000;
		// lineitem l
		case 4:
			return 3115563;
		// orders o, lineitem l
		case 6:
			return 3115563;
	};
}

// [customer c, orders o, ]
double
get_truth_cardinality_tpch_100_query_3(int total_relids)
{
	switch (total_relids) {
		// customer c
		case 2:
			return 15000000;
		// orders o
		case 4:
			return 148382363;
		// customer c, orders o
		case 6:
			return 153382546;
	};
}

// [lineitem l, part p, ]
double
get_truth_cardinality_tpch_100_query_4(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 6982932;
		// part p
		case 4:
			return 20000000;
		// lineitem l, part p
		case 6:
			return 6982932;
	};
}

// [lineitem l, part p, ]
double
get_truth_cardinality_tpch_100_query_5(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 13287736;
		// part p
		case 4:
			return 47809;
		// lineitem l, part p
		case 6:
			return 11267;
	};
}

// [customer c, orders o, lineitem l, ]
double
get_truth_cardinality_tpch_100_query_6(int total_relids)
{
	switch (total_relids) {
		// customer c
		case 2:
			return 3000188;
		// orders o
		case 4:
			return 72936705;
		// lineitem l
		case 8:
			return 323245318;
		// customer c, orders o
		case 6:
			return 14580361;
		// orders o, lineitem l
		case 12:
			return 14960884;
		// customer c, orders o, lineitem l
		case 14:
			return 2987973;
	};
}

// [orders o, lineitem l, ]
double
get_truth_cardinality_tpch_100_query_7(int total_relids)
{
	switch (total_relids) {
		// orders o
		case 2:
			return 5735952;
		// lineitem l
		case 4:
			return 379356474;
		// orders o, lineitem l
		case 6:
			return 5259668;
	};
}

// [lineitem l, ]
double
get_truth_cardinality_tpch_100_query_9(int total_relids)
{
	switch (total_relids) {
		// lineitem l
		case 2:
			return 11918082;
	};
}

// [supplier s, lineitem l, orders o, customer c, nation n1, nation n2, ]
double
get_truth_cardinality_tpch_100_query_10(int total_relids)
{
	switch (total_relids) {
		// supplier s
		case 2:
			return 1000000;
		// lineitem l
		case 4:
			return 182301190;
		// orders o
		case 8:
			return 150000000;
		// customer c
		case 16:
			return 15000000;
		// nation n1
		case 32:
			return 2;
		// nation n2
		case 64:
			return 2;
		// supplier s, lineitem l
		case 6:
			return 182301190;
		// supplier s, nation n1
		case 34:
			return 1039641;
		// lineitem l, orders o
		case 12:
			return 182301190;
		// orders o, customer c
		case 24:
			return 150000000;
		// customer c, nation n2
		case 80:
			return 15601133;
		// supplier s, lineitem l, orders o
		case 14:
			return 182301190;
		// supplier s, lineitem l, nation n1
		case 38:
			return 14475636;
		// lineitem l, orders o, customer c
		case 28:
			return 182301190;
		// orders o, customer c, nation n2
		case 88:
			return 12018463;
		// supplier s, lineitem l, orders o, customer c
		case 30:
			return 182301190;
		// supplier s, lineitem l, orders o, nation n1
		case 46:
			return 14475636;
		// lineitem l, orders o, customer c, nation n2
		case 92:
			return 14606902;
		// supplier s, lineitem l, orders o, customer c, nation n1
		case 62:
			return 14475636;
		// supplier s, lineitem l, orders o, customer c, nation n2
		case 94:
			return 14606902;
		// supplier s, lineitem l, orders o, customer c, nation n1, nation n2
		case 126:
			return 580418;
	};
}

// [part p, supplier s, lineitem l, orders o, customer c, nation n1, nation n2, region r, ]
double
get_truth_cardinality_tpch_100_query_11(int total_relids)
{
	switch (total_relids) {
		// part p
		case 2:
			return 133738;
		// supplier s
		case 4:
			return 1000000;
		// lineitem l
		case 8:
			return 600037902;
		// orders o
		case 16:
			return 45574624;
		// customer c
		case 32:
			return 15000000;
		// nation n1
		case 64:
			return 25;
		// nation n2
		case 128:
			return 25;
		// region r
		case 256:
			return 1;
		// part p, lineitem l
		case 10:
			return 4011571;
		// supplier s, lineitem l
		case 12:
			return 600037902;
		// supplier s, nation n2
		case 132:
			return 1000000;
		// lineitem l, orders o
		case 24:
			return 182318228;
		// orders o, customer c
		case 48:
			return 45574624;
		// customer c, nation n1
		case 96:
			return 15000000;
		// nation n1, region r
		case 320:
			return 5;
		// part p, supplier s, lineitem l
		case 14:
			return 4011571;
		// part p, lineitem l, orders o
		case 26:
			return 1219141;
		// supplier s, lineitem l, orders o
		case 28:
			return 182318228;
		// supplier s, lineitem l, nation n2
		case 140:
			return 600037902;
		// lineitem l, orders o, customer c
		case 56:
			return 182318228;
		// orders o, customer c, nation n1
		case 112:
			return 45574624;
		// customer c, nation n1, region r
		case 352:
			return 3001905;
		// part p, supplier s, lineitem l, orders o
		case 30:
			return 1219141;
		// part p, supplier s, lineitem l, nation n2
		case 142:
			return 4011571;
		// part p, lineitem l, orders o, customer c
		case 58:
			return 1219141;
		// supplier s, lineitem l, orders o, customer c
		case 60:
			return 182318228;
		// supplier s, lineitem l, orders o, nation n2
		case 156:
			return 182318228;
		// lineitem l, orders o, customer c, nation n1
		case 120:
			return 182318228;
		// orders o, customer c, nation n1, region r
		case 368:
			return 9121411;
		// part p, supplier s, lineitem l, orders o, customer c
		case 62:
			return 1219141;
		// part p, supplier s, lineitem l, orders o, nation n2
		case 158:
			return 1219141;
		// part p, lineitem l, orders o, customer c, nation n1
		case 122:
			return 1219141;
		// supplier s, lineitem l, orders o, customer c, nation n1
		case 124:
			return 182318228;
		// supplier s, lineitem l, orders o, customer c, nation n2
		case 188:
			return 182318228;
		// lineitem l, orders o, customer c, nation n1, region r
		case 376:
			return 36494308;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1
		case 126:
			return 1219141;
		// part p, supplier s, lineitem l, orders o, customer c, nation n2
		case 190:
			return 1219141;
		// part p, lineitem l, orders o, customer c, nation n1, region r
		case 378:
			return 244211;
		// supplier s, lineitem l, orders o, customer c, nation n1, nation n2
		case 252:
			return 182318228;
		// supplier s, lineitem l, orders o, customer c, nation n1, region r
		case 380:
			return 36494308;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1, nation n2
		case 254:
			return 1219141;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1, region r
		case 382:
			return 244211;
		// supplier s, lineitem l, orders o, customer c, nation n1, nation n2, region r
		case 508:
			return 36494308;
		// part p, supplier s, lineitem l, orders o, customer c, nation n1, nation n2, region r
		case 510:
			return 244211;
	};
}





