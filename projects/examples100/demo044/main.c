#include <stdio.h>

int a,b,c;

void add()
{
    int a;
    a=3;
    c=a+b;
}

/**
 * ѧϰʹ��external���÷�
 * @return
 */
int main()
{
    a=b=4;
    add();
    printf("c ��ֵΪ %d\n",c);
    return 0;
}
