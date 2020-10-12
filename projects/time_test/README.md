# tm结构体的定义

```c
struct tm {
   int tm_sec;   // 秒，范围从0到59
   int tm_min;   // 分，范围从0到59
   int tm_hour;  // 小时，范围从0到23
   int tm_mday;  // 一月中的第几天，范围从1到31
   int tm_mon;   // 月，范围从0到11
   int tm_year;  // 自1900年起的年数
   int tm_wday;  // 一周中的第几天，范围从0到6
   int tm_yday;  // 一年中的第几天，范围从0到365
   int tm_isdst; // 夏令时
};
```