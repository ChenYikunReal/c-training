#include <stdio.h>

/**
 * 一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同
 * @return
 */
int main() {
    int n;
    scanf("%d",&n);
    int x[1000];
    int i=0;
    while(n!=0)
    {
        x[i]=n%10;
        n=n/10;
        i++;
    }
    int z=i;
    int flag=1;
    for(i=0;i<z;i++) {
        if(x[i]!=x[z-1-i]){
            flag= 0;
            printf("No\n");
            break;
        }
    }
    if(flag==1) {
        printf("Yes\n");
    }
    return 0;
}
