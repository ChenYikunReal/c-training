#include <stdio.h>

#define N 10

/**
 * 将一个数组逆序输出
 * @return
 */
int main() {
    int a[N]={0,1,2,3,4,5,6,7,8,9};
    int i,t;
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<N/2;i++)
    {
        t=a[i];
        a[i]=a[N-1-i];
        a[N-1-i]=t;
    }
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
