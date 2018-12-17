import numpy

def isPrime(number):

    if number == 2:
        return True

    if number % 2 == 0:
        return False

    elif number <= 1:
        return False

    sqr = int(numpy.sqrt(number)) + 1

    for divisor in range(3, sqr, 2):
        if number % divisor == 0:
            return False
    return True

def main():

    primes = []
    max_index = 10001
    i = 3
    n = 1

    while (n < max_index):
        if (isPrime(i)):
            primes.append(i)
            n += 1
        i += 1
        
    primes = numpy.array(primes)
    print(primes[max_index - 2])


if __name__ == '__main__':
    main()