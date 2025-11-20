/* Write a menu deiven progarm in C to perform the following options on an array of integer numbers:
   (a) Average of even numbers
   (b) Finf minimum number from the array
   The array is to be taken as input from user.
*/

#include <stdio.h>

int main()
{
    int num, sum = 0, c = 0, min, i;
    float avg = 0.0;
    printf("\nEnter the total number : ");
    scanf("%d", &num);
    int a[num];

    printf("\nEnter the elements : ");
    for( i =  0; i < num; i++)
    {
        printf("\nPosition %d is : ", i+1);
        scanf("%d", &a[i]);
    }

    for( i = 0; i < num; i++)
    {
        if( a[i] % 2 == 0)
        {
            c++;
        }
    }

    for( i = 0; i < num; i++)
    {
        if( a[i] % 2 == 0)
        {
            sum += a[i];
        }
    }

    if(c!= 0)
        avg = (sum/c);
    else
        avg = 0;

    printf("\nAverage of even number is : %0.2f", avg);

    for( i = 0; i < num; i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    printf("\nMinimum number is : %d", min);
    
    return 0;
}