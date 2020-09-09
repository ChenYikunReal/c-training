#include <stdio.h>

// 定义简单的结构 需要8字节的存储空间
struct {
  unsigned int widthValidated;
  unsigned int heightValidated;
} status1;

// 定义位域结构 占用的是4字节，实际存储值的只有两位(2/32)，若是32个这样的变量则刚好填满这4字节，若是33个这样的变量就是8字节
struct {
  unsigned int widthValidated : 1;
  unsigned int heightValidated : 1;
} status2;

struct {
    unsigned int var1 : 1;
    unsigned int var2 : 1;
    unsigned int var3 : 1;
    unsigned int var4 : 1;
    unsigned int var5 : 1;
    unsigned int var6 : 1;
    unsigned int var7 : 1;
    unsigned int var8 : 1;
    unsigned int var9 : 1;
    unsigned int var10 : 1;
    unsigned int var11 : 1;
    unsigned int var12 : 1;
    unsigned int var13 : 1;
    unsigned int var14 : 1;
    unsigned int var15 : 1;
    unsigned int var16 : 1;
    unsigned int var17 : 1;
    unsigned int var18 : 1;
    unsigned int var19 : 1;
    unsigned int var20 : 1;
    unsigned int var21 : 1;
    unsigned int var22 : 1;
    unsigned int var23 : 1;
    unsigned int var24 : 1;
    unsigned int var25 : 1;
    unsigned int var26 : 1;
    unsigned int var27 : 1;
    unsigned int var28 : 1;
    unsigned int var29 : 1;
    unsigned int var30 : 1;
    unsigned int var31 : 1;
    unsigned int var32 : 1;
} status3;

struct {
    unsigned int var1 : 1;
    unsigned int var2 : 1;
    unsigned int var3 : 1;
    unsigned int var4 : 1;
    unsigned int var5 : 1;
    unsigned int var6 : 1;
    unsigned int var7 : 1;
    unsigned int var8 : 1;
    unsigned int var9 : 1;
    unsigned int var10 : 1;
    unsigned int var11 : 1;
    unsigned int var12 : 1;
    unsigned int var13 : 1;
    unsigned int var14 : 1;
    unsigned int var15 : 1;
    unsigned int var16 : 1;
    unsigned int var17 : 1;
    unsigned int var18 : 1;
    unsigned int var19 : 1;
    unsigned int var20 : 1;
    unsigned int var21 : 1;
    unsigned int var22 : 1;
    unsigned int var23 : 1;
    unsigned int var24 : 1;
    unsigned int var25 : 1;
    unsigned int var26 : 1;
    unsigned int var27 : 1;
    unsigned int var28 : 1;
    unsigned int var29 : 1;
    unsigned int var30 : 1;
    unsigned int var31 : 1;
    unsigned int var32 : 1;
    unsigned int var33 : 1;
} status4;

struct {
    unsigned int age : 3;
} Age;

int main() {
    printf("Memory size occupied by status1 : %d\n", sizeof(status1));
    printf("Memory size occupied by status2 : %d\n", sizeof(status2));
    printf("Memory size occupied by status3 : %d\n", sizeof(status3));
    printf("Memory size occupied by status4 : %d\n", sizeof(status4));

    Age.age = 4;
    printf("Sizeof(Age) : %d\n", sizeof(Age) );
    printf("Age.age : %d\n", Age.age);
    Age.age = 7;
    printf("Age.age : %d\n", Age.age);
    Age.age = 8; // 二进制表示为 1000 有四位，超出
    printf("Age.age : %d\n", Age.age);
    return 0;
}

