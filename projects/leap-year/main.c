#include <stdio.h>

int main() {
    printf("�������������ݣ�");
    int year;
    scanf("%d", &year);
    printf("%d��%s����", year, (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0) ? "��": "����"));
    return 0;
}
