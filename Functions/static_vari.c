// Write a program in C to illustrate the use of static variables.
// Write a program in C to accept two numbers and find the sum of the number demonstrating 
// use of global variables.


#include<stdio.h>
static int a,b;
int main()
{
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a,&b);
    int add=a+b;
    int sub=a-b;
    printf("\nThe addition of %d and %d=%d",a,b,add);
    printf("\nThe subtraction of %d and %d=%d",a,b,sub);
    return 0;
}