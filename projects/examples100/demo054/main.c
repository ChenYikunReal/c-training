#include <stdio.h>

/**
 * 取一个整数 a 从右端开始的 4～7 位
 * @return
 */
int main() {
    unsigned a,b,c,d;
    scanf("%o",&a);
    b=a>>4;
    c=~(~0<<4);
    d=b&c;
    printf("%o\n%o\n",a,d);
    return 0;
}
