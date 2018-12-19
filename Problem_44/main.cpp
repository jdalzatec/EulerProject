#include <iostream>
#include <cmath>

bool isPentagonal(int number)
{
    double n = (1. / 6.) * (std::sqrt(24. * double(number) + 1.) + 1.);
    return (n == int(n));
}

size_t pentagonal(size_t n)
{
    return n * (3 * n - 1) / 2;
}


int main(int argc, char const *argv[])
{
    int limit = 2200;
    
    /*
    I did not like this problem. The limit variable was just a wild guess.
    I ran it with limit=100000 and it printed out the same single result,
    which just happens to be the correct one.
    */

    for (int j = 1; j <= limit; ++j)
    {
        for (int k = j + 1; k <= limit + 1; ++k)
        {
            int suma = pentagonal(j) + pentagonal(k);
            int diff = std::abs(int(pentagonal(k) - pentagonal(j)));

            if (isPentagonal(suma) && isPentagonal(diff))
                std::cout << diff << std::endl;
        }
    }

    return 0;
}