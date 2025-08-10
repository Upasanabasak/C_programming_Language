/*
Write a program in C to show the use of Array, declared dynamically to read 10 numbers and display them.
*/

#include<stdio.h>
int main()
{
    int arraySize;
    printf("Enter the size of the array: "); // 10
    scanf("%d", &arraySize); // Taking input for the size of the array

    int arr[arraySize]; // Declare an array of the specified size;

    printf("Enter %d elements for the array:\n", arraySize); // Prompt user to enter elements

    for(int i = 0 ; i < arraySize; i++)
    {
        printf("Element %d: ", i+1); // Prompt for each element
        scanf("%d", &arr[i]); // Read each element into the array
    }
    printf("\n========================");

    printf("\nArray elements are:\n");
    for(int i = 0 ; i < arraySize; i++)
    {
        printf("Element %d: %d\n", i+1, arr[i]); // Print each element of the array
    } 
    return 0;
}