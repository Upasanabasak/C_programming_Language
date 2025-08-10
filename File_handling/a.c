#include<stdio.h>
int main() 
{
    int n, num, max;

    printf("Enter how many numbers you want to input: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;  // Initialize max with the first input

    for (int i = 2; i <= n; i++) 
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max) 
        {
            max = num;
        }
    }

    printf("Maximum number is: %d\n", max);
    return 0;
}