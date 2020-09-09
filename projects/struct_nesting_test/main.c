#include <stdio.h>

// 基本的结构体
struct SIMPLE {
    int a;
    char b;
    double c;
};

// 此结构体的声明包含了其他的结构体
struct COMPLEX {
    char string[100];
    struct SIMPLE a;
};

// 此结构体的声明包含了指向自己类型的指针
struct NODE {
    char string[100];
    struct NODE *next_node;
};



// 两个结构体互相包含，需要其中一个先声明
//对结构体B进行不完整声明
struct B;

//结构体A中包含指向结构体B的指针
struct A {
    struct B *partner;
    // other members...
};

//结构体B中包含指向结构体A的指针，在A声明完后，B也随之进行声明
struct B {
    struct A *partner;
    // other members...
};

