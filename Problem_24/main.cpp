#include <string>
#include <iostream>
#include <algorithm>

template <typename T>
void print_arr(T* arr, size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    int size = 10;

    int numbers[size];
    for (int i = 0; i < size; ++i)
    {
        numbers[i] = i;
    }

    for (int i = 0; i < 999999; ++i)
    {
        std::next_permutation(numbers, numbers + size);
    }
    print_arr(numbers, size);

    return 0;
}