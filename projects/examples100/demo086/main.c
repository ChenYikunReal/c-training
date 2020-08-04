#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strConnect(char *str1, char *str2)
{
    char*str;
    str=(char*)malloc(strlen(str1)+strlen(str2)+1);
    str[0]='\0';
    strcat(str,str1);
    strcat(str,str2);
    return str;
}

/**
 * 两个字符串连接
 * @return
 */
int main()
{
    char str1[20],str2[20];
    char *str;
    scanf("%s%s", str1, str2);
    str= strConnect(str1, str2);
    puts(str);
    return 0;
}
