#include<stdio.h>
int main()
{
    char myName[8];

    myName[0]='U';
    myName[1]='p';
    myName[2]='a';
    myName[3]='s';
    myName[4]='a';
    myName[5]='n';
    myName[6]='a';
    myName[7]='\0';


    printf("The characters in the array are:\n"); // Prompt for output
    for(int i = 0; myName[i] != '\0'; i++) {
        printf("%c ", myName[i]); // Print each character
    }

    printf("\n My name is %s\n", myName); // Print the entire string
    return 0;

}