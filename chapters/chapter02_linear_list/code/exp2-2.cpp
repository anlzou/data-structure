/***
 * @Date        : 2020-11-10 20:16:55
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-11-10 20:17:49
 * @FilePath    : \data-structure\chapters\chapter02_linear_list\code\exp2-2.cpp
 * @Describe    :
 */
#include "./struct/struct.h"

/**
 * 头插法建立单链表
 */
void CreateListFrontInseart(LinkNode *&L, ElemType a[], int n) {
    LinkNode *s;
    L = (LinkNode *)malloc(sizeof(LinkNode));  //创建头节点
    L->next = NULL;                            //头节点不存放数据
    for (int i = 0; i < n; i++) {
        s = (LinkNode *)malloc(sizeof(LinkNode));  //创建新节点
        s->data = a[i];                            //新节点存放数据
        s->next = L->next;  // s节点放在头节点之后；指向L指向的节点
        L->next = s;        //头节点指向s
    }
}

/**
 * 尾插法建立单链表
 */
void CreateListRearInseart(LinkNode *&L, ElemType a[], int n) {
    LinkNode *s, *r;
    L = (LinkNode *)malloc(sizeof(LinkNode));
    L->next = NULL;
    r = L;  // r指针始终指向尾节点，用于定位链表尾部，开始时指向头节点
    for (int i = 0; i < n; i++) {
        s = (LinkNode *)malloc(sizeof(LinkNode));  //该节点存放插入的节点数据
        s->data = a[i];
        r->next = s;
        r = s;
    }
    r->next = NULL;  //尾节点next域为NULL，用来判断结束
}