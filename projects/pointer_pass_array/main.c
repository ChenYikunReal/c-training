#include <stdio.h>

int main() {
    int i;
    char x[20] = "0123456789ABCDEFGHIJ";
    for (i = 0; i < 20; i++) {
        printf("x[%d]:%c\n", i, x[i]);
    }
    char *p;
    // 每次移动一个字节
    for (p = &x[0]; p < &x[20]; p++) {
        printf("%c", *p);
    }
    printf("\n");
    return 0;
}
