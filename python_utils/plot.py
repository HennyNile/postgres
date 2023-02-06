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
    plt.bar([i + 0.3 for i in range(query_number)], cold_tc_running_time, lw=0.5, fc="b", width=0.3,
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


def plot_job_result():
    cold_ce_running_time = [557.447, 6689.726, 10943.491, 242.003, 182.166, 195.580, 7443.433, 2493.824, 730.116,
                            447.867, 41.999, 3737.010, 10393.875, 4176.605, 2466.442, 882.822, 23736.662, 21986.909,
                            1064.909, 56373.744, 140.512, 3879.758, 529.727, 1290.239, 3477.888, 1888.599]

    hot_ce_running_time = [65.5895, 551.31, 188.7145, 119.67075, 103.07025, 21.539, 923.24175, 1193.856, 218.611,
                           348.312, 36.21825, 209.17725, 1812.219, 356.89725, 263.381, 245.6105, 11169.87475,
                           3841.55275, 219.968, 8524.34125, 83.17575, 537.7995, 271.062, 604.90825, 2278.51425,
                           1278.94025]

    cold_tc_running_time = [557.447, 1669.060, 363.865, 156.113, 274.089, 713.712, 28827.464, 4575.129, 677.283,
                            5974.509, 73.297, 418.228, 1214.898, 426.013, 875.020, 733.001, 27669.330, 16371.025,
                            319.401, 35754.034, 257.376, 6508.788, 2121.671, 895.430, 1867.591, 610.298]

    hot_tc_running_time = [67.0735, 300.84325, 171.37975, 107.064, 97.4045, 15.378, 201.1495, 260.208, 255.4635,
                           388.9295, 31.5225, 189.04075, 415.9255, 385.497, 298.40175, 230.846, 3469.473, 3310.2895,
                           221.3305, 2587.873, 68.267, 520.65175, 258.1245, 324.67675, 917.29575, 626.73925]
    query_number = 26

    plt.plot()
    plt.bar([1 + i - 0.15 for i in range(query_number)], cold_ce_running_time, lw=0.5, fc="r", width=0.3,
            label="traditional ce")
    plt.bar([1 + i + 0.15 for i in range(query_number)], cold_tc_running_time, lw=0.5, fc="b", width=0.3,
            label="truth cardinality")

    plt.xticks(range(1, query_number+1, 1))
    plt.title("Performance of JOB with Cold Data")
    plt.xlabel("Query Order")
    plt.ylabel("Running Time (ms)")
    plt.legend()
    plt.show()

    plt.plot()
    plt.bar([1 + i - 0.15 for i in range(query_number)], hot_ce_running_time, lw=0.5, fc="r", width=0.3,
            label="traditional ce")
    plt.bar([1 + i + 0.15 for i in range(query_number)], hot_tc_running_time, lw=0.5, fc="b", width=0.3,
            label="truth cardinality")

    # plt.xticks(range(1, query_number+1, 1))
    x_axis = ['a' for _ in range(1, query_number+1, 1)]
    xi = list(range(len(x_axis)))
    plt.xticks(xi, x_axis)
    plt.title("Performance of JOB with Hot Data")
    plt.xlabel("Query Order")
    plt.ylabel("Running Time (ms)")
    plt.legend()
    plt.show()


if __name__ == '__main__':
    # plot_ssb_1_result()
    plot_job_result()