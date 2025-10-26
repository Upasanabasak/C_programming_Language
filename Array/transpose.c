#include <stdio.h>

int i,j,r,c;

int transpose(int a[r][c],int r,int c)
{
    int b[c][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("\nAfter transpose : \n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    printf("\nEnter row & column number : ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("\nEnter numbers : ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    } 
    printf("\nBefore transpose : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    } 
    transpose(a,r,c);
    return 0;
}