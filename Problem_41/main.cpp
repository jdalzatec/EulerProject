#include <iostream>
#include <string>

bool isPrime(int number)
{
    if (number <= 1 || (number != 2 && number % 2 == 0))
        return false;

    for (int i = 3; i < number / 3 + 1; i += 2)
    {
        if (number % i == 0)
            return false;
    }

    return true;
}

bool isPandigital(std::string number) 
{   
    for (int d = 1; d <= number.size(); d++)
    {
        std::string digit = std::to_string(d);
        if (number.find(digit) == std::string::npos)
            return false;
    }
    return true;
}

std::string createNumber(int digits)
{
    std::string number = "";
    for (int i = digits; i >= 1; --i)
        number += std::to_string(i);

    return number;
}

int main(int argc, char const *argv[])
{
    int digits = 9;
    while (digits > 0)
    {
        std::string number = createNumber(digits);
        int suma = 0;
        for (int i = 0; i < number.size(); i++)
            suma += std::stoi(std::string(1, number[i]));

        if (std::stoi(number) != 3 && suma % 3 == 0)
            digits--;
        else
        {
            while (true)
            {
                if (isPandigital(number) && isPrime(std::stoi(number)))
                {
                    std::cout << number << std::endl;
                    return 0;
                }
                number = std::to_string(std::stoi(number) - 2);
            }
        }
    }
    return 0;
}