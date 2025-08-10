/*
Declare and initialize a 2d array by taking values from user.
Count the number of odd and even numbers in the array.
Print the count of odd and even numbers.
*/

#include<stdio.h>
int main()
{
    int row,col,i,j,c1=0,c2=0,n;
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
    printf("\n===============================");
    printf("\nElements of the array arr2: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\n\nElements of arr2[%d][%d]:%d",i+1,j+1,arr2[i][j]);
        }
    }
    printf("\n==================================");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr2[i][j]%2==0)
              c1++;
            else
               c2++;
        }
    }
    printf("\n\nCount the even number of array:%d",c1++);
    printf("\nCount the odd number of array:%d",c2);
    return 0;
}