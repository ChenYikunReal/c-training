# 问题及修改

1. 三个年龄都是 0 的时候不行 q 没赋初值，下面加了个 q=p=person
2. 年龄相等且为最大值的时候应同时输出

```c
#include<stdio.h>
#include<stdlib.h>

struct man{
    char name[20];
    int  age;
}

person[3]={"li",25,"wang",25,"sun",25};

int main()
{
    struct man *q,*p;
    int i,m=0,k=0;
    q=p=person;
    for(i=0;i<3;i++)
    {
        if(m<p->age)
        {
            m=p->age;
            q=p;
            k=i;
        }
        p++;
    }
    for(;k<3;k++)
    {
        if(person[k].age>=m)
            printf("%s %d\n",person[k].name,person[k].age);
    }
    return 0;
}
```
