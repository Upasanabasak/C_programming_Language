/* Write a program in C to input a sentence and print the words not containing vowels. For example, 
    Input : Sky is blue, Output : sky. 
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a word contains a vowel
// Returns 1 if it contains a vowel, 0 otherwise.
int has_vowel(char *word) {
    int i;
    for (i = 0; word[i] != '\0'; i++) {
        // Convert character to lowercase for easy comparison
        char c = tolower(word[i]);
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return 1; // True: vowel found
        }
    }
    return 0; // False: no vowel found
}

int main() {
    char str[1000];
    char *token;
    // Define characters that separate words (space, comma, period, newline, etc.)
    const char delimiters[] = " \t\n,.;:!?";

    // 1. Input the sentence
    printf("Input a sentence: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1; // Error reading input
    }

    printf("Output : ");

    // 2. Tokenize the string (split into words)
    token = strtok(str, delimiters);

    while (token != NULL) {
        // 3. Check if the current word has vowels
        if (!has_vowel(token)) {
            printf("%s ", token);
        }
        
        // Move to the next token
        token = strtok(NULL, delimiters);
    }
    
    printf("\n");

   return 0;
}