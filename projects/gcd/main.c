#include <stdio.h>

int gcd(int a, int b) {
    int temp;
    while (b > 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int a, b, result1, result2;
    scanf("%d, %d", &a, &b);
    result1 = gcd(a, b);
    result2 = a * b / result1;
    printf("���Լ���ǣ�%d\n��С�������ǣ�%d\n", result1, result2);
    return 0;
}
