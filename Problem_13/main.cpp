#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int amount = 10;

    std::ifstream myfile;
    myfile.open("data.dat");

    std::vector<std::string> lines;

    while (!myfile.eof())
    {
        std::string line;
        myfile >> line;
        lines.push_back(line);
    }

    std::string output = "";
    int suma = 0;
    int residuo = 0;
    int num = 0;
    for (int i = 49; i >= 0; i--)
    {
        suma = residuo;
        for (auto&& line : lines)
        {
            std::string n(1, line[i]);
            suma += std::stoi(n);
        }

        num = std::stoi(std::string(1, std::to_string(suma).back()));
        residuo = (suma - num) / 10;
        output += std::to_string(num);
    }

    std::string reversed = "";
    for (int i = 0; i < output.size(); ++i)
    {
        reversed += output.at(output.size() - i - 1);
    }

    std::string result = std::to_string(residuo);
    for (int i = 0; i < amount - std::to_string(residuo).size(); ++i)
    {
        result += reversed.at(i);
    }

    std::cout << result << std::endl;


    return 0;
}