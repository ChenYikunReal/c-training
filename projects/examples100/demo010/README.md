# 乱码结果

```text
╔╔
圹
圹圹
圹圹圹
圹圹圹圹
圹圹圹圹圹
圹圹圹圹圹圹
圹圹圹圹圹圹圹
圹圹圹圹圹圹圹圹
圹圹圹圹圹圹圹圹圹
圹圹圹圹圹圹圹圹圹圹
```

这么写可以直接运行不需要手动调编码：
```c
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(437);
    char a = 219;
    printf("\1\1\n");
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", a);
        }
        printf("\n");
    }
    return 0;
}
```

甚至可以直接设置好char而不是简单使用数值char：
```c
#include <stdio.h>

int main() {
    printf("◎◎\n");
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j <= i+1; j++) {
            printf("■");
        }
        printf("\n");
    }
}
```
