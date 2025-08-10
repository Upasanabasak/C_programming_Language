/*
Declara and initialize a 2D array by taking values from user.
use nested for loop to initialize any print element of the array.
*/
#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("\nEnter the row number: ");
    scanf("%d",&row);
    printf("\nEnter the column number: ");
    scanf("%d",&col);
    int arr2[row][col];
    printf("\nEnter the array elements: ");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nThe elements array[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\n=========================================");
    printf("\n\nThe array elements are: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nThe elements array[%d][%d]:%d",i+1,j+1,arr2[i][j]);
        }
    }
    return 0;
}