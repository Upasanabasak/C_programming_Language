//sin(x)=x−3!x3​+5!x5​−7!x7​+⋯

#include <stdio.h>
#include <math.h>

int main()
{
    int i, denom, sign, index;
    float term, error, t, x, numer, s, sine;

    printf("\nEnter the value of x in degree : ");
    scanf("%f", &x);   // input x in degrees

    t = x;
    x = x * 3.14159 / 180;   // convert degree to radians

    sine = x;    // first term = x
    sign = -1;   // next term is negative
    index = 3;   // start with x³

    while (1)
    {
        numer = pow(x, index);
        denom = 1;

        for (i = 1; i <= index; i++)
        {
            denom *= i;
        }

        term = (sign * numer) / denom;

        if (fabs(term) < 0.0001)
        {
            break;
        }

        sine += term;
        sign *= -1;
        index += 2;
    }

    s = sin(x);
    error = fabs(sine - s);

    printf("\nValue of sin(%.1f) as per library function is : %.3f", t, s);
    printf("\nValue of sin(%.1f) as per series is : %.3f", t, sine);
    printf("\nError : %.3f", error);

    return 0;
}
