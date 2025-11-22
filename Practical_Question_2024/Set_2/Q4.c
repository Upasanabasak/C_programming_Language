/* Write a program in C to find maximum and second maximum numbers from an array with integers.
   Then swap these two numbers.Do not use sorting technique.
*/

#include <stdio.h>

int main()
{
   int a[20], fmax = 0, smax = 0, num, i;
   printf("\nEnter the size of the array : ")
   scanf("%d", &num);
   printf("\nEnter the elements : ");
   for(i = 0; i < num; i++)
   {
      printf("\nPosition %d : ");
      scanf("%d", &a[i]);
   }
   for(i = 0; i < num; i++)
   {
      if(a[i] > fmax)
         fmax = a[i];
   }
   for(i = 0; i < num; i++)
   {
      
   }
   return 0;
}