// Q149: Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[50];
    float price;
};

int main() {
    struct Book *b = (struct Book *)malloc(sizeof(struct Book));
    if (b == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter book title: ");
    if (scanf("%s", b->title) != 1) { free(b); return 0; }
    printf("Enter author: ");
    scanf("%s", b->author);
    printf("Enter price: ");
    scanf("%f", &b->price);

    printf("\nBook Details:\nTitle: %s\nAuthor: %s\nPrice: $%.2f\n",
           b->title, b->author, b->price);

    free(b);
    return 0;
}
