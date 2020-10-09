#include <stdio.h>

int main() {
    printf("请输入待判断质数的数值N：");
    int n, flag = 1;
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    printf("%d%s质数", n, (flag == 0 ? "不是": "是"));
    return 0;
}
