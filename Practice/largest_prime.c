#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, l, u, flag;
    printf("\nEnter lower and upper range : ");
    scanf("%d %d", &l, &u);
    printf("\nThe largest prime between %d to %d is : ",l,u);
    for( i = u; i >= l; i--)
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
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}