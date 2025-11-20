// Write a program in C to display all prime factor of a number in descending order. 

#include <stdio.h>

int main()
{
    int num, i, j, isPrime = 0;

    printf("\nEnter number: ");
    scanf("%d", &num);
    
    printf("\nAll prime factor of %d in descending order is : ", num);
    for(i = num/2; i >= 2; i--)
    {
        if(num % i == 0)
        {
            isPrime = 1;
            for(j = 2; j <= i/2; j++)
            {
                if(i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime)
                printf(" %d", i);
        }
    }
    return 0;
}