#include <stdio.h>
#include <cs50.h>

long long factorialize(int n)
{
    long long sum = 1;
    for (int i = 1; i <= n && n != 0; i++)
    {
        sum *= i;
    }
    return sum;
}

bool testFactorialize() {
    if (factorialize(5) != 120) {
        printf("fail fact(5)");
        return false;
    }

    if (factorialize(10) != 3628800) {
        printf("fail fact(10)");
        return false;
    }

    if (factorialize(20) != 2432902008176640000) {
        printf("fail fact(20)");
        return false;
    }

    if (factorialize(15) != 1307674368000) {
        printf("fail fact(15)");
        return false;
    }

    return true;
}

int main(void) {
    if (testFactorialize()) {
        printf("Passed!\n");
    }
}