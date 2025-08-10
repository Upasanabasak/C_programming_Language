/*
Write  a program in C to read two array and perform addition.

12|13|14|15-> first[]
22|23|24|25-> second[]

-----------------------

addtion[i]=first[i]+second[i]

36|36|38|40-> addition[]
*/

#include<stdio.h>
int main()
{
    int arraySize1,arraySize2,i;
    printf("\nEnter the size of 1st array: ");
    scanf("%d",&arraySize1);
    int arr1[arraySize1];

    int addition[arraySize1];
    
    printf("\nEnter the size of 2nd array: ");
    scanf("%d",&arraySize2);
    int arr2[arraySize2];


    printf("\nEnter %d for 1st array: ",arraySize1);
    for(i=0;i<arraySize1;i++)
    {
        printf("\nElements %d: ",i+1);
        scanf("%d",&arr1[i]);
    }

    printf("\nEnter %d for 2nd array: ",arraySize2);
    for(i=0;i<arraySize2;i++)
    {
        printf("\nElements %d: ",i+1);
        scanf("%d",&arr2[i]);
    }
    printf("==================");
    printf("\nArray elements are: ");
    for(i=0;i<arraySize1;i++)
    {
        printf("\nElements %d:%d",i+1,arr1[i]);
    }
    printf("\nArray elements are: ");
    for(i=0;i<arraySize2;i++)
    {
        printf("\nElements %d:%d",i+1,arr2[i]);
    }
    for(i=0;i<arraySize1;i++)
    {
        for(i=0;i<arraySize2;i++)
        {
        addition[i]=arr1[i]+arr2[i];
        }
    }
    printf("\nAddition of two arrays: ");
    for(i=0;i<arraySize1;i++)
    {
        printf(" %d ",addition[i]);
    }
    return 0;
}