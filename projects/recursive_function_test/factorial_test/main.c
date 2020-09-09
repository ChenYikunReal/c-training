#include <stdio.h>

long long factorial(long long i) {
    if(i <= 1) {
        return 1;
    }
    return i * factorial(i-1);
}

int main() {
    long long i = 15;
    printf("%lld! = %lld\n", i, factorial(i));
    return 0;
}
