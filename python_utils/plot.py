import matplotlib.pyplot as plt

if __name__ == '__main__':
    cold_ce_running_time = [119.068, 746.773, 3173.767, 25.398, 473.481, 48.613, 166.609, 159.751, 660.623]
    hot_ce_running_time = [100.821, 739.86, 3092.64, 24.4685, 382.434, 32.607, 164.7705, 137.0295, 624.577]

    cold_tc_running_time = [165.966, 746.464, 1356.732, 15.674, 350.449, 14.749, 154.4360, 145.746, 227.749]
    hot_tc_running_time = [127.829, 746.4105, 578.561, 9.353, 294.767, 20.0995, 108.732, 124.512, 145.4335]

    plt.plot()
    plt.bar([i for i in range(9)], cold_ce_running_time, lw=0.5, fc="r", width=0.3,
            label="traditional ce")
    plt.bar([i+0.3 for i in range(9)], cold_tc_running_time, lw=0.5, fc="b", width=0.3,
            label="truth cardinality")

    plt.title("Performance with Cold Data")
    plt.xlabel("Query Order")
    plt.ylabel("Running Time (ms)")
    plt.legend()
    plt.show()

    plt.plot()
    plt.bar([i for i in range(9)], hot_ce_running_time, lw=0.5, fc="r", width=0.3,
            label="traditional ce")
    plt.bar([i + 0.3 for i in range(9)], hot_tc_running_time, lw=0.5, fc="b", width=0.3,
            label="truth cardinality")

    plt.title("Performance with Hot Data")
    plt.xlabel("Query Order")
    plt.ylabel("Running Time (ms)")
    plt.legend()
    plt.show()
