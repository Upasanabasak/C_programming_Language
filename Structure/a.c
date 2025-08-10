#include<stdio.h>

struct Book {
    char title[20];
    char author[20];
    float price;
};

int main() {
    int n, i;
    struct Book b[100], max, min;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nInput Details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", b[i].title);
        printf("Author: ");
        scanf("%s", b[i].author);
        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    max = min = b[0];

    for(i = 1; i < n; i++) {
        if(b[i].price > max.price)
            max = b[i];
        if(b[i].price < min.price)
            min = b[i];
    }

    printf("\n===================================================\n");
    printf("Most Expensive Book:\n");
    printf("Title: %s\n", max.title);
    printf("Author: %s\n", max.author);
    printf("Price: %.2f\n", max.price);

    printf("\nLeast Expensive Book:\n");
    printf("Title: %s\n", min.title);
    printf("Author: %s\n", min.author);
    printf("Price: %.2f\n", min.price);

    return 0;
}