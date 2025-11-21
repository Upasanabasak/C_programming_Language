/* Write a program in C to find the value of x from following series: 
    cos(x) = 1 − x²/2! + x⁴/4! − x⁶/6! + ... for all value of x. 
    The program must be corrected up to 3 decimal places of accuracy. 
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i, denom, sign, index;
    float term, error, t, x, numer, s, cosine;

    printf("\nEnter the value of x in degree : ");
    scanf("%f", &x);

    t = x;
    x *= 3.14159 / 180;
    cosine = 1;
    sign = -1;
    index = 2;

    while(1)
    {
        numer = pow (x, index);
        denom = 1;
        for( i = 1; i <= index; i++)
        {
            denom *= i;
        }
        term = (( sign * numer) / denom);
        if( fabs(term) <.0001 )
        {
            break;
        }
        cosine += term ;
        sign *= -1;
        index += 2;
    }

    s = cos(x);
    error = fabs( cosine - s );

    printf("\nValue of cos(%.1f) as per libery function is : %0.3f", t, s);
    printf("\nValue of cos(%.1f) as per series is : %0.3f", t, cosine);
    printf("\nError : %0.3f", error);

    return 0;
}