#include <stdio.h>

int main() {
    int n, counter = 0;
    scanf("%d", &n);
    while (n > 0) {
        n /= 10;
        counter++;
    }
    printf("数位有%d个", counter);
    return 0;
}
