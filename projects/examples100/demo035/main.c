#include <stdio.h>
#include<string.h>

void reverse(char *str)
{
    int len;
    char tmp;
    char *begin,*end;
    len=strlen(str); //获取字符串长度
    begin=str;       //指针begin指向字符串首地址
    end=str+len-1;     //指针end指向字符串尾地址
    while(begin<end)
    {
        tmp=*begin;
        *begin=*end;
        *end=tmp;
        begin++;
        end--;
    }
}

/**
 * 字符串反转
 * @return
 */
int main() {
    char string[]="hello,world";
    reverse(string);
    puts(string);
    return 0;
}
