#include <stdio.h>

/**
 * ����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
 * @return
 */
int main() {
    int year, month, day, result;
    scanf("%d,%d,%d", &year, &month, &day);
    int months[13];
    months[1] = months[3] = months[5] = months[7] = months[8] = months[10] = months[12] = 31;
    months[4] = months[6] = months[9] = months[11] = 30;
    months[2] = 28;
    months[0] = 0;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        months[2]++;
    }
    for (int i = 1; i <= month; i++) {
        result += months[i-1];
    }
    result += day;
    printf("��%d��", result);
    return 0;
}
