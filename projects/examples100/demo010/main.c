#include <stdio.h>

/**
 * 打印楼梯，同时在楼梯上方打印两个笑脸
 * @return
 */
int main() {
    int i, j;
    // 笑脸
    printf("\1\1\n");
    for(i = 1; i < 11; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c%c",219,219);
        }
        printf("\n");
    }
    return 0;
}
