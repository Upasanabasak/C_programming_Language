#include <stdio.h>

int main()
{
    int n, i, c, max;
    printf("\nEnter total number of element : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the elements: ");
    for( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe elements: ");
    for( i = 0; i < n; i++)
    {
        printf("\nThe position %d : %d", i+1, a[i]);
    }
    c = 1;
    max = 0;
    for( i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            c++;
        }
    }
    printf("\nThe maximun number is : %d", max);
    printf("\n%d is repeted %d time (s)", max, c);
    printf("\nAt the position %d is repeated :", max);
    for( i = 0; i < n; i++)
    {
        if(a[i] == max)
        {
            printf(" %d", i+1);
        }   
    }
    return 0;
}