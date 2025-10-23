#include <stdio.h>
int main()
{
    int size,i,pos,index;
    printf("\nEnter size: ");
    scanf("%d",&size);//5
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
    printf("\nEnter the position number : ");
    scanf("%d",&pos);//3
    index=pos-1;//2
    for(i=index;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    printf("\nNew updated array: ");
    for(i=0;i<size;i++)
    {
        printf("\nPosition %d : %d",i+1,arr[i]);
    }
    return 0;
}
/*

    1 2 7 5 66 
--  1 2 5 66

*/