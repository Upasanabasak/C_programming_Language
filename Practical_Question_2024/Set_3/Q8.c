// Write a program in C to check whether a string entered by the user is palindrome or not.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[20], b[20];
    int i = 0, j = 0, k = 0, flag = 0;

    printf("\nEnter string : ");
    fgets(a, sizeof(a), stdin);

    // Remove newline from fgets
    a[strcspn(a, "\n")] = '\0';

    while(a[i] != '\0')
        i++;

    for(j = i - 1; j >= 0; j--)
    {
        b[k] = a[j];
        k++;
    }
    b[k] = '\0';

    printf("\nReverse string : %s", b);

    for(i = 0, j = 0; a[i] != '\0'; i++, j++)
    {
        if(a[i] != b[j])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("\nString is palindrome.");
    else
        printf("\nString is not palindrome.");

    return 0;
}
