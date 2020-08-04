#include<stdio.h>
#include<stdlib.h>

double  eveNumber(int n);

double  oddNumber(int n);

/**
 * 编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)
 * @return
 */
int main()
{
    int n;
    double r;
    double (*pfunc)(int);
    scanf("%d",&n);
    if(n%2==0) pfunc=eveNumber;
    else pfunc=oddNumber;
    r=(*pfunc)(n);
    printf("%lf\n",r);
    return 0;
}

double  eveNumber(int n)
{
    double s=0,a=0;
    int i;
    for(i=2;i<=n;i+=2)
    {
        a=(double)1/i;
        s+=a;
    }
    return s;
}

double  oddNumber(int n)
{
    double s=0,a=0;
    int i;
    for(i=1;i<=n;i+=2)
    {
        a=(double)1/i;
        s+=a;
    }
    return s;
}
