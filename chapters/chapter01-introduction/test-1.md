<!--
 * @Date        : 2020-05-02 20:37:47
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-22 10:12:23
 * @FilePath    : \data-structure\chapters\chapter01-introduction\test-1.md
 * @Describe    : 
 -->
## 题目地址
1.1 验证性实验

## 题目描述

问题：
```
实验题 1：求 1~n 的连续整数和
```
目的：
```
通过对比同一问题不同解法的绝对执行时间，体会不同算法的优劣
```

## 思路
#1

使用 for 循环求和

#2

使用高斯法 [数学归纳法](https://baike.baidu.com/item/%E6%95%B0%E5%AD%A6%E5%BD%92%E7%BA%B3%E6%B3%95/5155524?fr=aladdin)

## 关键点
等差公式
```
1+2+3+...+n = n*(n+1)/2
```

## 代码
[exp1-1.cpp](./code/exp1-1.cpp)

## 复杂度分析

- 时间复杂度：O(N)
- 空间复杂度：O(1)