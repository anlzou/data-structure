<!--
 * @Date        : 2020-05-02 20:37:47
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-29 17:28:09
 * @FilePath    : \data-structure\chapters\chapter05-recursive\test-2.md
 * @Describe    : 
 -->
## 题目地址
5.1 验证性实验

## 题目描述
实验题 2：求路径和路径条数问题

目的：

领会基本递归算法设计和递归执行过程。

函数：
```c++
pathnum(int x, int y)   //求解从 (x, y) 到目的地 (1, 1) 的路径条数

disppath(int x, int y, PathType path[], int d)  //输出从 (x, y) 到目的地 (1, 1) 的所有路径
```

## 二维数组地图

| (2 ,5) →in | (2 ,4)     | (2 ,3)     | (2 ,2)     | (2 ,1)          |
| ---------- | ---------- | ---------- | ---------- | --------------- |
| **(1 ,5)** | **(1 ,4)** | **(1 ,3)** | **(1 ,2)** | **(1 ,1) →out** |

## 思路
pathnum(x, y)算法的思路是：

- 设 f(x, y) 为从 (x, y) 到 (1, 1) 的路径条数，当 x > 1 或者 y > 1 时，可以从 (x, y) 向下移动一步，对应的路径条数为 f(x-1, y)，也可以向右移动一步，对应的路径条数为 f(x, y-1)。
- 递归模型如下：
```
            |0                      //当 x < 1 或者 n < 1
f(x, y)-----|1                      //当 m = 1 并且 n = 1
            |f(x-1, y) + f(x, y-1)  //其他情况
```

## 关键点
- 迷宫问题
- 二维数组地图

## 代码
- [header.h](./code/header/header.h)
- [exp5-2.cpp](./code/exp5-2.cpp)

## 复杂度分析

- 时间复杂度：O( )
- 空间复杂度：O( )