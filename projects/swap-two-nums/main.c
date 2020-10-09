#include <stdio.h>

void swap_by_pointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 1, b = 2;
    printf("a=%d, b=%d\n", a, b);
    swap_by_pointer(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
