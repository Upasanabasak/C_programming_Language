//  Write a C program that reverse the contents of a file.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp, *fp_out;
    char filename[100];
    char ch;
    long fileSize, i;

    // Ask user for the filename
    printf("Enter the filename to reverse: ");
    scanf("%s", filename);
    //fgets(filename, sizeof(filename), stdin);

    // Open the source file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Open the destination file in write mode
    fp_out = fopen("reversed_output.txt", "w");
    if (fp_out == NULL) {
        printf("Could not create output file.\n");
        fclose(fp);
        return 1;
    }

    // Move file pointer to the end of the file
    fseek(fp, 0, SEEK_END);

    // Get the position of the file pointer (file size)
    fileSize = ftell(fp);

    printf("Reversed content of %s:\n", filename);

    // Loop backwards from the end of the file to the beginning
    // We start at fileSize - 1 because file positions are 0-indexed
    for (i = 1; i <= fileSize; i++) {
        // Move pointer to (End - i)
        fseek(fp, -i, SEEK_END);
        
        // Read the character
        ch = fgetc(fp);
        
        // Print the character to console
        printf("%c", ch);

        // Write the character to the output file
        fputc(ch, fp_out);
    }

    printf("\n");
    printf("Reversed content saved to 'reversed_output.txt'\n");

    // Close the files
    fclose(fp);
    fclose(fp_out);

    return 0;
}