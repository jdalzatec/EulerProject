def prime_factors(num):
    factors = set()
    div = 2
    while (num != 1):
        if num % div == 0:
            factors.add(div)
            num = num // div
        else:
            div += 1

    return factors


def main():
    number = 600851475143

    factors = prime_factors(number)
    print(factors)

if __name__ == '__main__':
    main()