#include <stdio.h>

/**
 * 求1+2!+3!+...+20!的和
 * @return
 */
int main() {
    int i,t,n=20;
    long long sum,temp;
    sum=0;
    for(i=1;i<=n;i++){
        temp=1;
        t=i;
        while(t){
            temp=temp*t;
            t--;
        }
        sum+=temp;
    }
    printf("%lld\n",sum);
    return 0;
}
