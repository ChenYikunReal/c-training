#include <stdio.h>

#define N 3

/**
 * 求一个3*3矩阵对角线元素之和
 * @return
 */
int main() {
    int i,j,a[N][N],sum=0;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<N;i++)
        sum+=a[i][i];
    printf("%d\n",sum);
    return 0;
}
