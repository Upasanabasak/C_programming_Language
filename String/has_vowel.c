/*a) (4 marks) Write a C program to input a sentence and print the words that do NOT contain any vowel letters 
(a,e,i,o,u — case insensitive). Show working code (can assume words separated by spaces and punctuation may be ignored).*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int hasVowel(char word[]) //this\0 ... home.\0
{
    int i;
    char ch;
    for(i = 0;word[i] != '\0';i++) //true,t,t
    {
        ch=tolower(word[i]); //t=t..
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') //f,f,t
            return 1; /*word has a vowel*/
    }
    return 0;
}

int main()
{
    char sentence[200];
    char word[30];
    int i = 0,j = 0;
    printf("\nEnter the sentence: ");
    fgets(sentence,sizeof(sentence),stdin);  //this is my home.
    /* Extract words one by one*/
    while (sentence[i] != '\0') // true,tr    
    {
        if (isalpha(sentence[i])) /*checking if index element is an alphabetic letter*/  //true,
        {
          word[j++] = sentence[i];  /*build a word charecter by charecter*/ //word[1] = sentence[0] ... word[4] = sentence[3]
        }
        else
        {
            /*end of a word*/
            if(j > 0) //4-->true
            {
                word[j] = '\0';
                if(!hasVowel(word)) 
                {
                    printf("%s\n",word);
                }
                else
                    printf("\nAll the words has vowels.");
                j = 0;
            }
        }
        i++; // i1
    }
    if(j > 0)
    {
        word[j] = '\0';
        if(!hasVowel(word))
        {
            printf("%s\n",word);
        }
        else
            printf("\nAll the words has vowels.");
    }
    return 0;
}