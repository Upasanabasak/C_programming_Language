#include<stdio.h>
#include<string.h>
struct Student 
{
    char name[50]; //[ |  |   | |   |   |   |   |]
    int age; // &age = 0x12345678
};
int main()
{
   struct Student sristi;
   strcpy(sristi.name, "sristi");
   sristi.age = 20;
   struct Student  *sristiPtr = &sristi; // Pointer to the struct Student
   printf("Name: %s\n", sristiPtr->name); // Accessing name using pointer
   printf("Age: %d\n", sristiPtr->age); // Accessing age using pointer
   return 0;
}