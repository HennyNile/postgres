from matplotlib import pyplot as plt


def plot_cost_running_time(cost_list, running_time_list, title, output_filepath):
    plt.figure()
    plt.scatter(cost_list, running_time_list)
    plt.title(title)
    plt.xlabel('Cost')
    plt.ylabel('Running time / ms')
    plt.show()
    plt.savefig(output_filepath)


if __name__ == '__main__':
    plot_cost_running_time([1], [1], 'test', 'test')
