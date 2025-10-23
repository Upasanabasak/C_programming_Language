#include <stdio.h>
int main()
{
    int size,i,pos,val;
    printf("\nEnter size: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter numbers: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n----------------------------");
    printf("\nEntered elements: ");
    for(i=0;i<size;i++)
    {
        printf("\nPosition %d : %d",i+1,arr[i]);
    }
    printf("\nEnter the position & new value: ");
    scanf("%d %d",&pos,&val);
    arr[pos-1]=val;
    printf("\nNew updated array: ");
    for(i=0;i<size;i++)
    {
        printf("\nPosition %d : %d",i+1,arr[i]);
    }
    return 0;
}
