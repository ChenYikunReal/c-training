#include <stdio.h>

int main() {
    printf("请输入想要求和到的数值N：");
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("求和结果为：%d", sum);
    return 0;
}
