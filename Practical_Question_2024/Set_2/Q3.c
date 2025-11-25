/*Write a program in C to print the following pattern.Take number of rows as input.For example, here the number of rows is 5.
    Also include validity checking, i.e., this pattern is not possible for even number of rows.
                                             *****
                                              ***
                                               *
                                              *** 
                                             ***** 
*/

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter an odd number of rows: ");
    if (scanf("%d", &n) != 1) return 1;
    if (n % 2 == 0) {
        printf("Must be odd.\n");
        return 0;
    }

    // Upper half including middle row
    for (int i = 0; i <= n/2; i++) {
        for (int j = 0; j < n; j++) {
            // Print star region: from column i to column (n - i - 1)
            if (j >= i && j < n - i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    // Lower half
    for (int i = n/2 - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (j >= i && j < n - i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}