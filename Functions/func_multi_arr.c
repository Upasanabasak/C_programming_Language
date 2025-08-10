/*
Write a function to add two arrays integers of the same size and return the result as a new  array.
1 2 3 --> a1
 c

In main function ask the user for the size
declare two arrays of integers with the given size,
ask the user for array elements,
call the function to add arrays and the result in a new array,
print the result array.
*/

#include <stdio.h>
void multi_two_arrays(int arr1[], int arr2[],int size){ // 1| 2 | 3 | 4| 5      6 | 7 |8 |9| 10  =>  7|9|..|..|..   // int size = sizeof(arr1) / sizeof(arr1[0]); // Calculate the size of the arrays
    
    int multi_arr[size];
    for(int i = 0; i < size; i++) {
        multi_arr[i] = arr1[i]*arr2[i]; // Add corresponding elements of the two arrays
    }
    printf("Multiplale of the two arrays:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", multi_arr[i]); // Print the result array
    }
}

int main(){
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size); // 5

    int arr1[size], arr2[size];

    // Input elements for first array
    printf("Enter elements for first array:\n");
    for(int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1); // 1 ,2 ,3 ,4 ,5
        scanf("%d", &arr1[i]);
    }

    // Input elements for second array
    printf("Enter elements for second array:\n");
    for(int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1); // 6 ,7 ,8 ,9 ,10
        scanf("%d", &arr2[i]);
    }
    multi_two_arrays(arr1,arr2,size);
    return 0;
}