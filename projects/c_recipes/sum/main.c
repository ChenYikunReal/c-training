#include <stdio.h>

int main() {
    printf("��������Ҫ��͵�����ֵN��");
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("��ͽ��Ϊ��%d", sum);
    return 0;
}
