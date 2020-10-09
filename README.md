# C语言学习记录

![在这里插入图片描述](https://github.com/ChenYikunReal/c_training/blob/master/images/c-lang.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzg5NjMxOA==,size_16,color_FFFFFF,t_70)


## 项目结构
- [电子书](https://github.com/ChenYikunReal/c_training/tree/master/e-books)
- [PPT](https://github.com/ChenYikunReal/c_training/tree/master/ppt)
- [练习源码](https://github.com/ChenYikunReal/c_training/tree/master/projects)

## 形参与实参再辨
- 实参可以是变量，变量与表达式
- 实参与形参类型相同或赋值兼容
- 在调用函数过程中发生的实参与形参之间的数据传递，常称为“虚实结合”
- 在定义函数中制定的形参，在没有出现函数调用时不占用内存中的存储单元。在函数调用时才分配内存
- 将实参的值传递给形参
- 在执行函数时，由于形参已经有值。可以用形参进行运算
- 通过return语句将函数值返回，若无返回值，则无return
- 调用结束后，形参被释放掉，实参保留原值（单向传值）

## 全局变量与局部变量
- 全局变量保存在内存的全局存储区中，占用`静态的存储单元`
- 局部变量保存在`栈`中，只有在`所在函数被调用时`才动态地为变量分配存储单元

## 引用头文件
- `include <file>` 系统文件
- `include "file"` 用户文件

在有多个`.h`文件和多个`.c`文件的时候，往往我们会用一个`global.h`的头文件来包括所有的`.h`文件，然后在除`global.h`文件外的头文件中包含`global.h`就可以实现所有头文件的包含，同时不会乱。方便在各个文件里面调用其他文件的函数或者变量。
```c
#ifndef _GLOBAL_H
#define _GLOBAL_H
#include <fstream>
#include <iostream>
#include <math.h>
#include <Config.h>
```

## 预处理器指令
| 指令 | 描述 |
|:---:|:---:|
| #define | 定义宏 |
| #include | 包含一个源代码文件 |
| #undef | 取消已定义的宏 |
| #ifdef | 如果宏已经定义，则返回真 |
| #ifndef | 如果宏没有定义，则返回真 |
| #if | 如果给定条件为真，则编译下面代码 |
| #else | #if的替代方案 |
| #elif | 如果前面的#if给定条件不为真，当前条件为真，则编译下面代码 |
| #endif | 结束一个#if……#else条件编译块 |
| #error | 当遇到标准错误时，输出错误消息 |
| #pragma | 使用标准化方法，向编译器发布特殊的命令到编译器中 |

## 预定义宏
| 宏 | 描述 |
|:---:|:---:|
| \_\_DATE\_\_ | 当前日期，一个以"MMM DD YYYY"格式表示的字符常量 |
| \_\_TIME\_\_ | 当前时间，一个以"HH:MM:SS"格式表示的字符常量 |
| \_\_FILE\_\_ | 这会包含当前文件名，一个字符串常量 |
| \_\_LINE\_\_ | 这会包含当前行号，一个十进制常量 |
| \_\_STDC\_\_ | 当编译器以ANSI标准编译时，则定义为1 |

## 文件打开模式
| 普通模式 | 二进制文件模式 | 描述|
|:---:|:---:|:---:|
| r | rb | 打开一个已有的文本文件，允许读取文件 |
| w | wb | 打开一个文本文件，允许写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会从文件的开头写入内容。如果文件存在，则该会被截断为零长度，重新写入 |
| a | ab | 打开一个文本文件，以追加模式写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会在已有的文件内容中追加内容 |
| r+ | r+b | 打开一个文本文件，允许读写文件 |
| w+ | wb+/w+b |打开一个文本文件，允许读写文件。如果文件已存在，则文件会被截断为零长度，如果文件不存在，则会创建一个新文件 |
| a+ | ab+/a+b |打开一个文本文件，允许读写文件。如果文件不存在，则会创建一个新文件。读取会从文件的开头开始，写入则只能是追加模式 |

## 更多资源
- [Linux服务器C编程体验](https://www.tutorialspoint.com/compile_c_online.php)

## C语言札记
1. 输出双精度浮点数格式：`%lf`。

