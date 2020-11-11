<!--
 * @Date        : 2020-05-02 20:37:47
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-11-11 19:27:04
 * @FilePath    : \data-structure\chapters\chapter02_linear_list\test-3.md
 * @Describe    : 
 -->
## 题目地址
3.1 验证性实验

## 题目描述
实验3：实现双链表各种基本运算的算法

目的：

领会双链表存储结构和掌握双链表中各种基本运算算法设计。

函数：
```c++
CreateListFrontInseart(DLinkNode *&L, ElemType a[], int n)//头插法建立双链表

CreateListRearInseart(DLinkNode *&L, ElemType a[], int n)//尾插法建立双链表

InitList(DLinkNode *&L)     //初始化双链表L

DestroyList(DLinkNode *L)  //释放双链表L

ListEmpty(DLinkNode *L)    //判断双链表L是否为空表

ListLenght(DLinkNode *L)   //放回双链表L的元素个数

DispList(DLinkNode *L)     //输出双链表L

GetElem(DLinkNode *L, int i, ElemType &e)  //获取双链表L中第i个元素

LocateElem(DLinkNode *L, ElemType e)       //在双链表L中查找元素e

ListInsert(DLinkNode *&L, int i, ElemType e)   //在双链表L中第i个位置上插入元素e

ListDelete(DLinkNode *&L, int i, ElemType e)   //从双链表L中删除第i个元素
```

## 代码
> - [struct.h](./code/struct/struct.h)
>> - [exp3-3.cpp](./code/exp3-3.cpp)
>> - [test3.cpp](./code/test3.cpp)

## 复杂度分析

- 时间复杂度：O()
- 空间复杂度：O()