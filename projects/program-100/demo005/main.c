#include <stdio.h>

/**
 * 输入三个整数x,y,z，请把这三个数由小到大输出。
 * @return
 */
int main() {
    int x, y, z;
    scanf("%d,%d,%d", &x, &y, &z);
    if (x > y) {
        if (y > z) {
            printf("%d,%d,%d", z, y, x);
        } else if (x > z) {
            printf("%d,%d,%d", y, z, x);
        } else {
            printf("%d,%d,%d", y, x, z);
        }
    } else if (x > z) {
        printf("%d,%d,%d", z, x, y);
    } else if (y > z) {
        printf("%d,%d,%d", x, z, y);
    } else {
        printf("%d,%d,%d", x, y, z);
    }
    return 0;
}
