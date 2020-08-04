#include <stdio.h>

/**
 * 八进制转换为十进制
 * @return
 */
int main()
{
    int n=0,i=0;
    char s[20];
    gets(s);
    while(s[i]!='\0'){
        n=n*8+s[i]-'0';
        i++;
    }
    printf("%d\n",n);
    return 0;
}
