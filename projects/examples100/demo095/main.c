#include <stdio.h>

struct programming
{
    float constant;
    char *pointer;
};


/**
 * 简单的结构体应用实例
 * @return
 */
int main() {
    struct programming variable;
    char string[] = "testtesttest";
    variable.constant = 1.23;
    variable.pointer = string;
    printf("%f\n", variable.constant);
    printf("%s\n", variable.pointer);
    return 0;
}
