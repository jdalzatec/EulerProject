from tqdm import tqdm
import numpy 
from numba import njit

@njit
def isAbundant(n):
    suma = 0
    for i in range(1, n // 2 + 1):
        if (n % i == 0):
            suma += i
            if suma > n:
                return True
    return False

@njit
def isSum(num, abundant):

    indexes, = numpy.where(abundant < num)
    for i in indexes:
        for j in indexes:
            if (abundant[i] + abundant[j] == num):
                return True

    return False

def main():

    abundant_numbers = list()
    for i in tqdm(range(28123)):
        if isAbundant(i):
            abundant_numbers.append(i)

    abundant_numbers = numpy.array(abundant_numbers)

    total = 0
    for i in tqdm(range(28123)):
        if not isSum(i, abundant_numbers):
            total += i

    print (total)

if __name__ == '__main__':
    main()