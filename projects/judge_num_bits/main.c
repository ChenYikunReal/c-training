#include <stdio.h>

int main() {
    int n, counter = 0;
    scanf("%d", &n);
    while (n > 0) {
        n /= 10;
        counter++;
    }
    printf("��λ��%d��", counter);
    return 0;
}
