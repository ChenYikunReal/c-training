#include <stdio.h>

int main() {
    // 常规数组
    int n[10];
    int i, j;
    for (i = 0; i < 10; i++){
        n[i] = i + 100;
    }
    for (j = 0; j < 10; j++) {
        printf("n[%d] = %d\n", j, n[j] );
    }
    // 测试大括号之作用
    int m[5] = {1};
    for (j = 0; j < 10; j++) {
        // 数组越界后并不会检查报错，而是出现“奇怪”的值
        printf("m[%d] = %d\n", j, m[j] );
    }
    // 脏值
    int p[10];
    for (j = 0; j < 10; j++) {
        // 数组非全局变量且定义时不初始化 数据就可能很奇怪
        printf("p[%d] = %d\n", j, p[j] );
    }
    return 0;
}
