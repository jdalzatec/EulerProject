#include <iostream>

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 998; ++i)
    {
        for (int j = i+1; j < 998; ++j)
        {
            int k = 1000 - i - j;
            if (i*i + j*j == k*k)
            {
                std::cout << i << " " << j << " " << k << std::endl;
                std::cout << i * j * k << std::endl;
                return 0;
            }
        }
    }

    return 0;
}