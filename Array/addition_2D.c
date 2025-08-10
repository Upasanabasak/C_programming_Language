/*
Write a program in c to read two matrices(2D array) and perform addition.
*/

#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("\nEnter number of rows: ");
    scanf("%d",&row);
    printf("\nEnter number of columns: ");
    scanf("%d",&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        printf("\nEnter elements for arr3[%d][%d]: ",i,j);
        scanf("%d",i);
    }
    return 0;
}