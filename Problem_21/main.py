def d(n):

    factors = list()
    for i in range(1, n):
            if n % i == 0:
                factors.append(i)
    return (sum(factors))

def amicable(n, sum_):

    if n != sum_:
        if (d(n) == sum_ and d(sum_) == n):
            return True
    return False


def main():

    max_number = 10000
    amicable_numbers = list()

    for i in range(1, max_number):
        if amicable(i, d(i)):
            amicable_numbers.append(i)
            
    print(sum(amicable_numbers))

if __name__ == '__main__':
    main()