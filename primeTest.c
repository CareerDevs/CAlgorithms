#include <stdio.h>
#include <cs50.h>
#include <math.h>

bool isPrime(int number)
{
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0 && i != 1)
        {
            return false;
        }
    }
    return true;
}
int sumPrimes(int num)
{
    int sum = 0;
    for (int i = 2; i <= num; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    return sum;
}

bool testPrimes(void) {
    if (sumPrimes(10) != 17) {
        printf("fail sumPrimes(10)");
        return false;
    }

    if (sumPrimes(977) != 73156) {
        printf("fail sumPrimes(977)");
        return false;
    }

    if (sumPrimes(44823) != 98469833) {
        printf("fail sumPrimes(44823)");
        return false;
    }

    if (sumPrimes(123456) != 678875932) {
        printf("fail sumPrimes(44823)");
        return false;
    }

    return true;
}

int main(void) {
    if (testPrimes()) {
        printf("Passed!\n");
    }
}