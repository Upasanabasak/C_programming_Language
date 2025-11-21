/* Write a program in C to take an integer array as input and perform insertion operation at desired index position entered by the user. 
   The data to be inserted is also taken as input. 
*/

#include <stdio.h>

int main()
{
   int num, i, arr[50], pos, data;
   printf("\nEnter the number of elements : ");
   scanf("%d", &num);
   printf("Enter elements : ");
   for(i = 0; i < num; i++)
   {
      printf("\nposition %d : ", i+1);
      scanf("%d", &arr[i]);
   }
   printf("\nEnter the position where you want to insert ( 0 to %d) : ", num);
   scanf("%d", &pos);
   if(pos < 0 || pos > num)
   {
      printf("\nInvalid position.");
      return 1;
   }
   printf("\nEnter the data to be inserted : ");
   scanf("%d", &data);
   for(i = num; i > pos; i--)
   {
      arr[i] = arr[i - 1];
   }
   arr[pos] = data;
   num++;
   printf("\nArray after insertion : ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   return 0;
}