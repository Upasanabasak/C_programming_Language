/*
Write a function convert () that returns a weight in Kg after being given a weight in pounds.

The conversion formula is: 1 pound = 0.453592 kg.
You can use the following function prototype:   
double convertToKG(double pounds);
*/

#include<stdio.h>
void convertToKG(float a)
{
    float pound=0.0;
    pound=0.453592*a;
    printf("\n%.2f in kg.:%f",a,pound);
}
int main()
{
    float n;
    printf("\nEnter a weight in pounds: ");
    scanf("%f",&n);
    convertToKG(n);
    return 0;
}