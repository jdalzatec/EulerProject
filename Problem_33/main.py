from itertools import product
from fractions import Fraction


def isCuriousFraction(numerator, denominator):
    num_d1 = numerator % 10
    num_d2 = (numerator - numerator % 10) // 10
    den_d1 = denominator % 10
    den_d2 = (denominator - denominator % 10) // 10

    fractions = []
    if num_d1 == den_d1 and den_d2 != 0 and num_d1 != 0 and den_d1 != 0:
        fractions.append(Fraction(num_d2, den_d2))
    if num_d1 == den_d2 and den_d1 != 0 and num_d1 != 0 and den_d2 != 0:
        fractions.append(Fraction(num_d2, den_d1))
    if num_d2 == den_d1 and den_d2 != 0 and num_d2 != 0 and den_d1 != 0:
        fractions.append(Fraction(num_d1, den_d2))
    if num_d2 == den_d2 and den_d1 != 0 and num_d2 != 0 and den_d2 != 0:
        fractions.append(Fraction(num_d1, den_d1))

    equals = [f == Fraction(numerator, denominator) for f in fractions]
    return any(equals)



def main():
    fractions = []
    for denominator in range(99, 9, -1):
        for numerator in range(denominator - 1, 9, -1):
            if isCuriousFraction(numerator, denominator):
                fractions.append(Fraction(numerator, denominator))
    
    prod = 1
    for f in fractions:
        prod *= f    
    print(prod)                


if __name__ == '__main__':
    main()