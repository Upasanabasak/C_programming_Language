/* Write a program in C to find sum of the series, s = x / 1! + x^2 / 2! + x^3 / 3! + x^4 / 4! +...  up to n terms. 
    x and n should be taken as input from user. 
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    double x, sum = 0.0, term, fact;

    // Input x and n
    printf("Enter value of x: ");
    scanf("%lf", &x);
    printf("Enter number of terms n: ");
    scanf("%d", &n);

    // Loop to calculate sum
    for(i = 1; i <= n; i++)
    {
        fact = 1; // Initialize factorial
        for(j = 1; j <= i; j++)
        {
            fact *= j; // Calculate i!
        }

        term = 1.0;
        for(j = 1; j <= i; j++)
        {
            term *= x; // Calculate x^i
        }

        sum += term / fact; // Add term to sum
    }

    printf("Sum of the series = %.2lf\n", sum);

    return 0;
}
