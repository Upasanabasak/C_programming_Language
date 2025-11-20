/* Write a program in C to
   (a) copy one string into another without string function.
   (b) compare two strings without string function.
*/

#include <stdio.h>

int main()
{
   char a[20], b[20], c[20], option;
   int i, j, flag, choice;

   do
   {
      printf("\n1. String Copy");
      printf("\n2. String Compare");
      printf("\nEnter your choice : ");
      scanf("%d", &choice);
      getchar(); // to clear newline after scanf

      switch (choice)
      {
         case 1:
                  printf("\nEnter source string : ");
                  fgets(a, sizeof(a), stdin);

                  i = 0;
                  j = 0;

                  while (a[i] != '\0')
                  {
                     b[j] = a[i];
                     i++;
                     j++;
                  }
                  b[j] = '\0';

                  printf("\nTarget string is : %s", b);
                  break;

         case 2:
                  printf("\nEnter source string : ");
                  fgets(a, sizeof(a), stdin);

                  printf("\nEnter target string : ");
                  fgets(c, sizeof(c), stdin);

                  i = 0;
                  j = 0;
                  flag = 0;

                  while (1)
                  {
                     if (a[i] == '\0' || c[j] == '\0')
                     {
                        if (a[i] != c[j])
                        {
                           flag = 1;
                        }
                        break;
                     }

                     if (a[i] != c[j])
                     {
                        flag = 1;
                        break;
                     }

                     i++;
                     j++;
                  }

                  if (flag == 0)
                     printf("\nStrings are equal.");
                  else
                     printf("\nStrings are not equal.");

                  break;

         default:
                  printf("\nWrong Choice.");
      }

         printf("\nDo you want to continue(Y/N)? : ");
         scanf(" %c", &option); // space to ignore newline

   } while (option == 'y' || option == 'Y');

   return 0;
}
