<!--
 * @Date        : 2020-05-02 20:37:47
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-11-11 19:26:09
 * @FilePath    : \data-structure\chapters\chapter02_linear_list\test-2.md
 * @Describe    : 
 -->
## 题目地址
2.1 验证性实验

## 题目描述
实验2：实现单链表各种基本运算的算法

目的：

领会单链表存储结构和掌握单链表中各种基本运算算法设计。

函数：
```c++
CreateListFrontInseart(LinkNode *&L, ElemType a[], int n)//头插法建立单链表

CreateListRearInseart(LinkNode *&L, ElemType a[], int n)//尾插法建立单链表

InitList(LinkNode *&L)     //初始化单链表L

DestroyList(LinkNode *L)  //释放单链表L

ListEmpty(LinkNode *L)    //判断单链表L是否为空表

ListLenght(LinkNode *L)   //放回单链表L的元素个数

DispList(LinkNode *L)     //输出单链表L

GetElem(LinkNode *L, int i, ElemType &e)  //获取单链表L中第i个元素

LocateElem(LinkNode *L, ElemType e)       //在单链表L中查找元素e

ListInsert(LinkNode *&L, int i, ElemType e)   //在单链表L中第i个位置上插入元素e

ListDelete(LinkNode *&L, int i, ElemType e)   //从单链表L中删除第i个元素
```

## 代码
> - [struct.h](./code/struct/struct.h)
>> - [exp2-2.cpp](./code/exp2-2.cpp)
>> - [test2.cpp](./code/test2.cpp)

## 复杂度分析

- 时间复杂度：O()
- 空间复杂度：O()