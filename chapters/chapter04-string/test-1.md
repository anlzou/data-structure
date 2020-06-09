<!--
 * @Date        : 2020-05-02 20:37:47
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-06-09 23:36:17
 * @FilePath    : \data-structure\chapters\chapter04-string\test-1.md
 * @Describe    : 
 -->
## 题目地址
5.1 验证性实验

## 题目描述
实验题 1：实现顺序串各种基本运算的算法

目的：

领会顺序串存储结构和掌握顺序串中各种基本运算算法设计。

函数：
```cpp
StrAssign(SqString &str, char cstr[])   //由串常量 cstr 创建顺序串 str

StrCopy(SqString &s, SqString t)        //将顺序串 t 复制到串 s

StrEqual(SqString s, SqString t)        //判断两个顺序串 s 和 t 是否相同

StrLength(SqString s)                   //求顺序串 s 的长度

Concat(SqString s, SqString t)          //返回将顺序串 t 连接到顺序串 s 之后构成的新串

SubStr(SqString s, int i, int j)        //返回由顺序串 s 的第 i 个字符开始的 j 个字符构成的新串

InsStr(SqString s1, int i, SqString s2) //返回将顺序串 s2 插入到顺序串 s1 的第 i 个位置中构成的新串

DelStr(SqString s, int i, int j)        //返回删除顺序串 s 的第 i 个字符开始的 j 个字符构成的新串

RepStr(SqString s, int i, int j, SqString t) //返回将顺序串 s 的第 i 个字符开始的 j 个字符替换成顺序串 t 构成的新串

DispStr(SqString s)                     //输出顺序串 s 的所有元素
```

## 思路
和线性表一样，串也有顺序存储结构和链式存储结构。前者称为**顺序串**，后者称为**链串**。

顺序串的存储方式方式有两种：一种是每个字只存一个字符，称为**非紧缩格式**（其存储密度小）；另一种是每个字存放多个字符，称为**紧缩格式**（其存储密度大）。

#顺序串
```cpp
typedef struct{
    char data[MaxSize]; //存放串字符
    int length;         //存放串长
}SqString;              //顺序串类型
```

#链串
```cpp
typedef struct snode{
    char data;          //存放字符
    struct snode *node; //指向下一个结点的指针
}LinkStrNode;           //链串的结点类型
```

## 关键点

## 代码
- [header.h](./code/header/header.h)
- [exp5-1.cpp](./code/exp5-1.cpp)

## 补充
- 1字=n字节(1 word = n byte) ,1字节=8位(1 byte = 8bit) 。
- [warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]](https://www.cnblogs.com/zkfopen/p/10521715.html)

## 复杂度分析

- 时间复杂度：O( )
- 空间复杂度：O( )