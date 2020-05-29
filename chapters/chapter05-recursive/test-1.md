<!--
 * @Date        : 2020-05-02 20:37:47
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-29 11:11:44
 * @FilePath    : \data-structure\chapters\chapter05-recursive\test-1.md
 * @Describe    : 
 -->
## 题目地址
5.1 验证性实验

## 题目描述
实验题 1：采用递归和非递归方法求解 Hanoi 问题

目的：

领会基本递归算法设计和递归到非递归的转换方法。

函数：
```java
HanoiRecu(int n, char a, char b, char c) //求解 Hanoi 问题的递归算法

HanoiUnre(int n, char x, char y, char z) //求解 Hanoi 问题的非递归算法
```
[顺序栈的基本运算](../chapter03-stacks-and-queues/test-1.md)，用于HanoiUnre()函数，模拟栈操作过程。

## 思路
```java
Hanoi(n-1, a, c, b);    //将a中 n-1(除了最底部的圆盘)个圆盘从a 借助 c 移到 b
move(n, a, c);          //将a中 最后1个圆盘从 a 移到 c
Hanoi(n-1, b, a, c);    //将b中 n-1(除了最底部的圆盘)个圆盘从b 借助 a 移到 c
```

## 关键点
- 递归出口<code>(n == 1)</code>

## 代码


## 复杂度分析

- 时间复杂度：O( )
- 空间复杂度：O( )