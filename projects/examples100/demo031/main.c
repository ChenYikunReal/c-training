#include <stdio.h>

/**
 * 请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母
 * @return
 */
int main() {
    char i,j;
    scanf("%c",&i);
    getchar();
    switch(i)
    {
        case 'm':
            printf("monday\n");
            break;
        case 't':
            printf("next>");
            scanf("%c",&j);
            getchar();
            if (j == 'u')
            {
                printf("tuesday\n");
                break;
            }
            if (j == 'h')
            {
                printf("thursday\n");
                break;
            }
            else
            {
                printf("error");
                break;
            }
        case 'w':
            printf("wednesday\n");
            break;
        case 'f':
            printf("friday");
            break;
        case 's':
            printf("next>");
            scanf("%c",&j);
            getchar();
            if(j == 'a')
            {
                printf("saturday");
                break;
            }
            if(j == 'u')
            {
                printf("sunday");
                break;
            }
            else
            {
                printf("error");
                break;
            }
        default:
            printf("error");
            break;
    }
    return 0;
}
