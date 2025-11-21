// Write a program in C to check whether a given number is an armstrong number or not using function.

#include <stdio.h>
#include <math.h>

int armstrong(int num)
{
    int t = num, c = 0, r, sum = 0;

    // Count digits
    while (t > 0)
    {
        c++;
        t /= 10;
    }

    t = num;   // reset t to original number

    // Calculate sum of digits^count
    while (t > 0)
    {
        r = t % 10;
        sum += pow(r, c);
        t /= 10;
    }

    if (sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (armstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is NOT an Armstrong number.\n", n);

    return 0;
}
