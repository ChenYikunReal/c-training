#include <stdio.h>

// N �� 12
int main() {
    printf("������Ҫ����׳˵���ֵN��");
    int n;
    long long result = 1;
    scanf("%d", &n);
    for (long long i = 1; i <= n; i++) {
        result *= i;
    }
    printf("%d! = %ld", n, result);
    return 0;
}
