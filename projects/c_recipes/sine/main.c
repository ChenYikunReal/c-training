#include <stdio.h>

// -1 �� N �� 1
// ������Ĳ���ȷ��Python���math.sin(0.5)=0.479425538604203
int main() {
    printf("������[-1,1]֮��Ļ����Լ���������ֵ��");
    double angle;
    scanf("%lf", &angle);
    int index = 1;
    double temp = angle, result = angle;
    for (int i = 0; i <= 10; i++) {
        index += 2;
        temp = -temp*temp*temp/(index*(index-1));
        result += temp;
    }
    printf("���Ϊ��%lf", result);
    return 0;
}
