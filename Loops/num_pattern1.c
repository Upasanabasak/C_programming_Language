/*
      1
     222
    33333
   4444444
  555555555
*/

#include<stdio.h>
int main()
{
    int row,col,k;
    printf("\nEnter the number for row and coloumn: ");
    scanf("%d %d",&row,&col);
    for(int i=1;i<=row;i++)//i=1
    {
        k=i;
        for(int j=1;j<=col;j++)//j=2
        {
            if((j>=(row+1)-i)&&(j<=(row-1)+i))
            { 
              printf("%d",k);//print k
            }
            else
            {
                printf(" ");//print space
            }
        }
        printf("\n");
    }
    printf("\n");//go to next line/row
    return 0;
}