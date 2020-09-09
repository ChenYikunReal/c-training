#include <stdio.h>
#include <string.h>

struct Books {
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
};

void printBook(struct Books book);

int main() {
    struct Books book1;
    struct Books book2;
    strcpy(book1.title, "∑ËøÒJavaΩ≤“Â");
    strcpy(book1.author, "¿Ó∏’");
    strcpy(book1.subject, "±‡≥Ã”Ô—‘");
    book1.book_id = 123;
    strcpy(book2.title, "∑ËøÒPythonΩ≤“Â");
    strcpy(book2.author, "¿Ó∏’");
    strcpy(book2.subject, "±‡≥Ã”Ô—‘");
    book2.book_id = 456;
    printBook(book1);
    printBook(book2);
    return 0;
}

void printBook( struct Books book ) {
    printf("Book title : %s\n", book.title);
    printf("Book author : %s\n", book.author);
    printf("Book subject : %s\n", book.subject);
    printf("Book book_id : %d\n", book.book_id);
}
