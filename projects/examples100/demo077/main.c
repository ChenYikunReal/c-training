#include <stdio.h>

/**
 * 填空练习（指向指针的指针）
 * @return
 */
int main()
{
    const char *s[]={"man","woman","girl","boy","sister"};
    const char **q;
    int k;
    for(k=0;k<5;k++)
    {
        q=&s[k];
        printf("%s\n",*q);
    }
    return 0;
}
