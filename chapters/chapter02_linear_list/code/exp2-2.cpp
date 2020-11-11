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
    r->next = NULL;  //尾节点next域为NULL
}

/**
 * 初始化线性表
 */
void InitList(LinkNode *&L) {
    L = (LinkNode *)malloc(sizeof(LinkNode));
    L->next = NULL;
}

/**
 * 销毁线性表
 */
void DestroyList(LinkNode *&L) {
    LinkNode *pre = L, *p = pre->next;
    while (p != NULL) {
        free(pre);
        pre = p;  // pre，p同步后移一个节点
        p = pre->next;
    }
    free(pre);  //此时p = NULL,pre指向尾节点，释放它
}

/**
 * 判断线性表是否为空表
 */
bool ListEmpty(LinkNode *L) { return (L->next == NULL); }

/**
 * 求线性表的长度
 */
int ListLength(LinkNode *L) {
    int len = 0;
    LinkNode *p = L;  // p指向头节点，i置为0（即头节点的序号为0）
    while (p->next != NULL) {
        len++;
        p = p->next;
    }
    return (len);
}

/**
 * 输出线性表
 */
void DispList(LinkNode *L) {
    LinkNode *p = L->next;
    while (p != NULL) {
        printf("%c ", p->data);
        p = p->next;
    }
    printf("\n");
}

/**
 * 求线性表中第i个元素
 */
bool GetElem(LinkNode *L, int i, ElemType &e) {
    int j = 0;
    LinkNode *p = L;
    if (i <= 0) return false;
    while (j < i && p != NULL) {
        j++;
        p = p->next;
    }
    if (p == NULL)
        return false;
    else {
        e = p->data;
        return true;
    }
}

/**
 * 查找第1个值域为e的元素序号
 */
int LocateElem(LinkNode *L, ElemType e) {
    int i = 1;
    LinkNode *p = L->next;
    while (p != NULL && p->data != e) {
        p = p->next;
        i++;
    }
    if (p == NULL)
        return (0);
    else
        return (i);
}

/**
 * 插入第i个元素
 */
bool ListInsert(LinkNode *&L, int i, ElemType e) {
    int j = 0;
    LinkNode *p = L, *s;
    if (i <= 0) return false;
    while (j < i - 1 && p != NULL) {  //定位第i个节点
        j++;
        p = p->next;
    }
    if (p == NULL)
        return false;
    else {
        s = (LinkNode *)malloc(sizeof(LinkNode));  //插入的节点
        s->data = e;
        s->next = p->next;  //插入的节点指向i节点指向的节点
        p->next = s;        // i节点指向插入节点
        return true;
    }
}

/**
 * 删除第i个元素
 */
bool ListDelete(LinkNode *&L, int i, ElemType &e) {
    int j = 0;
    LinkNode *p = L, *q;
    if (i <= 0) return false;
    while (j < i - 1 && p != NULL) {  //定位第i个节点
        j++;
        p = p->next;
    }
    if (p == NULL)
        return false;
    else {
        q = p->next;  // q是删除的节点
        if (q == NULL) return false;
        e = q->data;
        p->next = q->next;
        free(q);
        return true;
    }
}