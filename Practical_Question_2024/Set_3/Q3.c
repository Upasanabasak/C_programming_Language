/* Write a program in C to convert any number into its Roman Equivalent with following notation : 
[1 --> I, 2 --> II, 5 --> V, 50 --> L, 100 --> C, 500 --> D, 1000 --> M] 
*/

#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter number : ");
    scanf("%d", &num);
    printf("\nRoman of %d is : ",num);
    while(num > 0)
    {
        if(num > 1000)
        {
            printf("M");
            num -= 1000;
        }
        else if(num >= 500)
        {
            if(num >= 900)
            {
                printf("CM");
                num -= 900;
            }
            else
            {
                printf("D");
                num -= 500;
            }
        }
        else if(num >= 100)
        {
            if(num >= 400)
            {
                printf("CD");
                num -= 400;
            }
            else
            {
                printf("C");
                num -= 100;
            }
        }
        else if(num >= 50)
        {
            if(num >= 90)
            {
                printf("XC");
                num -= 90;
            }
            else
            {
                printf("L");
                num -= 50;
            }
        }
        else if(num >= 9)
        {
            if(num >= 40)
            {
                printf("XL");
                num -= 40;
            }
            else if(num == 9)
            {
                printf("IX");
                num -= 9;
            }
            else
            {
                printf("X");
                num -= 10;
            }
        }
        else if(num >= 4)
        {
            if(num >= 5)
            {
                printf("V");
                num -= 5;
            }
            else
            {
                printf("IV");
                num -= 4;
            }
        }
        else
        {
            printf("I");
            num -= 1;
        }
    }
    return 0;
}