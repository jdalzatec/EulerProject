#include <iostream>

int isPrime(int num)
{
    for (int i = 2; i <= num/2; i++)
    {   
        if (num % i == 0)
        {
            return false;
            break;
        }
    }
    return true; 
}


int main(){

    size_t limit = 2000000;
    size_t suma = 0;

    for (int j = 2; j < limit; j++){
        if (isPrime(j)){
            suma += j;
        }
        
    }
    std::cout << suma << std::endl;
    return 0;
}
