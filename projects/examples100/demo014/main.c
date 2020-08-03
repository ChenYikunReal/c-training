#include <stdio.h>

/**
 * 将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5
 *
 * 下面给出的是暴力解法
 * @return
 */
int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d", i);
            n /= i;
            if (n != 1) {
                printf("*");
            }
        }
    }
    printf("\n");
    return 0;
}
