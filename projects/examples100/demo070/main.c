#include <stdio.h>

/**
 * 求字符串长度
 * @param s
 * @return
 */
int length(char *s)
{
    int i=0;
    while(*s!='\0')
    {
        i++;
        s++;
    }
    return i;
}

/**
 * 写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度
 * @return
 */
int main() {
    int len;
    char str[20];
    scanf("%s",str);
    len=length(str);
    printf("%d",len);
    return 0;
}
