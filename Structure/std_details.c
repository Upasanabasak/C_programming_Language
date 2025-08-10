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

    struct student s1;  //Declare a variable of type student
    struct student s2;

    //Assign values to the member of s1
    s1.roll_no=01;
    s1.marks=95.5;
    strcpy(s1.name,"John Deo"); //s1.name="John Deo";

    //Display the values of s1
    printf("\nStudent Roll No:%d",s1.roll_no);
    printf("\nStudent Name:%s",s1.name);
    printf("\nStudent Marks:%.2f",s1.marks);
    return 0;
}