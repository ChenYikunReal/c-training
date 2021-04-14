#include <stdio.h>
#include <complex.h>

int main() {
    double complex a = 1 + 2*I;
    double complex b = 3 + 4*I;
    double complex x, xz, xc;
    x = a + b;
    printf("加法：%.2f%+-.2fi\n", creal(x), cimag(x));
    x = a - b;
    printf("减法：%.2f%+-.2fi\n", creal(x), cimag(x));
    x = a * b;
    printf("乘法：%.2f%+-.2fi\n", creal(x), cimag(x));
    x = a / b;
    printf("除法：%.2f%+-.2fi\n", creal(x), cimag(x));
    xz = cproj(x);
    printf("投影：%.2f%+-.2fi\n", creal(xz), cimag(xz));
    xc = conj(x);
    printf("共轭：%.2f%+-.2fi\n", creal(xc), cimag(xc));
    return 0;
}
