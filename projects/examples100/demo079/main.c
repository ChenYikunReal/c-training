#include <stdio.h>
#include <string.h>

void swap(char*str1,char*str2);

/**
 * 字符串排序
 * @return
 */
int main()
{
    char str1[20],str2[20],str3[20];
    fgets(str1, (sizeof str1 / sizeof str1[0]), stdin);
    fgets(str2, (sizeof str2 / sizeof str2[0]), stdin);
    fgets(str3, (sizeof str3 / sizeof str3[0]), stdin);
    if(strcmp(str1,str2)>0)swap(str1,str2);
    if(strcmp(str2,str3)>0)swap(str2,str3);
    if(strcmp(str1,str2)>0)swap(str1,str2);
    printf("%s\n%s\n%s\n",str1,str2,str3);
    return 0;
}

void swap(char*str1,char*str2)
{
    char tem[20];
    strcpy(tem,str1);
    strcpy(str1,str2);
    strcpy(str2,tem);
}
