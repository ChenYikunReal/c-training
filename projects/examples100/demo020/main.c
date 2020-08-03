#include <stdio.h>

/**
 * 一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
 * @return
 */
int main() {
    float h,s;
    h=s=100;
    h=h/2; //第一次反弹高度
    for(int i=2;i<=10;i++)
    {
        s=s+2*h;
        h=h/2;
    }
    printf("%f,%f\n",s,h);
    return 0;
}
