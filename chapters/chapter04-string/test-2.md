<!--
 * @Date        : 2020-05-02 20:37:47
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-06-18 23:26:28
 * @FilePath    : \data-structure\chapters\chapter04-string\test-2.md
 * @Describe    : 
 -->
## 题目地址
5.1 验证性实验

## 题目描述
实验题 1：实现链串各种基本运算的算法

目的：

领会链串存储结构和掌握链串中各种基本运算算法设计。

函数：
```cpp
StrAssign(LinkStrNode &str, char cstr[])            //由串常量 cstr 创建链串 str

StrCopy(LinkStrNode &s, LinkStrNode t)              //将链串 t 复制到串 s

StrEqual(LinkStrNode s, LinkStrNode t)              //判断两个链串 s 和 t 是否相同

StrLength(LinkStrNode s)                            //求链串 s 的长度

Concat(LinkStrNode s, LinkStrNode t)                //返回将链串 t 连接到链串 s 之后构成的新串

SubStr(LinkStrNode s, int i, int j)                 //返回由链串 s 的第 i 个字符开始的 j 个字符构成的新串

InsStr(LinkStrNode s1, int i, LinkStrNode s2)       //返回将链串 s2 插入到链串 s1 的第 i 个位置中构成的新串

DelStr(LinkStrNode s, int i, int j)                 //返回删除链串 s 的第 i 个字符开始的 j 个字符构成的新串

RepStr(LinkStrNode s, int i, int j, LinkStrNode t)  //返回将链串 s 的第 i 个字符开始的 j 个字符替换成链串 t 构成的新串

DispStr(LinkStrNode s)                              //输出链串 s 的所有元素
```

## 思路
和线性表一样，串也有顺序存储结构和链式存储结构。前者称为**顺序串**，后者称为**链串**。

链串的存储方式方式有两种：一种是每个字只存一个字符，称为**非紧缩格式**（其存储密度小）；另一种是每个字存放多个字符，称为**紧缩格式**（其存储密度大）。

#### 顺序串
```cpp
typedef struct{
    char data[MaxSize]; //存放串字符
    int length;         //存放串长
}LinkStrNode;           //顺序串类型
```

#### 链串
```cpp
typedef struct snode{
    char data;          //存放字符
    struct snode *node; //指向下一个结点的指针
}LinkStrNode;           //链串的结点类型
```

## 关键点

## 代码
- [header.h](./code/header/header.h)
- [exp5-2.cpp](./code/exp5-2.cpp)

## 补充

## 复杂度分析

- 时间复杂度：O( )
- 空间复杂度：O( )