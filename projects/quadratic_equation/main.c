#include <stdio.h>
#include <math.h>

int main() {
    printf("������һԪ���η���ax2+bx+c=0����������(����)��");
    int a, b, c;
    scanf("%d, %d, %d", &a, &b, &c);
    double sqrt_result = sqrt(b*b-4*a*c), result1 = (-b+sqrt_result)/(2*a), result2 = (-b-sqrt_result)/(2*a);
    printf("x1=%.2lf, x2=%.2lf", result1, result2);
    return 0;
}
