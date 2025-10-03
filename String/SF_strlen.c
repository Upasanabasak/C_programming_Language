#include <stdio.h>
#include <string.h>
int main() 
{
    char str4[1000]; 
    printf("\nEnter a line: ");
    // fgets(str4, sizeof(str4), stdin); // Input: Hello World  Output: Hello World\n
    gets(str4); // len will be 11
    printf("\nYou entered: %s", str4); // Note: newline is included // |H| E | L | L| O |   | W  | O | R | L | D | \n |
    int lenth  =  strlen(str4);
    printf("\nLength of the string is: %d\n", lenth);
    return 0;
}