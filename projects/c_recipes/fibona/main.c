#include <stdio.h>

int main() {
    printf("请输入斐波那契数列的N：");
    int n, prev = 1, next = 1, temp;
    scanf("%d", &n);
    if (n > 2) {
        for (int i = 3; i <= n; i++) {
            temp = prev;
            prev = next;
            next += temp;
        }
    }
    printf("计算结果为：%d", next);
    return 0;
}
