#include <stdio.h>

/**
 * ȡһ������ a ���Ҷ˿�ʼ�� 4��7 λ
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
