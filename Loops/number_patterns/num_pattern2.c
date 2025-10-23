#include<stdio.h>
int main()
{
    int row,col,k,i,j;
    printf("\nEnter the number for row and coloumn: ");
    scanf("%d %d",&row,&col);
    for(i=1;i<=row;i++)//i=1
    {

        for(j=1;j<=col;j++)//j=2
        {
            k=j;
            if(j<=i)
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