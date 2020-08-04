#include <stdio.h>

#define LAG >
#define SMA <
#define EQ ==

/**
 * 宏#define命令练习
 * @return
 */
int main() {
    int i,j;
    scanf("%d,%d",&i,&j);
    if(i LAG j)
        printf("%d > %d \n",i,j);
    else if(i EQ j)
        printf("%d = %d \n",i,j);
    else if(i SMA j)
        printf("%d < %d \n",i,j);
    else
        printf("error\n");
    return 0;
}
