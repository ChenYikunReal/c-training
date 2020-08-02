#include <stdio.h>

int nums[101];

int check(int j) {
    for (int i = 1; i <= 100; i++) {
        if (nums[i] == j) {
            return 1;
        }
    }
    return 0;
}

/**
 * 一个正整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
 * 相邻平方数之差：X、3、5、7、9... 为(2n-1)，所以相差168至多是84^2=7056
 * 答案156
 * @return
 */
int main() {
    // 一直到int的边界
    for (int i = 1; i <= 100; i++) {
        nums[i] = i*i;
    }
    for (int i = 1; i <= 7056; i++) {
        if (check(i+100) && check(i+168)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
