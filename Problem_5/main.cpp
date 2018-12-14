#include <iostream>
#include <algorithm>
#include <vector>

bool allDivisible(int n, int limit)
{
    for (int i = 1; i <= limit; ++i)
    {
        if (n % i != 0)
            return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    unsigned int number = 20;

    while (!allDivisible(number, 20))
        number += 20;

    std::cout << number << std::endl;

    return 0;
}