#include<stdio.h>
#include<string.h>
struct Fullname
{
    char firstName[50];
    char lastName[50];
};
struct Date
{
    int day;
    int month;
    int year;
};
struct Mail
{
    char usersame[50];
    char domain[50];
};
struct Address
{
    char street[50];
    char city[50];
    char state[50];
    char country[50];
};                        
struct Student
{
    int age;
    struct Fullname name;
    struct Date DOB;
    struct Mail mail;
    struct Address address;
};// nested structure


int main()
{
    struct Student Upasana; // declare a variable of type Student

    Upasana.age=19;
    strcpy(Upasana.name.firstName,"Basak");
    strcpy(Upasana.name.firstName,"Upasana");
    Upasana.DOB.day=1;
    Upasana.DOB.month=11;
    Upasana.DOB.year=2005;


    printf("enter your username: ");
    scanf("%s",Upasana.mail.usersame); // using firstName for username
    printf("enter your domain:(e.g - @example.com) ");
    scanf("%s",Upasana.mail.domain); // using lastName for domain
    printf("\nEnter your street name: ");
    scanf("%s",Upasana.address.street);
    printf("\nEnter your city name: ");
    scanf("%s",Upasana.address.city);
    printf("\nEnter your state name: ");
    scanf("%s",Upasana.address.state);
    printf("\nEnter your country name: ");
    scanf("%s",Upasana.address.country);


    printf("\nStudent Name: %s %s",Upasana.name.firstName,Upasana.name.lastName);
    printf("\nStudent Age:%d",Upasana.age);
    printf("\nStudent DOb:%d/%d/%d",Upasana.DOB.day,Upasana.DOB.month,Upasana.DOB.year);
    printf("\nStudent Username: %s\n", Upasana.mail.usersame);
    printf("\nStudent Domain: %s\n",Upasana.mail.domain);
    printf("\nStudents's street name:%s",Upasana.address.street);
    printf("\nStudents's city name:%s",Upasana.address.city);
    printf("\nStudents's state name:%s",Upasana.address.state);
    printf("\nStudents's country name:%s",Upasana.address.country);
    return 0;
}