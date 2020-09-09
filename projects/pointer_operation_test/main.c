#include <stdio.h>

const int MAX = 3;

int main() {
    int  var[] = {10, 100, 200};
    int  i, *ptr;
    // 正着来递增访问数组
    ptr = var;
    for ( i = 0; i < MAX; i++) {
        printf("存储地址：var[%d] = %x\n", i, ptr);
        printf("存储值：var[%d] = %d\n", i, *ptr);
        /* 移动到下一个位置 */
        ptr++;
    }
    // 倒着来递减访问数组
    ptr = &var[MAX-1];
    for ( i = MAX; i > 0; i--) {
        printf("存储地址：var[%d] = %x\n", i-1, ptr);
        printf("存储值：var[%d] = %d\n", i-1, *ptr);
        /* 移动到下一个位置 */
        ptr--;
    }
    // 指针的比(其实就是地址数值的比较)
    ptr = var;
    i = 0;
    while (ptr <= &var[MAX - 1]) {
        printf("Address of var[%d] = %p\n", i, ptr);
        printf("Value of var[%d] = %d\n", i, *ptr);
        /* 指向上一个位置 */
        ptr++;
        i++;
    }
    return 0;
}
