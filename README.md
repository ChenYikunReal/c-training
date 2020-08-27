# C语言入门训练

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
