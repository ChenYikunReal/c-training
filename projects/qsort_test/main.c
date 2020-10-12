#include <stdio.h>
#include <stdlib.h>

int values[] = {88, 56, 100, 2, 25};

int cmpFunc (const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

/**
 * 参数
 * base -- 指向要排序的数组的第一个元素的指针
 * nitems -- 由 base 指向的数组中元素的个数
 * size -- 数组中每个元素的大小，以字节为单位
 * compar -- 用来比较两个元素的函数
 * @return
 */
int main() {
    int n;
    printf("排序之前的列表：\n");
    for( n = 0 ; n < 5; n++ ) {
        printf("%d ", values[n]);
    }
    qsort(values, 5, sizeof(int), cmpFunc);
    printf("\n排序之后的列表：\n");
    for(n = 0 ; n < 5; n++) {
        printf("%d ", values[n]);
    }
    return 0;
}
