/***
 * @Date        : 2020-05-27 09:38:31
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-27 09:40:16
 * @FilePath    :
 * \data-structure\chapters\chapter03-stacks-and-queues\code\struct\struct.h
 * @Describe    :
 */
#include <iostream>
#include <malloc.h>

#define MaxSize 100
typedef char ElemType;

using namespace std;

/**
 * 顺序栈结构体
 */
typedef struct {
    ElemType data[MaxSize];
    int top;  //栈顶指针
} SqStack;    //声明顺序栈类型

/**
 * 链栈结构体
 */
typedef struct linknode {
    ElemType data;          //数据域
    struct linknode *next;  //指针域
} LinkStNode;               //链栈类型定义