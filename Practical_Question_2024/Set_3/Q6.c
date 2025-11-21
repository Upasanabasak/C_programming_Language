// Write a C program to find fibonacci series till the value m. 

#include <stdio.h>

int main()
{
    int num, a = 0, b = 1, c, i;
    
    printf("\nEnter a number : ");
    scanf("%d", &num);

    printf("\nFibonacci series for %d terms : ", num);
    printf("%d %d", a, b);
    
    for(i = 1; i <= num - 2; i++)
    {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
    return 0;
}