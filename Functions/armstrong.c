
/*
Write a program in C to print all the Armstrong number from 1 to 500. 
An Armstrong number (also known as a narcissistic number) is a number that is equal to the sum of 
its own digits each raised to the power of the number of digits. 
For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
another example is 370, because 3^3 + 7^3 + 0^3 = 370.
*/

#include<stdio.h>
#include<math.h>
void armstrong_num(int a,int b)
{
    int i,n,c,s,t,r;
    for(i=a;i<=b;i++)
    {
        n=i;
        c=0;
        s=0;
        t=n;
        c++;
        n/=10;
        r=t%10;
        s+=pow(r,c);
        t/=10;
    }
    if(i==s)
    printf("\nAll armstrong numbers are:%d",i);
}
int main()
{
    int l,u;
    printf("\nEnter the range for see all armstrong number: ");
    scanf("%d %d",&l,&u);
    armstrong_num(l,u);
    return 0;
}