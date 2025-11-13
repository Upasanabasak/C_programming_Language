#include <stdio.h>

int main()
{
    int num, i;
    long int fact = 1;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    for(i = 1; i <= num; i++)
    {
        fact*= i;
    }
    printf("\nFactorial of %d = %ld", num, fact);
    return 0;
}