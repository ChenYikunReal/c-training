#include <stdio.h>
#include <stdlib.h>

int values[] = {88, 56, 100, 2, 25};

int cmpFunc (const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

/**
 * ����
 * base -- ָ��Ҫ���������ĵ�һ��Ԫ�ص�ָ��
 * nitems -- �� base ָ���������Ԫ�صĸ���
 * size -- ������ÿ��Ԫ�صĴ�С�����ֽ�Ϊ��λ
 * compar -- �����Ƚ�����Ԫ�صĺ���
 * @return
 */
int main() {
    int n;
    printf("����֮ǰ���б�\n");
    for( n = 0 ; n < 5; n++ ) {
        printf("%d ", values[n]);
    }
    qsort(values, 5, sizeof(int), cmpFunc);
    printf("\n����֮����б�\n");
    for(n = 0 ; n < 5; n++) {
        printf("%d ", values[n]);
    }
    return 0;
}
