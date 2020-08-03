# include<stdio.h>

void swap(int *, int *);

void swap(int *s1, int *s2)
{
    int t;
    t = *s1; *s1 = *s2; *s2 = t;
}

/**
 * 使用指针做三数排序
 * @return
 */
int main()
{
    int a, b, c;
    int *p1, *p2, *p3;
    scanf("%d %d %d", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    if (a > b) {
        swap(p1, p2);
    }
    if (a > c) {
        swap(p1, p3);
    }
    if (b > c) {
        swap(p2, p3);
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}
