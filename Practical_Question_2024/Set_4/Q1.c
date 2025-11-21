/*Write a program in C to swap maximum and minimum elements in a matrix (2D-array). 
The matrix should be taken as input from user.
Example : 
array[5][2] ={{ 5 ,4,3,2,1},
                     {7,8,9,5,6}}
after swapping 
array[5][2]= {{5,4,3,2,9},
                    {7,8,1,5,6}}
*/

#include<stdio.h>

int main()
{
    int i, j, max, min, row, col;
    printf("\nEnter row and column size: ");
    scanf("%d %d",&row, &col);
    int a[row][col];
    printf("\nEnter elements: ");
    for( i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\nPosition [%d][%d]: ",i+1, j+1);
            scanf("%d",&a[i][j]);
        }
    }
    max = min = a[0][0];
    for( i = 0; i < row; i++)
    {
        for( j = 0; j < col; j++)
        {
            if(a[i][j] > max) 
                max = a[i][j]; 
            if(a[i][j] < min) 
                min = a[i][j]; 
        }
    }
    for( i = 0; i < row; i++)
    {
        for( j = 0; j < col; j++)
        {
            if( a[i][j] == max ) 
                a[i][j] = min;
            else if( a[i][j] == min )  
                a[i][j] = max;
        }
    }
    printf("\nAfter swapping maximum and minimum elements in a matrix (2D-array): ");
    for( i = 0; i < row; i++)
    {
        for( j = 0; j < row; j++)
        {
            printf("\n%d ", a[i][j]);
        }
    }
    return 0;  
}