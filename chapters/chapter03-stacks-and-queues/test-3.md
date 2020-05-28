<!--
 * @Date        : 2020-05-21 17:12:42
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-28 15:09:56
 * @FilePath    : \data-structure\chapters\chapter03-stacks-and-queues\test-3.md
 * @Describe    : 
--> 

## 题目地址
8.1 验证性实验

## 题目描述
实验题 3：实现环形队列各种基本运算的算法

目的：

领会环形队列存储结构和掌握环形队列中各种基本运算算法设计。

函数：
```java
InitQueue(SqQueue *&q)			//初始化环形队列 q

DestroyQueue(SqQueue *&q)		//销毁环形队列 q

QueueEmpty(SqQueue *q)			//判断环形队列 q 是否为空栈

enQueue(SqQueue *&q, ElemType &q)	//环形队列进队一个元素 e

deQueuep(SqQueue *&q, ElemType &q)	//环形队列出队一个元素 e
```

## 思路
队列(queue)简称队，它也是一种操作受限的线性表，其限制为仅允许在表的一端进行插入操作，而在表的另一端进行删除操作。

*插入/进队/入队*(enqueue)的一端叫**队尾**(rear)，*删除/出队/离队*(dequeue)的一端叫**队头/首**(front)，元素出队后，其直接后继元素成为队首元素。

队列又称为**先进先出表**(First In First Out,FIFO)。

采用顺序存储结构的队列称为**顺序队列**(sequential queue)。存在溢出的情况：
1. 进队时队满的条件是(rear == MaxSize-1)，表示此时队满（上溢出）了，不能再进队元素。出队队空的条件是(front > rear || front > MaxSize-1)。
2. 还有一种溢出叫做**假溢出**(false voerflow)，进队和出队都有操作，进队时队满而出队的一端有空位置。解决的方法是使用环形队列。

把 data 数组的前端和后端连接起来，形成一个环形数组，即把存储队列元素的数组从逻辑上看成一个环，称为**环形队列/循环队列**(circular quenue)。

## 代码
> - [struct.h](./code/struct/struct.h)
>> - [exp3-3.cpp](./code/exp3-1.cpp)
>> - [test3.cpp](./code/test1.cpp)

## 复杂度分析

- 时间复杂度：O(1)
- 空间复杂度：O( )