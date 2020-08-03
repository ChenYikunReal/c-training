# 优化版

```c
#include <stdio.h>

/**
 * 优化版
 * @return
 */
int main() {
    int i, j, k;
    for (i = 1; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            if (i == j) {
                continue;
            }
            for (k = 1; k < 5; k++) {
                if (i == k || j == k) {
                    continue;
                }
                printf("%d,%d,%d\n", i, j, k);
            }
        }
    }
    return 0;
}
```
