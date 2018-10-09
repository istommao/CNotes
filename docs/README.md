# 简介

## C语言的起源

> 贝尔实验室的 Dennis Ritchie在 1972年 基于Thompson的B语言开发的C语言
> 当时他正与Ken Thompson 一起设计UNIX操作系统


`Hello World 第一个 C 程序`

```clang
#include <stdio.h>
void main()
{
    printf("Hello World\n");
}
```

## C语言学习相关文章

- [C语言学习资源整理](https://zhuanlan.zhihu.com/p/23677249)
- [C语言学习路线图](https://zhuanlan.zhihu.com/p/27136146)
- [linux 下C语言学习路线](https://blog.csdn.net/xdw1985829/article/details/6817403)
- [笨办法学C中文版](https://wizardforcel.gitbooks.io/lcthw/content/)
- [C语言进阶有哪些优秀的代码可以阅读？](https://zhuanlan.zhihu.com/p/20100507)

## C语言学习书籍

- [明解C语言](https://www.amazon.cn/dp/B075WSF6KN/)
- [C语言程序设计:现代方法](https://www.amazon.cn/dp/B003BVBOOQ/)
- [The C programming_Language](https://www.amazon.cn/dp/B0011425T8/)
- [C primer plus](https://www.amazon.cn/dp/B01FE26HAU/)

## C语言知识点大汇总

- http://www.imooc.com/article/1255

### 变量交换

`第三个变量交换`

```c
c = b ;
b = a ;
a = c ;
```

`加减法`

```c
b = a - b ;
a = a - b ;
b = a + b ;
```

`按位异或`

```c
a = a ^ b ;
b = a ^ b ;
a = a ^ b ;
```

### sizeof使用

- sizeof是运算符 不是函数
- 跟数据类型时必须加()
