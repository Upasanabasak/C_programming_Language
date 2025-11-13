// Wap in c to find the factor of a number

#include <stdio.h>

int main()
{
    int num, i;
    printf("\nEnter a number : ");
    scanf("%d", &num);
    printf("\nFactor of %d is : ", num);
    for(i = 1; i <= num; i++)
    {
        if( num % i == 0)
        {
            printf("\n%d", i);
        }
    }
    return 0;
}