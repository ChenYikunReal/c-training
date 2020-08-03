#include <stdio.h>

int isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    return 0;
}

/**
 * 判断101-200之间有多少个素数，并输出所有素数
 * 这里用暴力解法，练语法
 * @return
 */
int main() {
    int counter = 0;
    for (int i = 101; i <= 200; i++) {
        if (!isPrime(i)) {
            printf("%d\n", i);
            counter++;
        }
    }
    printf("一共%d个", counter);
    return 0;
}
