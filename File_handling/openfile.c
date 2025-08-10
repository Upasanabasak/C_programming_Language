/*

fopen()-Open a file.

fopen("filename.txt","mode")

modes:
"r"-Read mode
"w"-Write mode(creats a new file or truncates an exisying one)
"a"-Append mode(write to the end of the file)
"r+"-Read and write mode(file must exist)

syntax:


FILE *fp= fopen(const char*filename,const char *mode);


*/

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
    fclose(file);
}