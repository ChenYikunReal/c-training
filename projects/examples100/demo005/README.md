# 优化版

可以使用
```c
#include <stdio.h>
 
int main() {
    int x, y, z, t;
    scanf("%d,%d,%d",&x,&y,&z);
    // x 和 y 交换
    if (x > y) {
        t=x;
        x=y;
        y=t;
    }
    // x 和 z 交换
    if (x > z) {
        t=z;
        z=x;
        x=t;
    }
    // y 和 z 交换
    if (y > z) {
        t=y;
        y=z;
        z=t;
    }
    printf("%d,%d,%d\n", x, y, z);
}
```

还可以写一个sort()来排序，只是三个数大可不必……

还可以利用define宏定义交换数据
```c
#include <stdio.h>

#define swap(a,b) {a=a+b;b=a-b;a=a-b;}

int main() {
    int x, y, z;
    scanf("%d,%d,%d", &x, &y, &z);
    if (x > y) {
        swap(x, y);
    }
    if (x > z) {
        swap(x, z);
    }
    if (y > z) {
        swap(y, z);
    }
    printf("%d,%d,%d\n", x, y, z);
    return 0;
}
```

还可以用三目运算符玩玩：
```c
#include <stdio.h>

int main() {
    int a, b, c, p, q, r, s, t;
    scanf("%d,%d,%d", &a, &b, &c);
    p = (a < b) ? a : b;
    q = (a > b) ? a : b;
    r = (q < c) ? q : c;
    s = (q > c) ? q : c;//max
    t = (p < c) ? p : c;//min
    printf("%d,%d,%d", t, r, s);
    return 0;
}
```

还可以使用位运算优化：
```c
#include<stdio.h>

int main() {
    int i, j, k;
    scanf("%d,%d,%d", &i, &j, &k);
    if (i > j) {
        i ^= j;
        j ^= i;
        i ^= j;
    }
    if (i > k) {
        i ^= k;
        k^=i;
        i^=k;
    }
    if (j > k) {
       j ^= k;
       k ^= j;
       j ^= k;
    }
    printf("%d,%d,%d\n", i, j, k);
}
```
