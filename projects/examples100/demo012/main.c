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
 * �ж�101-200֮���ж��ٸ��������������������
 * �����ñ����ⷨ�����﷨
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
    printf("һ��%d��", counter);
    return 0;
}
