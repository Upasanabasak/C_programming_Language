/* Write a program in C to accept numbers till a negative number is entered and calculate the 
sum of a list of numbers read using static variable.*/

// #include<stdio.h>
// static int arr[],i,sum=0;
// void sum_pos(int arr[],int size)
// {
//     for(i=0;i<size;i++)
//     sum+=arr[i];
//     printf("\nThe sum of the numbers:%d",sum);
// }
// int main()
// {
//     int size;
//     printf("\nEnter the size of array: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("\nEnter the array elements: ");
//     for(i=0;i<size;i++)
//     {
//         printf("\nThe element %d: ",i+1);
//         scanf("%d",&arr[i]);
//         if(arr[i]<0)
//         break;
//     }
//     sum_pos(arr,size);
//     return 0;
// }



#include <stdio.h>
static int sum = 0;
void add_number(int num) 
{
    if(num>=0) 
    sum+=num;
    else 
    printf("The sum of the numbers is: %d\n", sum);
}
int main() 
{
    int num;
    printf("Enter numbers (negative number to stop):\n");
    while(1) 
    {
        scanf("%d",&num);
        add_number(num);
        if(num<0)
        break;
    }
    return 0;
}

