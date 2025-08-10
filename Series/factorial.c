#include<stdio.h>
int main()
{
    int i,n,l;
    double fact=1.0;
    l:printf("\nEnter a number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("\nNegative number cann't allow.");
        goto l;
    }
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("\nThe factorial of %d is: %.2lf",n,fact);
    return 0;
}