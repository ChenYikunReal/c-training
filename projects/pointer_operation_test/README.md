# 指针运算符

指针变量存的其实是一个数值表示的地址，所以支持加减乘除等数值运算。

对于指针变量的递增和递减，这些说法需要理解：
- 指针的每一次递增，它其实会指向下一个元素的存储单元
- 指针的每一次递减，它都会指向前一个元素的存储单元
- 指针在递增和递减时跳跃的字节数取决于指针所指向变量数据类型长度，比如int就是4个字节
