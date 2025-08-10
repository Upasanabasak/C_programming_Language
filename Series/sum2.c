#include<stdio.h>
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
    int num,i;
    double sum=0.0;
    printf("\nEnter the value: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum+=factorial(i)/i;
    }
    printf("\nThe sum of the series:%.2lf",sum);
    return 0;
}