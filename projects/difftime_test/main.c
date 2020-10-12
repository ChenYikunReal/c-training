#include <stdio.h>
#include <time.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

int main() {
    time_t start_t, end_t;
    double diff_t;
    printf("程序启动！\n");
    time(&start_t);
    printf("休眠5秒！\n");
    // 必须大写 传参是毫秒数
    Sleep(5000);
    time(&end_t);
    diff_t = difftime(end_t, start_t);
    printf("执行时间 = %.2fs\n", diff_t);
    printf("程序退出！\n");
    return 0;
}

