#include<stdio.h>
int main()
{
    int start,end,count=0,i,is_count=0;
    printf("\nEnter the start of the range(min:3): ");
    scanf("%d",&start);
    printf("\nEnter the end of the range: ");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        if(is_prime(i)&& is_prime(i+2))
        {
            printf("(%d,%d)");
        }
    }
    return 0;
}