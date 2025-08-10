// Write a program in C to sum integers and use static variable to store the cumulative sum.

#include<stdio.h>
static int s=0,n;
void sum(int num)
{
    s+=num;
    printf("\nSum of the digits are:%d",sum);
}
int main()
{
    printf("\nEnter the number: ");
    while(1)
    {
        scanf("%d",&n);
        sum(n);
        break;
    }
    return 0;
}