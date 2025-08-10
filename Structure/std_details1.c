//Write a program in C to read the data of a student, store it in a structure and display it.

#include<stdio.h>
#include<string.h>
//Define a structure named student
struct student
{
    int roll_no;
    char name[50];
    float marks;
};
int main()
{
    // int number=10;
    // float marks=102.5;
    // char grade='A';
    int size,i;
    struct student s1;  //Declare a variable of type student
    struct student s2;
    struct student s3;
    getchar();
    printf("\nEnter the number: ");
    scanf("%d",&size);
    for(i=0;i<=size;i++)
    {
    printf("\nEnter your name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    printf("\nEnter your roll_no.: ");
    scanf("%d",&s1.roll_no);
    printf("\nEnter your marks: ");
    scanf("%f",&s1.marks);

    // printf("\nEnter your name: ");
    // fgets(s2.name, sizeof(s2.name), stdin);
    // printf("\nEnter your roll_no.: ");
    // scanf("%d",&s2.roll_no);
    // printf("\nEnter your marks: ");
    // scanf("%f",&s2.marks);

    // printf("\nEnter your name: ");
    // fgets(s3.name, sizeof(s3.name), stdin);
    // printf("\nEnter your roll_no.: ");
    // scanf("%d",&s3.roll_no);
    // printf("\nEnter your marks: ");
    // scanf("%f",&s3.marks);
    }

    //Display the values of s1
    printf("\n==============================================");
    for(i=0;i<size;i++)

    printf("\nStudent Name:%s",s1.name);
    printf("\nStudent Roll No:%d",s1.roll_no);
    printf("\nStudent Marks:%.2f",s1.marks);

    // printf("\nStudent Name:%s",s2.name);
    // printf("\nStudent Roll No:%d",s2.roll_no);
    // printf("\nStudent Marks:%.2f",s2.marks);

    // printf("\nStudent Name:%s",s3.name);
    // printf("\nStudent Roll No:%d",s3.roll_no);
    // printf("\nStudent Marks:%.2f",s3.marks);
    return 0;
}