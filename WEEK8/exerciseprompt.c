#include <stdio.h>

struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {
    struct book Book1;

    // Prompt user to enter book details
    printf("Enter book title: ");
    fgets(Book1.title, sizeof(Book1.title), stdin);
    printf("Enter book author: ");
    fgets(Book1.author, sizeof(Book1.author), stdin);
    printf("Enter publication year: ");
    scanf("%d", &Book1.publication_year);
    printf("Enter ISBN: ");
    scanf("%s", Book1.ISBN);
    printf("Enter price: ");
    scanf("%f", &Book1.price);

    // Print book details
    printf("\nBook Details:\n");
    printf("Title: %s", Book1.title);
    printf("Author: %s", Book1.author);
    printf("Publication Year: %d\n", Book1.publication_year);
    printf("ISBN: %s\n", Book1.ISBN);
    printf("Price: %.2f\n", Book1.price);

    return 0;
}
