#include <iostream>

bool isPrime(int n)
{
    if (n <= 0 || n == 1 || (n != 2 && n % 2 == 0))
        return false;

    for (int i = 3; i < n / 2 + 1; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int max_n = 0;
    int max_a, max_b;

    for (int a = -999; a < 1000; a++)
    {
        for (int b = -1000; b <= 1000; b++)
        {
            int n = 0;
            while (isPrime(n * n + a * n + b))
                n++;
            if (n > max_n)
            {
                max_n = n;
                max_a = a;
                max_b = b;
            }
        }
    }
    std::cout << max_a * max_b << std::endl;

    // time 0.142 s
    return 0;
}