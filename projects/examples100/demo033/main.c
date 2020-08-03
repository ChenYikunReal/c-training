#include <stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

/**
 * 判断一个数字是否为质数
 * @return
 */
int main() {
    int n;
    scanf("%d",&n);
    BOOL flag = TRUE;
    for(int i=2;i<n;i++) {
        if(n%i==0)
        {
            printf("No\n");
            flag = FALSE;
            break;
        }
    }
    if(flag||n==1||n==2) {
        printf("Yes\n");
    }
    return 0;
}
