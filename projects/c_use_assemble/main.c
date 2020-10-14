#include <stdio.h>

// (xa+xb)*2的计算 答案为16
int main() {
    int xa = 6, xb = 2, result;
    asm volatile (
            "add %%ebx, %%eax\n\t"
            "movl $2,%%ecx\n\t"
            "mul %%ecx\n\t"
            "movl %%eax,%%edx"
            :"=d"(result):"a"(xa),"b"(xb):"%ecx");
    printf("%d\n", result);
    return 0;
}
