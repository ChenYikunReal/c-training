#include <stdio.h>

/**
 * 输入一个整数，并将其反转后输出
 * @return
 */
int main() {
    int n, reversedNumber = 0, remainder;
    scanf("%d", &n);
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    printf("%d", reversedNumber);
    return 0;
}
