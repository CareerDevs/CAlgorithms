#include <stdio.h>
#include <cs50.h>

int sumFibs(int num)
{
    int sum = 1, priorFib = 1, curFib = 1;
    do
    {
        if (curFib % 2 != 0)
        {
            sum += curFib;
        }
        int temp = priorFib;
        priorFib = curFib;
        curFib += temp;
    } while (curFib <= num);
    return sum;
}

bool testFibs(void) {
    if (sumFibs(1000) != 1785) {
        printf("fail sumFibs(1000)");
        return false;
    }
    if (sumFibs(4000000) != 4613732) {
        printf("fail sumFibs(4000000)");
        return false;
    }
    if (sumFibs(4) != 5) {
        printf("fail sumFibs(4)");
        return false;
    }
    if (sumFibs(75024) != 60696) {
        printf("fail sumFibs(75024)");
        return false;
    }
    if (sumFibs(75025) != 135721) {
        printf("fail sumFibs(75025)");
        return false;
    }

    if (sumFibs(12345678) != 19544084) {
        printf("fail sumFibs(12345678)");
        return false;
    }

    return true;
}

int main(void) {
    if (testFibs()) {
        printf("Passed!\n");
    }
}