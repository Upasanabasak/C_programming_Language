#include<stdio.h>
int main()
{
    int last_term,i;
    double sum=0.0,term;
    printf("\nEnter the number: ");
    scanf("%d",&last_term);
    for(i=1;i<=last_term;i++)
    {
        term=1.0/i;
        if(i%2==0)
        {
            term=-term;
        }
        sum+=term;
    } 
    printf("\nThe sum of the series is:%.4lf",sum);
    return 0;
}