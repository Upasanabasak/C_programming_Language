#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("example.txt","r");
    if(file==NULL)
    {
        printf("\nError opening file.");
        return 1;
    }
    char name[50];
    int age;
    // scanf("%d",age);
    if(fscanf(file,"\nName:%s","Age:%d",name,&age)==2)
    {
        printf("\nRead from file successfully.");
    }
    else
    {
        printf("\nError reading from file.");
        fclose(file);
        return 1;
    }
    printf("\nName:%s","Age:%d",name,age);
    fclose(file);
}