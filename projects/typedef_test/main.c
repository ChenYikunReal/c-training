#include <stdio.h>
#include <string.h>

// typedef��������Ϊ����ȡһ���µ�����
typedef struct Books {
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
} Book;

int main() {
    Book book;
    strcpy(book.title, "���Java����");
    strcpy(book.author, "���");
    strcpy(book.subject, "�������");
    book.book_id = 123;
    printf("����� : %s\n", book.title);
    printf("������ : %s\n", book.author);
    printf("����Ŀ : %s\n", book.subject);
    printf("�� ID : %d\n", book.book_id);
    return 0;
}
