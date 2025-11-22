//  Write a program in C to find the number of characters, words and lines in a text file. 

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *p1;
    char ch;
    int chCount = 0, wordCount = 0, lineCount = 0, paragraphCount = 1, inWord = 0, prevCh = '\n';

    // Open the file in read mode
    p1 = fopen("input.txt", "r");
    if(p1 == NULL)
    {
        printf("\nCannot open the file.\n");
        return 1;
    }

    while((ch = fgetc(p1)) != EOF)
    {
        chCount++; // Count character

        // Count lines
        if(ch == '\n')
        {
            lineCount++;
        }

        // Count words
        if(isspace(ch))
        {
            inWord = 0;
        }
        else if(!inWord)
        {
            inWord = 1;
            wordCount++;
        }

        // Count paragraphs (consider a blank line as paragraph separator)
        if(ch == '\n' && prevCh == '\n')
        {
            paragraphCount++;
        }

        prevCh = ch;
    }

    fclose(p1);

    printf("\nTotal characters : %d", chCount);
    printf("\nTotal lines      : %d", lineCount);
    printf("\nTotal paragraphs : %d", paragraphCount);
    printf("\nTotal words      : %d\n", wordCount);

    return 0;
}
