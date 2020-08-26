#include <stdio.h>

int main() {
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;
    int i;
    p = balance;
    // 使用指针的数组值
    for (i = 0; i < 5; i++) {
        printf("*(p + %d) : %f\n",  i, *(p + i));
    }
    // 使用balance作为地址的数组值
    printf( "\n");
    for (i = 0; i < 5; i++) {
        printf("*(balance + %d) : %f\n",  i, *(balance + i));
    }
    return 0;
}
