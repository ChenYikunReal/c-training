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
    printf("����������\n");
    time(&start_t);
    printf("����5�룡\n");
    // �����д �����Ǻ�����
    Sleep(5000);
    time(&end_t);
    diff_t = difftime(end_t, start_t);
    printf("ִ��ʱ�� = %.2fs\n", diff_t);
    printf("�����˳���\n");
    return 0;
}

