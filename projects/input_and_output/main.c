#include <stdio.h>

int main() {
    int c;
    printf("Enter a value :");
    // getchar()函数从屏幕读取下一个可用的字符，并把它返回为一个整数(这个函数在同一个时间内只会读取一个单一的字符)
    c = getchar();
    printf("\nYou entered: ");
    // putchar(int c)函数把字符输出到屏幕上，并返回相同的字符(这个函数在同一个时间内只会输出一个单一的字符)
    putchar(c);
    printf("\n");
    char str1[100];
    printf("Enter a value :");
    // char *gets(char *s)函数从stdin读取一行到s所指向的缓冲区，直到一个终止符或EOF
    gets(str1);
    printf("\nYou entered: ");
    // int puts(const char *s)函数把字符串s和一个尾随的换行符写入到stdout
    puts(str1);
    char str2[100];
    int i;
    printf( "Enter a value :");
    // int scanf(const char *format, ...)函数从标准输入流stdin读取输入，并根据提供的format来浏览输入
    scanf("%s %d", str2, &i);
    // int printf(const char *format, ...)函数把输出写入到标准输出流stdout，并根据提供的格式产生输出
    printf("\nYou entered: %s %d ", str2, i);
    printf("\n");
    return 0;
}
