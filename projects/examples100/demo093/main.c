#include <stdio.h>
#include <time.h>

/**
 * 时间函数
 * @return
 */
int main() {
    long i=10000000L;
    clock_t start,finish;
    double TheTimes;
    start=clock();
    while(i--);
    finish=clock();
    TheTimes=(double)(finish-start)/CLOCKS_PER_SEC;
    printf("%fs\n",TheTimes);
    return 0;
}
