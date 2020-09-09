#include <stdio.h>

int main() {
    int sum = 17, count = 5;
    double mean;
    // 先将一个整数强转为double，然后才能除得一个浮点数，否则就是截断取整
    mean = (double) sum / count;
    printf("Value of mean : %f\n", mean);
    return 0;
}
