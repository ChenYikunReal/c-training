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
    // ����һ��ָ���ַ�����ָ�룬��ʾ�ṹtimeptr�����ں�ʱ��
    puts(asctime(&t));

    time_t currentTime;
    time(&currentTime);
    // ����һ���ַ��������ַ��������˿ɶ���ʽ�����ں�ʱ����Ϣ
    printf("��ǰʱ�� = %s\n", ctime(&currentTime));

    time_t rawTime;
    struct tm *info;
    time(&rawTime);
    // ��ȡGMTʱ�䣬timer��ֵ���ֽ�Ϊtm�ṹ������Э������ʱ(UTC)Ҳ����Ϊ�������α�׼ʱ��(GMT)��ʾ
    info = gmtime(&rawTime);
    printf("��ǰ������ʱ�ӣ�\n");
    printf("�׶أ�%2d:%02d\n", (info->tm_hour+BST)%24, info->tm_min);
    printf("�й���%2d:%02d\n\n", (info->tm_hour+CCT)%24, info->tm_min);

    time_t seconds;
    // ���㵱ǰ����ʱ�䣬�����������time_t��ʽ
    seconds = time(NULL);
    printf("��1970-01-01���Сʱ�� = %lld\n", seconds/3600);

    return 0;
}
