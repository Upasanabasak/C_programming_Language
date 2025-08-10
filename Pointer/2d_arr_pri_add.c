/*
Write a program in C to use a double dimensional array and print each cells value and address.
*/

#include<stdio.h>
int main()
{
    int row,col,i,j,n,arr;
    printf("\nEnter the row number: ");
    scanf("%d",&row);
    printf("\nEnter the column number: ");
    scanf("%d",&col);
    int arr2[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nEnter elements for arr2[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    int (*arrptr)[i][j] =arr2;
    printf("\n===============================");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\n\nElements of arr2[%d][%d]:%d,Address=%d",i+1,j+1,arr2[i][j],(arrptr)[i][j]);
        }
    }
    return 0;
}