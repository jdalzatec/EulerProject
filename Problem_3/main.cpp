#include <iostream>
#include <vector>
typedef unsigned long Int;

// This code works but is VERY ineficient. 

bool isPrime(Int x)
{
    if (x == 0 || x == 1 || ((x != 2) && (x % 2 == 0)))
        return false;

    Int den = 3;
    while (den < x / 2)
    {
        if (x % den == 0)
            return false;
        den += 2;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    Int number = 600851475143;

    for (Int i = number / 2; i > 2; i -= 2)
    {
        if (number % i == 0 && isPrime(i))
        {
            std::cout << i << std::endl;
            return 0;
        }
    }   

    return 0;
}