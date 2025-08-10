#include<stdio.h>
int main()
{
    int total=0,i=1;
    while(i<=10)
    {
        total+=i;
        i++;
    }
    printf("\nTotal sum of first 10 natural number:%d",total);
    return 0;
}