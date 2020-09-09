#include <stdio.h>
#include <string.h>

struct Books {
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
};

void printBook(struct Books *book);

int main() {
    struct Books book1;
    struct Books book2;
    strcpy(book1.title, "·è¿ñJava½²Òå");
    strcpy(book1.author, "Àî¸Õ");
    strcpy(book1.subject, "±à³ÌÓïÑÔ");
    book1.book_id = 123;
    strcpy(book2.title, "·è¿ñPython½²Òå");
    strcpy(book2.author, "Àî¸Õ");
    strcpy(book2.subject, "±à³ÌÓïÑÔ");
    book2.book_id = 456;
    printBook(&book1);
    printBook(&book2);
    return 0;
}

void printBook(struct Books *book) {
    printf( "Book title : %s\n", book->title);
    printf( "Book author : %s\n", book->author);
    printf( "Book subject : %s\n", book->subject);
    printf( "Book book_id : %d\n", book->book_id);
}
