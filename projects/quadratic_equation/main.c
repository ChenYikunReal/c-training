#include <stdio.h>
#include <math.h>

int main() {
    printf("请输入一元二次方程ax2+bx+c=0的三个参数(整数)：");
    int a, b, c;
    scanf("%d, %d, %d", &a, &b, &c);
    double sqrt_result = sqrt(b*b-4*a*c), result1 = (-b+sqrt_result)/(2*a), result2 = (-b-sqrt_result)/(2*a);
    printf("x1=%.2lf, x2=%.2lf", result1, result2);
    return 0;
}
