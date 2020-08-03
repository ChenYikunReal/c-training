# 优化版

使用到循环结构来写此程序：
```c
#include<stdio.h>

int main(){
    int i;
    double num;
    double copy_num;
    double result = 0;
    double rates[] = {0, 0.1, 0.075, 0.05, 0.03, 0.015, 0.01};
    double limits[] = {0, 100000, 200000, 400000, 600000, 1000000, copy_num};
    scanf("%lf", &num);
    copy_num = num;
    for (i = 1; i < 7; i++) {
        if (copy_num < limits[i]) {
            result += num * rates[i];
            break;
        } else {
            result += (limits[i] - limits[i-1]) * rates[i];
            num -= limits[i];
        }
    }
    printf("奖金是%.2lf\n", result);
    return 0;
}
```

使用switch重写：
```c
#include <stdio.h>

int main(){
    double d;
    int money = 100000;
    float res=0.0;
    int flag;
    scanf("%lf",&d);
    flag = (int)(d/money);
    flag = flag >10?10:flag;
    switch(flag){
        case 10:
            res += (d-10*money)*0.01;
            d = 10*money;
        case 9:
        case 8:
        case 7:
        case 6:
            res += (d-6*money)*0.015;
            d = 6*money;
        case 5:
        case 4:
            res+= (d-4*money)*0.03;
            d = 4*money;
        case 3:
        case 2:
            res += (d-2*money)*0.05;
            d = 2*money;
        case 1:
            res += (d-money)*0.075;
            d = money;
        case 0:
            res += d *0.1;
    }
    
    printf("%.2f\n",res);
    return 0;
}
```
