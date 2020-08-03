#include <stdio.h>

/**
 * 打印九九乘法表
 * UTF8
 * @return
 */
int main() {
    int i, j, result;
    printf("\n");
    for (i = 1; i < 10; i++) {
        for (j = 1; j <= i; j++) {
            result = i * j;
            // -3d表示左对齐，占3位
            printf("%d*%d=%-3d", i, j, result);
        }
        printf("\n");
    }
    return 0;
}
