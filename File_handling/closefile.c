#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("example.txt","r");
    if(file==NULL)
    {
        printf("\nError opening file");
        return 1;
    }
    if(fclose(file)==0)
    {
        printf("\nFile closed successfully.");
    }
    else
    {
        printf("\nError closing file.");
        return 1;
    }
    return 0;
}