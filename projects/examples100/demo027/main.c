#include <stdio.h>

void fun(char* s,int length)
{
    if (length >= 1)
    {
        printf("%c", s[length - 1]);
        fun(s, length - 1);
    }
}

/**
 * 利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来
 * @return
 */
int main()
{
    char* s = "hello";
    int length = 5;
    fun(s, length);
    return 0;
}
