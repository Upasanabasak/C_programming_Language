/*Write a program to check students grade using switch case*/
#include<stdio.h>
int main()
{
    int marks;
    printf("\nEnter the marks: ");
    scanf("%d",&marks);
    switch(marks/10)
    {
        case 10:case 9:
        printf("\nGrade A");
        break;
        case 8:
        printf("\nGrade B");
        break;
        case 7:
        printf("\nGrade C");
        break;
        case 6:
        printf("\nGrade D");
        break;
        default: printf("\nFail");
    }
    return 0;
}