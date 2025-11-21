/* Define a structure named 'student' which contains following fields : 
   roll, name, marks in subject 1 and marks in subject2. 
Write a program in C to find the name and roll no. of the student who achieved highest marks in each.
*/

#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    char name[20];
    int sub1;
    int sub2;
};

int main()
{
    int num_stu, i, sub1_max = 0, sub2_max = 0;
    printf("\nEnter number of student : ");
    scanf("%d", &num_stu);
    struct student s[num_stu];

    printf("\nEnter student details :");
    for(i = 0; i < num_stu; i++)
    {
        printf("\nStudent %d :", i+1);
        printf("\nEnter roll number : ");
        scanf("%d", &s[i].roll_no);
        getchar();
        printf("\nEnter name : ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name,"\n")] = '\0';
        printf("Enter marks for subject1 : ");
        scanf("%d", &s[i].sub1);
        printf("\nEnter marks for subject2 : ");
        scanf("%d", &s[i].sub2);
    }
    
    // Print table header
    printf("\n-----------------------------------------------\n");
    printf("| Roll |        Name        | Sub1 | Sub2 |\n");
    printf("-----------------------------------------------\n");

    // Print student details in table format
    for (int i = 0; i < num_stu; i++) {
        printf("| %-4d | %-18s | %-4d | %-4d |\n",
               s[i].roll_no, s[i].name, s[i].sub1, s[i].sub2);
    }

    printf("-----------------------------------------------\n");
    for( i = 1; i < num_stu; i++)
    {
        if( s[i].sub1 > s[sub1_max].sub1)
        {
            sub1_max = i;
        }
        if( s[i].sub2 > s[sub2_max].sub2)
        {
            sub2_max = i;
        }    
    }

    printf("\nStudent with hightest mark in suject1 : ");
    printf("\nRoll number : %d,Name : %s",s[sub1_max].roll_no, s[sub1_max].name);
    printf("\nStudent with hightest mark in suject2 : ");
    printf("\nRoll number : %d,Name : %s",s[sub2_max].roll_no, s[sub2_max].name);

    return 0;
}