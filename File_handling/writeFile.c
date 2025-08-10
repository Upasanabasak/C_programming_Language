#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("example.txt","w");
    // file=fopen("example.txt","r");
    if(file==NULL)
    {
        printf("\nError opening file");
        return 1;
    }
    printf("Name:%s,Age:%d","Sristi",20);
    fprintf(file,"\nName:%s,\nAge:%d","Sristi",20);
    fclose(file);
}