// Write a C program that converts number of any base to decimal number.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long int num, option, t, r;
    long decimal;
    char hex[20];
    int power;

    do
    {
        printf("\n---Menu Choice---");
        printf("\n1. Binary to Decimal");
        printf("\n2. Octal to Decimal");
        printf("\n3. Hexadecimal to Decimal");
        printf("\n4. Exit");
        printf("\nEnter the choice : ");
        scanf("%d", &option);

        switch (option)
        {
            // -------------------- Binary to Decimal --------------------
            case 1:
                    decimal = 0;
                    power = 0;
                    printf("\nEnter a binary number : ");
                    scanf("%ld", &num);
                    t = num;

                    while (num > 0)
                    {
                        r = num % 10;
                        decimal += r * pow(2, power);
                        power++;
                        num /= 10;
                    }

                    printf("\nDecimal of %ld is : %ld\n", t, decimal);
                    break;

            // -------------------- Octal to Decimal --------------------
            case 2:
                    decimal = 0;
                    power = 0;
                    printf("\nEnter an octal number : ");
                    scanf("%ld", &num);
                    t = num;

                    while (num > 0)
                    {
                        r = num % 10;
                        decimal += r * pow(8, power);
                        power++;
                        num /= 10;
                    }

                    printf("\nDecimal of %ld is : %ld\n", t, decimal);
                    break;

            // -------------------- Hexadecimal to Decimal --------------------
            case 3:
                    printf("\nEnter a hexadecimal number : ");
                    scanf("%s", hex);

                    // strtol converts string to long, base 16 for hex
                    decimal = strtol(hex, NULL, 16);

                    printf("\nDecimal of %s is: %ld\n", hex, decimal);
                    break;

            case 4:
                    printf("\nExiting...\n");
                    return 0;

            default:
                    printf("\nInvalid Choice!\n");
        }

    } while (option != 4);

    return 0;
}
