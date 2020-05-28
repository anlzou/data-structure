<!--
 * @Date        : 2020-05-21 17:12:42
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-28 15:44:55
 * @FilePath    : \data-structure\chapters\chapter03-stacks-and-queues\test-2.md
 * @Describe    : 
--> 

## 题目地址
8.1 验证性实验

## 题目描述
实验题 2：实现链栈各种基本运算的算法

目的：

领会链栈存储结构和掌握链栈中各种基本运算算法设计。

函数：
```java
InitStack(LinkStNode *&s)			//初始化链栈 s

DestroyStack(LinkStNode *&s)		//销毁链栈

StackEmpty(LinkStNode *s)			//判断链栈 s 是否为空栈

Push(LinkStNode *&s, ElemType &e)	//元素 e 进链栈

Pop(LinkStNode *&s, ElemType &e)	//元素 e 出链栈

GetTop(LinkStNode *s, ElemType &e)	//取链栈的栈顶元素 e
```

## 思路
栈中数据的逻辑关系呈线性关系，所以栈可以像线性表一样采用链式存储结构。

*采用链式存储结构的栈称为**链栈(linked stack)**。*

链表有多种，这里采用**带头结点**的单链表来实现链栈。

链栈的优点是不存在栈满上溢出的情况。规定栈的所有操作都是在单链表的表头进行的（因为给定链栈后，已知头结点地址，在其后面插入一个新结点和删除首结点都十分方便，对应的算法的时间复杂度均为O(1)）。

## 代码
> - [struct.h](./code/struct/struct.h)
>> - [exp3-2.cpp](./code/exp3-2.cpp)
>> - [test2.cpp](./code/test2.cpp)

## 复杂度分析

- 时间复杂度：O(1)
- 空间复杂度：O( )