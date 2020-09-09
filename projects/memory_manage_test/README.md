# C语言内存管理

C语言可以操作内存(分配和释放等操作都可以)，使用`stdlib.h`即可。

一共有四个主要的函数：
- `void *calloc(int num, int size)`：在内存中动态地分配num个长度为size的连续空间，并将每一个字节都初始化为0。所以它的结果是分配了num*size个字节长度的内存空间，并且每个字节的值都是0。
- `void free(void *address)`：该函数释放address所指向的内存块,释放的是动态分配的内存空间。
- `void *malloc(int num)`：在堆区分配一块指定大小的内存空间，用来存放数据。这块内存空间在函数执行完成后不会被初始化，它们的值是未知的。
- `void *realloc(void *address, int newsize)`：该函数重新分配内存，把内存扩展到newsize。
