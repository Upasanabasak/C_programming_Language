/*
take array size from user and then the array elements 
add the array elements and print the sum of the array elements
also print the array elements
*/

#include <stdio.h>
int main() 
{
    int arraySize;
    printf("Enter the size of the array: "); // Prompt user for the size of the array
    scanf("%d", &arraySize); // Read the size of the array

    int arr[arraySize]; // Declare an array of the specified size

    printf("\nEnter %d elements for the array: ", arraySize); // Prompt user to enter elements

    for (int i = 0; i < arraySize; i++) {
        printf("\nElement %d: ", i+1); // Prompt for each element
        scanf("%d", &arr[i]); // Read each element into the array
    }

    int sum = 0; // Initialize sum variable to 0
    printf("\nArray elements are:\n");
    
    for (int i = 0; i < arraySize; i++) {
        printf("\nElement %d: %d\n", i+1, arr[i]); // Print each element of the array
        sum += arr[i]; // Add each element to sum
    }

    printf("\nSum of the array elements: %d\n", sum); // Print the sum of the array elements
    return 0;
}