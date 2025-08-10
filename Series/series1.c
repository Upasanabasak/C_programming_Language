//s=x^1/1!+x^2/2!+...+x^n/n!

#include<stdio.h>
#include<math.h>
long factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int x,n,i;
    double sum=0.0;
    printf("\nEnter the value of x: ");
    scanf("%d",&x);
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=pow(x,i)/factorial(i);
    }
    printf("\nThe sum of series is:%.2lf",sum);
    return 0;
}