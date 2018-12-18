#include <iostream>
#include <string>
#include <algorithm>

std::string reverse(std::string str)
{
    std::string reversed = "";
    for (int i = str.length() - 1; i >= 0; --i)
        reversed += str[i];
    return reversed;
}

std::string add(std::string a, std::string b)
{
    std::string result = "";
    int maxLen = std::max(a.length(), b.length());
    a = reverse(a);
    b = reverse(b);

    while (a.length() < maxLen)
        a += "0";
    while (b.length() < maxLen)
        b += "0";

    int remainder = 0;
    int suma;
    int digit;

    for (int i = 0; i < maxLen; ++i)
    {
        suma = remainder + std::stoi(std::string(1, a[i])) + std::stoi(std::string(1, b[i]));
        remainder = suma / 10;
        digit = suma % 10;
        result += std::to_string(digit);
    }

    if (remainder != 0)
        result += std::to_string(remainder);

    return reverse(result);
}

std::string mult(std::string number, int times)
{
    std::string result = "";
    for (int i = 0; i < times; ++i)
        result = add(number, result);

    return result;
}

std::string factorial(std::string number)
{
    std::string result = "1";
    for (int i = 1; i <= std::stoi(number); ++i)
        result = mult(result, i);
    return result;
}

int main(int argc, char const *argv[])
{
    std::string number = factorial("100");
    int total = 0;
    for (int i = 0; i < number.length(); ++i)
        total += std::stoi(std::string(1, number[i]));

    std::cout << number << std::endl;
    std::cout << total << std::endl;
    return 0;
}