#include <stdio.h>
#include <time.h>

#define BST (+1)
#define CCT (+8)

int main() {
    struct tm t;
    t.tm_sec = 10;
    t.tm_min = 10;
    t.tm_hour = 6;
    t.tm_mday = 25;
    t.tm_mon = 2;
    t.tm_year = 89;
    t.tm_wday = 6;
    // 返回一个指向字符串的指针，表示结构timeptr的日期和时间
    puts(asctime(&t));

    time_t currentTime;
    time(&currentTime);
    // 返回一个字符串，该字符串包含了可读格式的日期和时间信息
    printf("当前时间 = %s\n", ctime(&currentTime));

    time_t rawTime;
    struct tm *info;
    time(&rawTime);
    // 获取GMT时间，timer的值被分解为tm结构，并用协调世界时(UTC)也被称为格林尼治标准时间(GMT)表示
    info = gmtime(&rawTime);
    printf("当前的世界时钟：\n");
    printf("伦敦：%2d:%02d\n", (info->tm_hour+BST)%24, info->tm_min);
    printf("中国：%2d:%02d\n\n", (info->tm_hour+CCT)%24, info->tm_min);

    time_t seconds;
    // 计算当前日历时间，并把它编码成time_t格式
    seconds = time(NULL);
    printf("自1970-01-01起的小时数 = %lld\n", seconds/3600);

    return 0;
}
