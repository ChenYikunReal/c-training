#include <stdio.h>

/**
 * 有一个已经排好序的数组
 * 现输入一个数，要求按原来的规律将它插入数组中
 */
int main() {
    int opo[11]={1,4,6,9,13,16,19,28,40,100};//原始的数组，题目给的
    int a,b,c,e;
    for(a=0;a<10;a++)printf("%d ",opo[a]);
    printf("\n");
    scanf("%d",&b);
    for(c=9;c>=0;c--){  //使用逆序的话，可以省掉很多过程，而且清晰
        if(b<opo[c]) {
            opo[c+1]=opo[c];
        }
        else {
            opo[c+1]=b;break;
        }
        if(c==0) opo[0]=b;  //应为是逆序，如果b比第一个小的话写不进去，要特意弄个if
    }//哇，逆序超简洁，惊了
    for(e=0;e<=10;e++)
        printf("%d ",opo[e]);
    return 0;
}
