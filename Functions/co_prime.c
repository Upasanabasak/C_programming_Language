// Write a C program to test whether two integers are coprime (i.e., gcd==1). Use an efficient gcd method.
#include<stdio.h>
int gcd(int a,int b)
{// a=15 b=8
    int temp;
    while (b!=0)// 8,7 ,1
    {
        temp=b;//8 ,7, 1
        b=a%b;//7 ,1,0
        a=temp;//8, 7 ,1
    }
    return a;
}
int main()
{
    int x,y;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&x,&y);
    if(gcd(x,y)==1)
        printf("\nCo-prime.");
    else
        printf("\n Not Co-prime.");
    return 0;
}