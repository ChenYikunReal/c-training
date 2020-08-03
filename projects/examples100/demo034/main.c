#include <stdio.h>

void hello_world()
{
    printf("Hello, world!\n");
}

void three_hellos()
{
    int counter;
    for (counter = 1; counter <= 3; counter++)
        hello_world();
}

/**
 * 练习函数调用
 * @return
 */
int main()
{
    three_hellos();
    return 0;
}
