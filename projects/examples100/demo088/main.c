#include <stdio.h>

void print(int n)
{
    for(int i = 0; i < n; i++)
        printf("*");
    printf("\n");
}

/**
 * 读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的 ＊
 * @return
 */
int main()
{
    int n;
    for(int i = 0; i < 7; i++)
    {
        scanf("%d",&n);
        print(n);
    }
    return 0;
}
