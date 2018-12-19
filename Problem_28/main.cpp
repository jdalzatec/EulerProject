#include <iostream>

int main(int argc, char const *argv[])
{
    int size = 1001;
    int current = size * size;
    int total = current;
    int decrease = size - 1;
    int counter = 1;

    while (current > 1)
    {
        current -= decrease;
        if (counter % 4 == 0)
        {
            counter = 0;
            decrease -= 2;
        }
        total += current;
        counter++;
    }

    std::cout << total << std::endl;
    return 0;
}