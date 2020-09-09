# 辨析typedef和#define

`#define`是C指令，用于为各种数据类型定义别名，与`typedef`类似，但是它们有以下几点不同：
- typedef仅限于为类型定义符号名称，#define不仅可以为类型定义别名，也能为数值定义别名，比如您可以定义1为ONE
- typedef是由编译器执行解释的，#define语句是由预编译器进行处理的


相关链接：[C语言typedef关键词测试](https://github.com/ChenYikunReal/c_training/tree/master/projects/typedef_test)
