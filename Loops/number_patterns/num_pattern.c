/*
1
22
333
4444
55555
*/
#include<stdio.h>
int main()
{
    int row=5;
    int col=5;
    for(int i=1;i<=row;i++)//i=1,2,3,4,5
    {
        int k=i;//k=1
        for(int j=1;j<=col;j++)//j=2
        {
            if(j<=i)
            {
              printf("%d",k);//print star
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