#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n, flag = 0;
    printf("\nEnter a number : ");
    scanf("%d", &n);
    printf("\nAll prime factor of %d are : ", n);
    for( i = 2; i <= n / 2; i++)
    {
        if( n % i == 0)
        {
            flag = 0;
            for( j = 2; j <= sqrt(i); j++)
            {
                if( i % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                printf("%d ", i);
        }
    }
    return 0;
}