////1^1+2^2+3^3+...+n^n
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double sum=0.0;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=pow(i,i);
    }
    printf("\nThe sum of the series:%.2lf",sum);
    return 0;
}