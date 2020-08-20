#include <stdio.h>
#include "pass_by_value.c"
#include "pass_by_reference.c"

int main() {
    int a = 100;
    int b = 200;
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    swap_by_value(a, b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    swap_ny_reference(&a, &b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    return 0;
}
