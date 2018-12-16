import numpy
from numba import njit


@njit
def get_sum_primes(limit):
    # I am discarding the 2, thus, I need to add it later
    numbers = numpy.arange(3, limit + 1, 2)
    suma = 0
    while len(numbers) > 0:
        suma += numbers[0]
        numbers = numbers[numbers % numbers[0] != 0]

    return suma + 2

def main():
    # run the function in order to compile the function
    get_sum_primes(10)

    # thus, run for the real value [Finished in 75.2s]
    print(get_sum_primes(2000000))

if __name__ == '__main__':
    main()