#include <stdio.h>

int main() {
    printf("������쳲��������е�N��");
    int n, prev = 1, next = 1, temp;
    scanf("%d", &n);
    if (n > 2) {
        for (int i = 3; i <= n; i++) {
            temp = prev;
            prev = next;
            next += temp;
        }
    }
    printf("������Ϊ��%d", next);
    return 0;
}
