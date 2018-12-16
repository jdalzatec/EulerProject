from functools import reduce
from math import factorial

def main():
    num = 100
    value = factorial(num)
    suma = reduce(lambda x, y: int(x) + int(y), str(value))
    print(suma)


if __name__ == '__main__':
    main()