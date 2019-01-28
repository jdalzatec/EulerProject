#include <iostream>

int triangle(int number)
{
    if (number == 1)
        return 1;
    return number + triangle(number - 1);
}

int countDivisors(int number)
{
    int divisors = 2;
    for (int i = number / 2; i > 1; i--)
    {
        if (number % i == 0)
            divisors++;
    }

    return divisors;
}

int main(int argc, char const *argv[])
{
    int n = 3;
    int i = 1;
    int limit = 500;

    while (countDivisors(triangle(n)) <= limit)
    // while (n < 20)
    {
        // std::cout << n << " " << i << " " << triangle(n) << std::endl;
        if (i % 2 == 0)
            n += 3;
        else
            n++;
        i++;        
    }

    std::cout << triangle(n) << std::endl;
    return 0;
}

// time 189.01 s