// Write a C program to merge the contents of two files 'first.dat' and 'second.dat' to a new file named 'result.dat'.

#include <stdio.h>
int main() 
{

    FILE *file1, *file2, *file3;
    char ch;
    file1 = fopen("first.txt", "r");
    if (file1 == NULL) 
    {
        printf("Error opening first.txt file");
        return 1;
    }

    file2 = fopen("second.txt", "r");
    if (file2 == NULL) 
    {
        printf("Error opening second.txt file");
        return 1;
    }

    file3 = fopen("result.txt", "w");
    if (file3 == NULL) 
    {
        printf("Error creating result.txt file");
        return 1;
    }
    while((ch = fgetc(file1)) != EOF)
    {
        fputc(ch, file3);
    }

    fputc('\n', file3);

    while((ch = fgetc(file2)) != EOF)
    {
        fputc(ch, file3);
    }

    fclose(file1);
    fclose(file2);
    fclose(file3);
    return 0;
}