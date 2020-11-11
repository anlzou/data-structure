#include <stdio.h>
#include <malloc.h>

#define MaxSize 50

typedef char ElemType;

/**
 * 顺序表结构体
 */
typedef struct {
    ElemType data[MaxSize];
    int length;
} SqList;

/**
 * 单链表结构体
 */
typedef struct LNode {
    ElemType data;
    struct LNode *next;  //指向后继节点
} LinkNode;              //声明单链表节点类型

/**
 * 双链表结构体
 */
typedef struct DNode {
    ElemType data;
    struct DNode *prior;  //指向前驱节点
    struct DNode *next;   //指向后继节点
} DLinkNode;              //声明双向链表节点类型