#include <stdio.h>

/**
 * ��ӡ�žų˷���
 * UTF8
 * @return
 */
int main() {
    int i, j, result;
    printf("\n");
    for (i = 1; i < 10; i++) {
        for (j = 1; j <= i; j++) {
            result = i * j;
            // -3d��ʾ����룬ռ3λ
            printf("%d*%d=%-3d", i, j, result);
        }
        printf("\n");
    }
    return 0;
}
