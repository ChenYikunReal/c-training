#include <stdio.h>

/**
 * 判断一个素数能被几个9组成的数整除
 * @return
 */
int main() {
    int p,i;
    long int sum=9;
    scanf("%d",&p);
    for(i=1;;i++)
        if(sum%p==0)break;
        else sum=sum*10+9;
    printf("%d\n", i);
    return 0;
}
