#include <stdio.h>

/**
 * 给一个不多于5位的正整数
 * 1. 求它是几位数
 * 2. 逆序打印出各位数字
 * @return
 */
int main() {
    int n;
    scanf("%d",&n);
    int x[1000];
    int i=0;
    int j=0;
    while(n!=0)
    {
        x[i]=n%10;
        n=n/10;
        i++;
    }
    int z=i;
    printf("%d\n",z);
    for(j=0;j<z;j++)
    {
        printf("%d",x[j]);
    }
    return 0;
}
