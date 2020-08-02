#include <stdio.h>

/**
 * 输出国际象棋棋盘
 * 调不好编码就是乱码
 * @return
 */
int main() {
    int i,j;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if((i+j)%2 == 0) {
                printf("%c%c",219,219);
            } else {
                printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
