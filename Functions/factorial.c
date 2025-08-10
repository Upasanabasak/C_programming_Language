
/*
WAP to find factorial of a number using factorial function. 
*/

#include<stdio.h>
void factorial(int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    {
        fact*=i;
    }
    printf("\nThe factorial: %d",fact);
}
int main()
{
    int n;
    printf("\nEnter a number(positive) for factorial: ");
    scanf("%d",&n);
    factorial(n);
    return 0;
}