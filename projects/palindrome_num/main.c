#include <stdio.h>
#include <string.h>

int main() {
    printf("������һ���������������ж����ǲ���һ����������");
    char num[20];
    scanf("%s", num);
    int len = strlen(num), flag = 1;
    for (int i = 0; i < len/2; i++) {
        if (num[i] != num[len-i-1]) {
            flag = 0;
            break;
        }
    }
    printf("%s%s������", num, (flag ? "��" : "����"));
    return 0;
}
