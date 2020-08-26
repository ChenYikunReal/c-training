## 浅谈数组

数组这个概念基本在所有的编程语言中都是不可忽视的，在C/C++中我们结合指针的概念，可以加深理解。


![在这里插入图片描述](https://github.com/ChenYikunReal/c_training/blob/master/projects/array_test/arrays.jpg?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzg5NjMxOA==,size_16,color_FFFFFF,t_70)



C语言的数组只允许同类型元素且长度不可变，这种数组规则被我所见过的大多数编程语言继承。<br/>
当然，有些语言完全不care类型，一个数组可以使用任意类型元素，如js。<br/>
还有个别语言数组长度“可变”，比较典型的是Python(Python数组也称列表)，这种数组其实就是数据结构所学的顺序表，如果我们看看C的数组，就应该能明白这一点。

