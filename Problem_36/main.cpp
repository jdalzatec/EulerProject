#include <iostream>
#include <string>

std::string reverse(std::string str)
{
    std::string reversed = "";
    for (int i = str.length() - 1; i >= 0; --i)
        reversed += str[i];
    return reversed;
}

bool isPalindrome(std::string number)
{
    return (number == reverse(number));
}

std::string dec_to_bin(int decimal)
{
    if (decimal == 0)
        return "0";

    std::string binary = "";
    int current = decimal;
    int remainder;

    while (current > 1)
    {
        remainder = current % 2;
        current = current / 2;
        binary += std::to_string(remainder);
    }
    
    binary += std::to_string(current);

    return reverse(binary);
}

int main(int argc, char const *argv[])
{
    int total = 0;

    for (int n = 0; n < 1000000; n++)
    {
        if (isPalindrome(std::to_string(n)) && isPalindrome(dec_to_bin(n)))
            total += n;
    }

    std::cout << total << std::endl;
    return 0;
}