// wap in c to find sum of the series S = 1 - 1/2 + 1/3 - 1/4 + ...

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0;

    printf("\nEnter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
    {
        if(i % 2 == 0)
            sum -= 1.0 / i;   // even terms are subtracted
        else
            sum += 1.0 / i;   // odd terms are added
    }

    printf("\nSum of the series = %.2f", sum);

    return 0;
}