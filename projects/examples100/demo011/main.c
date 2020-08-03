#include <stdio.h>

/**
 * 古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
 * 斐波那契问题
 * （输出前40个月即可）
 * @return
 */
int main() {
    int x = 1, y = 1;
    printf("%d, %d", x, y);
    for (int i = 0; i < 20; i++) {
        int z = x + y;
        x = y;
        y = z;
        printf(", %d", z);
    }
    return 0;
}
