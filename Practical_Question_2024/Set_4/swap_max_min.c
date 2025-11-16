/* Write a program in C to swap maximum and minimum elements in a matrix (1D-array). 
The matrix should be taken as input from user.
Example :

array[5] ={ 5 ,4,3,2,1}
after swapping 
array[5} = {1,4,3,2,5}
*/

#include<stdio.h>

int main()
{
    int num, i, max, min;
    printf("\nEnter a number: "); //5
    scanf("%d", &num); //5
    int a[num]; //5
    printf("\nEnter elements: ");
    for( i = 0; i < num; i++)
    {
        printf("\nPosition %d : ", i+1); //1,5,7,9,2
        scanf("%d", &a[i]); //1,5,7,9,2
    }
    max = min = a[0]; //max = min = 1 
    for( i = 0; i < num; i++)
    {
        if(a[i] > max) // f,t,t,t,f
            max = a[i]; // 5,7,9
        if(a[i] < min) //f,
            min = a[i]; //1
    }
    printf("\nmax = %d, min = %d", max, min); //max=9, min=1
    for( i = 0; i < num; i++)
    {
        if( a[i] == max ) // f
            a[i] = min;
        else if( a[i] == min )  //t
            a[i] = max;
    }
    printf("\nAfter swapping maximum and minimum elements in a matrix (1D-array): ");
    for( i = 0; i < num; i++)
        printf("\n%d ", a[i]);
    return 0;
}