// Write a C program that accepts 20 integers and displays the frequency of occurrence of each distinct integer (use arrays/structs as you like).
#include <stdio.h>
#define SIZE 20
int main()
{
    int num[SIZE];
    int visited[SIZE];
    int i,j,count=0;
    printf("\nEnter 20 integers: ");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d",&num[i]);
        //print num array
        visited[i]=0;
    }
    printf("\nEntered Elements: ");
    for(i=0; i<SIZE; i++)
    {
        printf("\nPosition %d : %d",i+1,num[i]);
    }
    for(i=0; i<SIZE; i++)
    {
        if(visited[i]==0)
        {
            count=1;
            for(j=i+1; j<SIZE; j++)
            {
                if(num[i]==num[j])
                {
                    count++;
                    visited[j]=1;
                }
            }
            printf("\n%d occurs %d time(s)",num[i],count);
        } 
    }
    return 0;
}