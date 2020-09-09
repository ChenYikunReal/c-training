#include <stdio.h>

struct Books{
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
} book = {"∑ËøÒJavaΩ≤“Â", "¿Ó∏’", "±‡≥Ã”Ô—‘", 123};

int main() {
    printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);
    return 0;
}
