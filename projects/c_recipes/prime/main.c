#include <stdio.h>

int main() {
    printf("��������ж���������ֵN��");
    int n, flag = 1;
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    printf("%d%s����", n, (flag == 0 ? "����": "��"));
    return 0;
}
