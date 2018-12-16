#include <iostream>

bool isPrime(size_t number)
{
    if (number == 2)
        return true;

    if  (number % 2 == 0)
        return false;

    for (size_t i = 3; i <= number / 3; i+=2)
    {
        if (number % i == 0)
            return false;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    size_t amount = 10001;

    // taking into account that the first prime number is 2 and
    // the other are odd.
    size_t count = 1;
    size_t i = 3;
    while (count < amount)
    {
        if (isPrime(i))
            count++;
        i += 2;
    }

    std::cout << (i - 2) << std::endl;

    return 0;
}