#include <iostream>
#include <cmath>


int main(int argc, char const *argv[])
{
    size_t L = 20;
    size_t right = L;
    size_t down = L;

    // the formula is (right + down)! / (right! * down!)
    // but the computer does not be able to compute (right + down)!
    // thus, I am going to compute in this way:

    double amount = 1;
    for (int i = L + 1; i <= 2 * L; ++i)
    {
        amount *= (double(i) / (i - L));
    }

    std::cout << (size_t)std::ceil(amount) << std::endl;



    return 0;
}