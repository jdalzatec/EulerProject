import numpy
from collections import defaultdict


def main():
    limit = 1000000
    count = defaultdict(int)

    maxi_num = 1
    maxi_val = 0
    for num in range(2, limit + 1):
        num_copy = num
        suma = 0
        while num_copy > 1:
            if num_copy in count:
                suma += count[num_copy]
                break
            else:
                suma += 1

            if (num_copy % 2 == 0):
                num_copy = num_copy // 2
            else:
                num_copy = 3 * num_copy + 1
        count[num] = suma

        if suma > maxi_val:
            maxi_num = num
            maxi_val = suma

    print(maxi_num, maxi_val)


if __name__ == '__main__':
    main()