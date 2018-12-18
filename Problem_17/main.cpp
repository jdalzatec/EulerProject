#include <iostream>
#include <fstream>
#include <string>
#include "/usr/include/jsoncpp/json/json.h"

std::string writeNumber(std::string number, Json::Value names) 
{
    std::string letters;
    if (number.size() == 1)
        letters = names[number].asString();

    else if (number.size() == 2)
    {
        if (number[0] == '1')
            letters = names[number].asString();
        else if (number[1] == '0')
            letters = names[number].asString();
        else
            letters = names[std::string(1, number[0]) + "0"].asString() + names[std::string(1, number[1])].asString();
    }

    else if (number.size() == 3)
    {
        if (number[1] == '1')
            letters = names[std::string(1, number[0])].asString() + "hundredand" + names[number.substr(1, std::string::npos)].asString();
        else if ((number[1] == '0') && (number[2] == '0'))
            letters = names[std::string(1, number[0])].asString() + "hundred";
        else if ((number[1] == '0') && (number[2] != '0'))
            letters = names[std::string(1, number[0])].asString() + "hundredand" + names[std::string(1, number[2])].asString();
        else
            letters = names[std::string(1, number[0])].asString() + "hundredand" + names[std::string(1, number[1]) + "0"].asString() + names[std::string(1, number[2])].asString();
        
    }

    else if (number == "1000")
        letters = "onethousand";

    return letters;
}

int main(int argc, char const *argv[])
{
    std::ifstream data("letters.json");
    Json::Value root;
    Json::Reader reader;
    reader.parse(data, root);

    int total = 0;
    for (int i = 1; i <= 1000; ++i)
        total += writeNumber(std::to_string(i), root).size();

    std::cout << total << std::endl;

    return 0;
}