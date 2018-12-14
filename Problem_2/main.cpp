#include <iostream>

int main(int argc, char const *argv[])
{
    size_t first = 1;
    size_t second = 2;
    size_t acum = 0;

    while (acum <= 4000000)
    {
        if (second % 2 == 0)
            acum += second;

        size_t next = first + second;
        first = second;
        second = next;
    }

    std::cout << acum << std::endl;

    return 0;
}