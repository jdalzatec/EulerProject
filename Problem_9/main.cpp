#include <iostream>

bool isPythagorean(int a, int b, int c)
{
    if (!(a < b && b < c) || !(a*a + b*b == c*c)) 
        return false;
    return true;
}

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 998; ++i)
    {
        for (int j = i+1; j < 998; ++j)
        {
            for (int k = j+1; k < 998; ++k)
            {
                if (isPythagorean(i, j, k) && (i + j + k == 1000))
                {
                    std::cout << i << " " << j << " " << k << std::endl;
                    std::cout << i * j * k << std::endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}