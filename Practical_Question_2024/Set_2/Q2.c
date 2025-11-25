// Write a C program which accept 20 integers and display the frequency of occurence of each distinct integer.

#include <stdio.h>

#define SIZE 20

int main() {
    int arr[SIZE];
    int visited[SIZE]; // Array to keep track of counted elements
    int i, j, count;

    // Initialize visited array to 0 (false)
    for (i = 0; i < SIZE; i++) {
        visited[i] = 0;
    }

    // 1. Accept input from the user
    printf("Please enter %d integers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 2. Calculate and display frequencies
    printf("\n--- Frequency of distinct integers ---\n");
    printf("%-10s %-10s\n", "Integer", "Frequency");
    printf("----------------------\n");

    for (i = 0; i < SIZE; i++) {
        // If this element has already been counted, skip it
        if (visited[i] == 1) {
            continue;
        }

        count = 1; // Reset count for the new distinct integer

        // Check the rest of the array for duplicates
        for (j = i + 1; j < SIZE; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark this index as visited so we don't count it again
            }
        }

        // Print the result for this distinct integer
        printf("%-10d %-10d\n", arr[i], count);
    }

    return 0;
}