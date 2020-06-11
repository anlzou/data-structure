<!--
 * @Date        : 2020-05-02 20:37:47
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-06-11 16:45:28
 * @FilePath    : \data-structure\chapters\chapter04-string\test-3.md
 * @Describe    : 
 -->
## 题目地址
5.1 综合性实验

## 题目描述
实验题 1：利用 KMP 算法求子串在主串中出现的次数

目的：

深入掌握 KMP算法的应用。

内容：
```
编写一个程序，利用 KMP 算法求子串 t 在主串 s 中出现的次数，
并以 s = "aaabbdaabbde"，t = "aabbd" 为例，显示匹配过程。
```

函数：
```cpp
GetNext(SqString t, int next[])                 //由模式 t 求出 next 串数值值

display(SqString s, SqString t, int i, int j)   //显示匹配状态信息

Count(SqString s, SqString t)                   //利用 KMP 算法求 t 在 s 中出现的次数
```

## 思路

## 关键点

## 代码
>- [exp5-3.cpp](./code/exp5-3.cpp)
>> - [header.h](./code/header/header.h)
>> - [exp5-1.cpp](./code/exp5-1.cpp)

## 结果
```
  ↓ i = 0, j = 0
s:a a a b b d a a b b d e
t:a a b b d
  ↑
      ↓ i = 2, j = 1
s:a a a b b d a a b b d e
t:  a a b b d
      ↑
              ↓ i = 6, j = 5
s:a a a b b d a a b b d e
t:  a a b b d
              ↑
         成功匹配 1 次
                        ↓ i = 11, j = 5
s:a a a b b d a a b b d e
t:            a a b b d
                        ↑
         成功匹配 1 次
                        ↓ i = 11, j = -1
s:a a a b b d a a b b d e
t:                        a a b b d
                        ↑
t 在 s 中出现的次数：2
```
## 复杂度分析

- 时间复杂度：O( )
- 空间复杂度：O( )