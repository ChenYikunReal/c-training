#include <stdio.h>

/**
 * 打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。
 * 例如：153是一个“水仙花数”，因为153=1的三次方＋5的三次方＋3的三次方。
 * @return
 */
int main() {
    for (int i = 100; i <= 999; i++) {
        int x = i / 100;
        int y = (i - x * 100) / 10;
        int z = i % 10;
        if (x * x * x + y * y * y + z * z * z == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}
