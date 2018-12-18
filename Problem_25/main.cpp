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





int main(int argc, char const *argv[])
{
    std::string a = "1";
    std::string b = "1";
    size_t i = 2;
    std::string fibo;
    do
    {
        fibo = suma(a, b);
        a = b;
        b = fibo;
        i += 1;
    } while (fibo.size() < 1000);

    std::cout << i << std::endl;
    return 0;
}