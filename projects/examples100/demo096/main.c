#include <stdio.h>
#include <string.h>

/**
 * 计算字符串中子串出现的次数
 * @return
 */
int main() {
    int i,j,k,TLen,PLen,count=0;
    char T[50],P[10];
    gets(T);
    gets(P);
    TLen=strlen(T);
    PLen=strlen(P);
    for(i=0;i<=TLen-PLen;i++)
    {
        for(j=0,k=i;j<PLen&&P[j]==T[k];j++,k++)
            ;
        if(j==PLen)count++;
    }
    printf("%d\n",count);
    return 0;
}
