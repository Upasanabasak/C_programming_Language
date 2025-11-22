/* Write a C program to evaluate the sum of first n terms of the followings series: 
                                     A = 1 + 1 / 2! + 1 / 3! + 1 / 4! + ...
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    double sum = 1.0, fact;

    printf("Enter value of n: ");
    scanf("%d", &n); 

    for(i = 2; i <= n; i++)  
    {
        fact = 1;
        for(j = 1; j <= i; j++)
            fact *= j;

        sum += 1.0 / fact;
    }

    printf("Sum of series = %.2lf", sum);

    return 0;
}
