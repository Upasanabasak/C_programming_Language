/*
WAP to find the youngest person in an array.
take array size from user and then the ages of each person(array size=no. of persons)
find the youngest person in the array and print the age of the youngest person
and the index of the youngest person in the array.
*/

#include<stdio.h>
int main ()
{
    int arraySize,i,min,l;
    printf("\nEnter the size of array: ");
    scanf("%d",&arraySize);         
    int arr[arraySize];
    printf("\nEnter %d person's age in the array: ",arraySize);
    for(i=0;i<arraySize;i++)
        {
            printf("\nElements %d: ",i+1);
            scanf("%d",&arr[i]);
        }
    printf("=================================");
    printf("\nArray elements are: ");
        for(i=0;i<arraySize;i++)
        {
            printf("\nElements %d:%d",i+1,arr[i]);
        }
        for(i=0;i<arraySize;i++)
        {
            if(arr[i]<min)
            min=arr[i];
        }
    printf("\nThe youngest person's of %d is:%d",arraySize,min);
    return 0;
}