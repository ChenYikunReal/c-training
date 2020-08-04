#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    int i;
    if(n == 1)
        return 0;
    for(i = 2; i <= sqrt(n); i++)
        if(n%i == 0)
            return 0;
    return 1;
}

void divideEven(int even, int *a, int *b)
{
    int i;
    for(i = 2; i < even; i++)
    {
        if(isPrime(i)&&isPrime(even - i))
            break;
    }
    *a = i;
    *b = even - i;
}

/**
 * 验证一个偶数总能表示为两个素数之和
 * @return
 */
int main() {
    int n,a,b;
    scanf("%d",&n);
    divideEven(n, &a, &b);
    printf("%d + %d", a, b);
    return 0;
}
