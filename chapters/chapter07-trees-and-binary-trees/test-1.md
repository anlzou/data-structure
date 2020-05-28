<!--
 * @Date        : 2020-05-21 17:12:41
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-28 15:49:47
 * @FilePath    : \data-structure\chapters\chapter07-trees-and-binary-trees\test-1.md
 * @Describe    : 
--> 
## 题目地址
7.1 验证性实验

## 题目描述
实验题 1：实现二叉树各种基本运算的算法

目的：
```
领会二叉链表存储结构和掌握二叉树中各种基本运算算法设计
```
目录：
```java
CreateBTree(BTNode *&b, char *str)  //由括号表示串str创建二链b

FindNode(BTNode *b, ElemType x)     //返回data域为x的结点指针

RchildNode(BTNode *p)               //返回p结点的左孩子结点指针

LchildNode(BTNode *p)               //返回p结点的右孩子结点指针

BTHeight(BTNode *b)                 //返回二叉树b的高度

DispBTree(BTNode *b)                //以括号表示法输出二叉树b

DestroyBTree(BTNode *&b)            //释放二叉树b的所有结点
```


## 代码
>- [node.h](./code/struct/node.h)
>>- [exp7-1.cpp](./code/exp7-1.cpp)
>>  - [test1.cpp](./code/test1.cpp)

## 复杂度分析

- 时间复杂度：O( )
- 空间复杂度：O( )