#include <stdio.h>
#include <time.h>

int main() {
    clock_t start_t, end_t;
    double total_t;
    int i;
    // ���س���ִ����(һ��Ϊ����Ŀ�ͷ)��������ʱ����ʹ�õ�ʱ��
    start_t = clock();
    printf("����������start_t = %ld\n", start_t);
    printf("��ʼһ����ѭ����start_t = %ld\n", start_t);
    for(i=0; i< 10000000; i++){}
    end_t = clock();
    printf("��ѭ��������end_t = %ld\n", end_t);
    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("CPUռ�õ���ʱ�䣺%.4fs\n", total_t  );
    printf("�����˳�...\n");
    return 0;
}
