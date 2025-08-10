/*
Count the number of odd and even numbers in an array.
print the count of odd and even numbers.
*/

#include<stdio.h>
int main()
{
    int arraySize,c1=0,c2=0,i;
    printf("\nEnter array size: ");
    scanf("%d",&arraySize);
    int arr[arraySize];
    printf("\nEnter the elements: ");
    for(i=0;i<arraySize;i++)
    {
        printf("\nFor element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n================================");
    printf("\n\nThe elements are: ");
    for(i=0;i<arraySize;i++)
    {
        printf("\nThe position number is %d for the value is:%d",i+1,arr[i]);
    }
    for(i=0;i<arraySize;i++)
    {
        if(arr[i]%2==0)
           c1++; 
        else
            c2++;
    }
    printf("\nThe even number in %d numbers:%d",arraySize,c1++);
    printf("\nThe odd number in %d numbers:%d",arraySize,c2++);
    return 0;
}