#include <stdio.h>

// -1 ≤ N ≤ 1
// 这里求的不精确，Python求的math.sin(0.5)=0.479425538604203
int main() {
    printf("请输入[-1,1]之间的弧度以计算其余弦值：");
    double angle;
    scanf("%lf", &angle);
    int index = 1;
    double temp = angle, result = angle;
    for (int i = 0; i <= 10; i++) {
        index += 2;
        temp = -temp*temp*temp/(index*(index-1));
        result += temp;
    }
    printf("结果为：%lf", result);
    return 0;
}
