#include <stdio.h>

int main() {
    // 1
    printf("%llu\n", sizeof(char));
    // 2
    printf("%llu\n", sizeof(short int));
    // 4
    printf("%llu\n", sizeof(int));
    // 4
    printf("%llu\n", sizeof(unsigned int));
    // 4
    printf("%llu\n", sizeof(float));
    // 8
    printf("%llu\n", sizeof(double));
    // 4
    printf("%llu\n", sizeof(long));
    // 4
    printf("%llu\n", sizeof(long int));
    // 16
    printf("%llu\n", sizeof(long double));
    // 8
    printf("%llu\n", sizeof(long long));
    // 4
    printf("%llu\n", sizeof(unsigned long));
    // 8
    printf("%llu\n", sizeof(int*));
    return 0;
}
