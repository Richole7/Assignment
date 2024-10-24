#include <stdio.h>

// Define the book structure
struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {
    // Declare a variable of the book structure type and initialize it
    struct book myBook = {
        "Introduction to C Programming",
        "John Smith",
        2022,
        "9780131103627",
        49.99
    };

    // Print the values of the fields
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);

    return 0;
}
