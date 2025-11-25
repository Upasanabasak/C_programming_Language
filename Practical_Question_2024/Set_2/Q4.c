/* Write a program in C to find maximum and second maximum numbers from an array with integers.
   Then swap these two numbers.Do not use sorting technique.
*/

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max_idx = 0, sec_max_idx = -1;
    int temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);  // 7

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) { // 55 44 676 34 678 34 97 
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("Array needs at least two elements.\n");
        return 1;
    }

    // Find the index of the maximum element
    for (i = 1; i < n; i++) {
        if (arr[i] > arr[max_idx]) {  //55, 676, 678
            max_idx = i;  //2, 4
        }
    }

    // Find the index of the second maximum element
    for (i = 0; i < n; i++) { //i = 0, 1, 2, 3, 4, 5, 6
        if (i == max_idx) continue; // Skip the maximum element  //f, f,f, f, t, f

        if (sec_max_idx == -1 || arr[i] > arr[sec_max_idx]) {  // t|| t, f||f, f||t,f||f, f||f , f||f 
            sec_max_idx = i;// 0, 2
        }
    }

    printf("\nMaximum: %d (at index %d)\n", arr[max_idx], max_idx);
    printf("Second Maximum: %d (at index %d)\n", arr[sec_max_idx], sec_max_idx);

    // Swap maximum and second maximum
    temp = arr[max_idx];
    arr[max_idx] = arr[sec_max_idx];
    arr[sec_max_idx] = temp;

    printf("\nArray after swapping:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}