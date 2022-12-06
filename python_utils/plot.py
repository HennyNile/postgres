import matplotlib.pyplot as plt


def plot_6joins_reuslt():
    cold_ce_running_time = [119.068, 746.773, 3173.767, 25.398, 473.481, 48.613, 166.609, 159.751, 660.623]
    hot_ce_running_time = [100.821, 739.86, 3092.64, 24.4685, 382.434, 32.607, 164.7705, 137.0295, 624.577]

    cold_tc_running_time = [165.966, 746.464, 1356.732, 15.674, 350.449, 14.749, 154.4360, 145.746, 227.749]
    hot_tc_running_time = [127.829, 746.4105, 578.561, 9.353, 294.767, 20.0995, 108.732, 124.512, 145.4335]
    query_number = 9

    plt.plot()
    plt.bar([i for i in range(query_number)], cold_ce_running_time, lw=0.5, fc="r", width=0.3,
            label="traditional ce")
    plt.bar([i+0.3 for i in range(query_number)], cold_tc_running_time, lw=0.5, fc="b", width=0.3,
            label="truth cardinality")

    plt.title("Performance with Cold Data")
    plt.xlabel("Query Order")
    plt.ylabel("Running Time (ms)")
    plt.legend()
    plt.show()

    plt.plot()
    plt.bar([i for i in range(query_number)], hot_ce_running_time, lw=0.5, fc="r", width=0.3,
            label="traditional ce")
    plt.bar([i + 0.3 for i in range(query_number)], hot_tc_running_time, lw=0.5, fc="b", width=0.3,
            label="truth cardinality")

    plt.title("Performance with Hot Data")
    plt.xlabel("Query Order")
    plt.ylabel("Running Time (ms)")
    plt.legend()
    plt.show()


def plot_ssb_1_result():
    cold_ce_running_time = [802.726, 798.000, 755.848, 1198.420, 1275.379, 1012.071, 1530.125, 1116.929, 1092.621,
                            1122.140, 1504.003, 1567.035, 1216.179]
    hot_ce_running_time = [804.9045, 766.0685, 796.072, 1367.886, 1172.349, 983.897, 1463.4475, 1148.706, 1026.211,
                           977.3495, 1496.534, 1517.717, 1084.2515]

    cold_tc_running_time = [926.087, 757.208, 738.538, 1299.499, 1396.635, 910.273, 1458.137, 975.305, 936.445, 864.001,
                            1720.893, 1477.483, 1234.262]
    hot_tc_running_time = [879.2365, 738.231, 779.6525, 1303.729, 1034.189, 976.806, 1431.0915, 1036.4855, 885.458,
                           869.4495, 1592.023, 1301.894, 998.2915]
    query_number = 13

    plt.plot()
    plt.bar([i - 0.15 for i in range(query_number)], cold_ce_running_time, lw=0.5, fc="r", width=0.3,
            label="traditional ce")
    plt.bar([i + 0.15 for i in range(query_number)], cold_tc_running_time, lw=0.5, fc="b", width=0.3,
            label="truth cardinality")

    plt.title("Performance with Cold Data")
    plt.xlabel("Query Order")
    plt.ylabel("Running Time (ms)")
    plt.legend()
    plt.show()

    plt.plot()
    plt.bar([i - 0.15 for i in range(query_number)], hot_ce_running_time, lw=0.5, fc="r", width=0.3,
            label="traditional ce")
    plt.bar([i + 0.15 for i in range(query_number)], hot_tc_running_time, lw=0.5, fc="b", width=0.3,
            label="truth cardinality")

    plt.xticks(range(1, 13, 1))

    plt.title("Performance with Hot Data")
    plt.xlabel("Query Order")
    plt.ylabel("Running Time (ms)")
    plt.legend()
    plt.show()


if __name__ == '__main__':
    plot_ssb_1_result()
