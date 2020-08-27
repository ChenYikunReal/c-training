#include <stdio.h>

int main() {
    enum day {
        saturday,
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday
    } workday;
    int a = 1;
    enum day weekend;
    //类型转换
    weekend = (enum day) a;
    // weekend = a; => 错误
    printf("weekend: %d", weekend);
    return 0;
}
