<!--
 * @Date        : 2020-05-02 20:37:47
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-11-10 20:00:51
 * @FilePath    : \data-structure\chapters\chapter02_linear_list\test-1.md
 * @Describe    : 
 -->
## 题目地址
2.1 验证性实验

## 题目描述
实验1：实现顺序表各种基本运算的算法

目的：

领会顺序表存储结构和掌握顺序表中各种基本运算算法设计。

函数：
```c++
InitList(SqLit *&L)     //初始化顺序表L

DestroyList(SqList *L)  //释放顺序表L

ListEmpty(SqList *L)    //判断顺序表L是否为空表

ListLenght(SqList *L)   //放回顺序表L的元素个数

DispList(SqList *L)     //输出顺序表L

GetElem(SqList *L, int i, ElemType &e)  //获取顺序表L中第i个元素

LocateElem(SqList *L, ElemType e)       //在顺序表L中查找元素e

ListInsert(SqList *&L, int i, ElemType e)   //在顺序表L中第i个位置上插入元素e

ListDelete(SqList *&L, int i, ElemType e)   //从顺序表L中删除第i个元素
```

## 代码
> - [struct.h](./code/struct/struct.h)
>> - [exp2-1.cpp](./code/exp2-1.cpp)
>> - [test1.cpp](./code/test1.cpp)

## 复杂度分析

- 时间复杂度：O()
- 空间复杂度：O()