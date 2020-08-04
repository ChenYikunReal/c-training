#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)

/**
 * 宏#define命令练习
 * @return
 */
int main() {
    int num;
    int again=1;
    while(again)
    {
        scanf("%d",&num);
        printf("%d\n",SQ(num));
        if(num>=50)
            again=TRUE;
        else
            again=FALSE;
    }
    return 0;
}
