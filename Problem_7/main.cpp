#include <iostream>

bool isPrime(int number)
{
    if (number == 2)
        return true;

    if  (number % 2 == 0)
        return false;

    for (int i = 3; i <= number / 3; i+=2)
    {
        if (number % i == 0)
            return false;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    int amount = 10001;

    // taking into account that the first prime number is 2 and
    // the other are odd.
    int count = 1;
    int i = 3;
    while (count < amount)
    {
        if (isPrime(i))
            count++;
        i += 2;
    }

    std::cout << (i - 2) << std::endl;

    return 0;
}