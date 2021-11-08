#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0


int isPrime(int num) {
    //the function returns if a number is a prime number or not
    int isPrime(int num);
    {
        if (num <= 0) {
            return FALSE;
        }

        if (num == 1 || num == 2) {
            return TRUE;
        }

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0) {
                return FALSE;
            }
        }
        return TRUE;
    }
}

//the function returns if a number is a strong number or not 
int isStrong(int num)
{
    int temp = num;
    int temp1 = 0;
    int temp2 = 0;
    int sum = 0;

    while (temp > 0 && sum <= num) {
        temp1 = temp % 10;
        temp2 = factorial(temp1);
        sum += temp2;
        temp = temp / 10;

    }

    if (sum == num) {
        return TRUE;
    }

    else {
        return FALSE;
    }

}

int factorial(int num) {
    int i;
    int fact = 1;

    if (num < 0)
        printf("Error");
    else
        for (i = 1; i <= num; ++i)
            fact *= i;

    return fact;
}