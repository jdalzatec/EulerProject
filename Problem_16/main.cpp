#include <iostream>
#include <cmath>
#include <string>


std::string times2(std::string A)
{
    std::string output = "";
    size_t suma = 0;
    size_t residuo = 0;
    size_t num = 0;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        suma = residuo;
        size_t value = std::stoi(std::string(1, A.at(i)));
        suma += 2 * value;

        num = std::stoi(std::string(1, std::to_string(suma).back()));
        residuo = (suma - num) / 10;
        output += std::to_string(num);

    }

    if (residuo != 0)
        output += std::to_string(residuo);

    std::string reversed = "";
    for (int i = 0; i < output.size(); ++i)
    {
        reversed += output.at(output.size() - i - 1);
    }


    return reversed;
}


int main(int argc, char const *argv[])
{
    std::string number = "1";
    for (int i = 0; i < 1000; ++i)
    {
        number = times2(number);
    }
    std::cout << number << std::endl;

    size_t acum = 0;
    for (auto&& digit : number)
        acum += std::stoi(std::string(1, digit));

    std::cout << acum << std::endl;

    return 0;
}