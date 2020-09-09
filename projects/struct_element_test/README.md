# 结构体的结构
```c
struct tag { 
    member-list
    member-list 
    member-list  
    ...
} variable-list;
```
其中：
- tag 是结构体标签
- member-list是标准的变量定义，比如`int i`或者`float f`，或者其他有效的变量定义
- variable-list结构变量，定义在结构的末尾，最后一个分号之前，您可以指定一个或多个结构变量