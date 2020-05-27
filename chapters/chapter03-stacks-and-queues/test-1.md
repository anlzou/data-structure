<!--
 * @Date        : 2020-05-21 17:12:42
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-27 10:14:26
 * @FilePath    : \data-structure\chapters\chapter03-stacks-and-queues\test-1.md
 * @Describe    : 
--> 

## 题目地址
8.1 验证性实验

## 题目描述
实验题 1：实现顺序栈各种基本运算的算法

目的：

领会顺序栈存储结构和掌握顺序栈中各种基本运算算法设计。

函数：
```java
InitStack(SqStack *&s)			//初始化顺序栈 s

DestroyStack(SqStack *&s)		//销毁顺序栈

StackEmpty(SqStack *s)			//判断顺序栈 s 是否为空栈

Push(SqStack *&s, ElemType &e)	//元素 e 进顺序栈

Pop(SqStack *&s, ElemType &e)	//元素 e 出顺序栈

GetTop(SqStack *s, ElemType &e)	//取顺序栈的栈顶元素 e
```

## 栈的定义
栈(stack)是一种只能在一端进行插入（进栈）或删除（出栈）操作的线性表。

栈的主要特点是“后进先出”(Last In First Out, LIFO)，即后进栈的元素先出栈。每次进栈的数据元素都放在原来栈顶元素之前称为新的栈顶元素，每次出栈的数据元素都是当前栈顶元素。栈也称为**后进先出表**。

## 代码
> - [struct.h](./code/struct/struct.h)
>> - [exp3-1.cpp](./code/exp3-1.cpp)
>> - [test1.cpp](./code/test1.cpp)

## 复杂度分析

- 时间复杂度：O( )
- 空间复杂度：O( )