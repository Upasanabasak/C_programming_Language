// Write a C program that converts number of any base to decimal number.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char hex[20];
    long decimal;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    // strtol converts string to long, base 16 for hex
    decimal = strtol(hex, NULL, 16);

    printf("Hexadecimal: %s\n", hex);
    printf("Decimal: %ld\n", decimal);

    return 0;
}