/*
Book Structure Management

Create a structure named Book to store book details like title, author, and price.
Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information.

 
Terminal
Input details for Book 1:
Title: Book-1
Author: Author-1
Price: 100

Input details for Book 2:
Title: Book-2
Author: Author-2
Price: 120

Input details for Book 3:
Title: Book-3
Author: Author-3
Price: 111

Most Expensive Book:
Title: Book-2
Author: Author-2
Price: 120.00

Lowest Priced Book:
Title: Book-1
Author: Author-1
Price: 100.00
*/

#include<stdio.h>
#include<string.h>
struct Book 
{
    char title[20];
    char author[20];
    float price;
};
int main() 
{
    int n,i,max=0,min=0,h,l;
    printf("Enter number of books: ");
    scanf("%d",&n);
    struct Book b[n];
    for(i=0;i<n;i++)
    {
        struct Book b[i];
        printf("\nInput Details for Book %d:", i + 1);
        printf("\nTitle: ");
        scanf("%s", b[i].title);
        printf("\nAuthor: ");
        scanf("%s", b[i].author);
        printf("\nPrice: ");
        scanf("%f", &b[i].price);
    }
    max=min=b[0].price;
    for(i=1;i<n;i++) 
    {
        if(b[i].price>max)
        max=b[h].price;
        h=i;
        if(b[i].price<min)
        min=b[l].price;
        l=i;
    }
    printf("\n===================================================\n");
    printf("Most Expensive Book:\n");
    printf("Title: %s\n",b[h].title);
    printf("Author: %s\n",b[h].author);
    printf("Price: %.2f\n",b[h].price);

    printf("\nLeast Expensive Book:\n");
    printf("Title: %s\n",b[l].title);
    printf("Author: %s\n",b[l].author);
    printf("Price: %.2f\n",b[l].price);
    return 0;
}