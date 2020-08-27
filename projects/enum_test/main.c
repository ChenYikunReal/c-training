#include <stdio.h>

// 只定义第一个的值，即可依次递推
enum DAY {
    MON=1, TUE, WED, THU, FRI, SAT, SUN
};

int main() {
    enum DAY day;
    day = WED;
    printf("%d\n",day);
    // 遍历枚举
    for (day = MON; day <= SUN; day++) {
        printf("Element => %d \n", day);
    }
    return 0;
}
