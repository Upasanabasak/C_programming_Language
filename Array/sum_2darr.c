/*
Declare and initialize a 2D array by taking values from user.
Find the sum of all elements of the array and print it.
NOTE:User nested for loop to initialize and print the elements of the array.
*/
#include<stdio.h>
int main()
{
    int row,col,i,j,sum=0;
    printf("\nEnter the row number: ");
    scanf("%d",&row);
    printf("\nEnter the column number: ");
    scanf("%d",&col);
    int arr2[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nThe elements for arrray[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\n==================================");
    printf("\n\nThe elements of the array: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nthe elements of array[%d][%d]:%d",i+1,j+1,arr2[i][j]);
        }
    }
    printf("\n\n================================");
    for(i=0;i<row;i++)
    {
        for (j= 0;j<col;j++)
        {
            sum+=arr2[i][j];
        }
    }
    printf("\nThe sum of array elements:%d",sum);
    return 0;
}