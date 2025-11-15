// Write a program in C to find the largest word(s) from the content of a file.

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char a[100], b[100], length, maxlength = 0;
    fp = fopen("example.txt", "r");
    if(fp == NULL)
    {
        printf("\nError opening file.");
        return 1;
    }
    while(fscanf(fp,"%s",a) == 1)
    {
        length =  strlen(a);
        if(length > maxlength)
        {
            maxlength = length;
            strcpy(b,a);
        }
    }
    if(maxlength > 0)
    {
        printf("\nTThe largest word is : %s", b);
        printf("\nThe length is : %d", maxlength);
    }
    else
    printf("\nThe file is empty.");
    return 0;
}