# 枚举笔记

如果不用枚举的话，就必须使用`#define`定义常量
```c
#define MON  1
#define TUE  2
#define WED  3
#define THU  4
#define FRI  5
#define SAT  6
#define SUN  7
```

而枚举还可以连续递推：
```c
enum DAY {
    MON=1, TUE, WED, THU, FRI, SAT, SUN
};
```
相当于：
```c
enum DAY {
    MON=1, TUE=2, WED=3, THU=4, FRI=5, SAT=6, SUN=7
};
```
与上面的七条`#define`语句等效。




如果我们这么写：
```c
enum DAY {
    MON, TUE, WED=3, THU, FRI, SAT, SUN
};
```
实际等效于：
```c
enum DAY {
    MON=0, TUE=1, WED=3, THU=4, FRI=5, SAT=6, SUN=7
};
```


枚举类型的定义感觉和结构体也差不太多，一共三种方式：
-  ```c
   // 先定义枚举类型，再定义枚举变量
   enum DAY {
        MON=1, TUE, WED, THU, FRI, SAT, SUN
   };
   enum DAY day;
    ```
-  ```c
   // 定义枚举类型的同时定义枚举变量
   enum DAY {
         MON=1, TUE, WED, THU, FRI, SAT, SUN
   } day;
    ```
-  ```c
   // 省略枚举名称，直接定义枚举变量
   enum{
         MON=1, TUE, WED, THU, FRI, SAT, SUN
   } day;
    ```



像下面这样不连续的枚举不能被直接遍历：
```c
enum {
    ENUM_0,
    ENUM_10 = 10,
    ENUM_11
};
```
