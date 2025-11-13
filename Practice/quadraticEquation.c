/* Wap in c to find the root of a quadratic equation ax^2 + bx + c = 0 where a, b, c are given by the user. */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, p, q;
    printf("\nEnter a number : ");
    scanf("%f %f %f", &a, &b, &c);
    // for real & unequal root
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        p = (-b + sqrt(d) / (2 * a));
        q = (-b - sqrt(d) / (2 * a));
        printf("\nReal & unequal are = %0.2f %0.2f", p, q);
    }
    // for real & equal root
    else if (d == 0)
    {
        p = q = -b / (2 * a);
        printf("\n Real & Equal roots are = %0.2f %0.2f", p, q);
    }
    // for imaginary roots
    else
    {
        p = -b / (2 * a);
        q = sqrt(-d) / (2 * a);
        printf("\nImaginary roots are = %0.2f+%0.2fi, %0.2f-%0.2fi", p, q, p, q);
    }
    return 0;
}