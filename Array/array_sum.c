/*take array size from user and then the array elements
add the array elements and print the sum of the array elements
also print the array elements
*/
#include<stdio.h>
int main()
{
    int arraySize,i,sum=0;
    printf("\nEnter the size of array: ");
    scanf("%d",&arraySize);
    int arr[arraySize];
    printf("\nEnter %d elements for the array: ",arraySize);
    for(i=0;i<arraySize;i++)
    {
        printf("\nElements %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<arraySize;i++)
    {
      sum+=arr[i];
    }
    printf("\nAdd of the array elements are:%d",sum);
    printf("\nArray elements are: ");
    for(i=0;i<arraySize;i++)
    {
        printf("\nElements%d:%d",i,arr[i]);
    }
    return 0;
}