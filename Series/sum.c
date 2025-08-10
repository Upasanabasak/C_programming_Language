//1+2+3+4+...+n
#include<stdio.h>
int main()
{
    int n;
    double sum=0.0;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    sum=(n*(n+1))/2.0;
    printf("\nThe sum:%.2lf",sum);
    return 0;
}
