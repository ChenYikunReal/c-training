#include <stdio.h>
#include <string.h>

int main() {
    printf("请输入一个数，接下来会判断它是不是一个回文数：");
    char num[20];
    scanf("%s", num);
    int len = strlen(num), flag = 1;
    for (int i = 0; i < len/2; i++) {
        if (num[i] != num[len-i-1]) {
            flag = 0;
            break;
        }
    }
    printf("%s%s回文数", num, (flag ? "是" : "不是"));
    return 0;
}
