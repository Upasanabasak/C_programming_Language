#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("\nMemory allocationn failed.");
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
        printf("\nArr[%d]=%d",i,arr[i]);
    }
    int n2=10;
    int *temp_arr=realloc(arr,n2*sizeof(int));
    if(temp_arr==NULL)
    {
        printf("\nMemory allocationn failed.");
        free(arr);
        return 1;
    }
    else
    {
        arr=temp_arr;
    }
    free(arr);
    printf("\nMemory freed successfullly.");
    return 0;
}