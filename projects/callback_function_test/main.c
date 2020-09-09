#include <stdlib.h>
#include <stdio.h>

// 回调函数
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void)) {
    for (size_t i = 0; i < arraySize; i++) {
        array[i] = getNextValue();
    }
}

// 获取随机值
int getNextRandomValue() {
    return rand();
}

int main() {
    int myArray[10];
    // getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了int, 而不是函数指针
    populate_array(myArray, 10, getNextRandomValue);
    for(int i = 0; i < 10; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");
    return 0;
}

