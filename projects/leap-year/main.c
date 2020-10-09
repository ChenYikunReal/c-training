#include <stdio.h>

int main() {
    printf("请输入待检测的年份：");
    int year;
    scanf("%d", &year);
    printf("%d年%s闰年", year, (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0) ? "是": "不是"));
    return 0;
}
