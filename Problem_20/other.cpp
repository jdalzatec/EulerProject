#include <iostream>
#include <string>

std::string revert(std::string A)
{
    std::string reversed = "";
    for (int i = 0; i < A.size(); ++i)
    {
        reversed += A.at(A.size() - i - 1);
    }
    return reversed;
}


std::string suma(std::string A, std::string B)
{
    std::string max = B;
    std::string min = A;
    if (A.size() > B.size())
    {
        max = A;
        min = B;
    }

    max = revert(max);
    min = revert(min);

    while (min.size() < max.size())
        min += "0";


    std::string output = "";
    size_t suma = 0;
    size_t residuo = 0;
    size_t num = 0;
    size_t i;
    for (i = 0; i < min.size(); i++)
    {
        suma = residuo;
        size_t value1 = std::stoi(std::string(1, min.at(i)));
        size_t value2 = std::stoi(std::string(1, max.at(i)));
        suma += (value1 + value2);

        num = std::stoi(std::string(1, std::to_string(suma).back()));
        residuo = (suma - num) / 10;
        output += std::to_string(num);
    }

    if (residuo != 0)
        output += std::to_string(residuo);

    
    return revert(output);
}


std::string product(std::string A, size_t B)
{
    std::string output = "0";
    for (int i = 0; i < B; ++i)
    {
        output = suma(output, A);
    }

    return output;
}

int main(int argc, char const *argv[])
{
    std::string number = "100";
    
    for (int i = std::stoi(number) - 1; i > 1; i--)
    {
        number = product(number, i);
    }

    std::cout << number << std::endl;

    size_t acum = 0;
    for (auto&& digit : number)
        acum += std::stoi(std::string(1, digit));

    std::cout << acum << std::endl;


    return 0;
}