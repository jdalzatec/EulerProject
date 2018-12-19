#include <iostream>
#include <vector>

bool isAbundant(int number)
{
    int suma = 0;
    for (int i = 1; i < number / 2 + 1; ++i)
    {
        if (number % i == 0)
        {
            suma += i;
            if (suma > number)
                return true;
        }
    }
    return false;
}

bool isSum(int n, std::vector<int> abundant)
{
    std::vector<int> indexes;
    for (int i = 0; i < abundant.size(); ++i)
    {
        if (abundant[i] < n)
            indexes.push_back(i);
    }

    for (auto& i : indexes)
    {
        for (auto& j : indexes)
        {
            if (abundant[i] + abundant[j] == n)
                return true;                
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    std::vector<int> abundantNumbers;
    for (int i = 1; i <= 28123 ; ++i)
    {
        if (isAbundant(i))
            abundantNumbers.push_back(i);
    }

    size_t total = 0;

    for (int i = 1; i < 28123; ++i)
    {
        if (!isSum(i, abundantNumbers))
            total += i;
    }
    std::cout << total << std::endl;
    return 0;
}