/***
 * @Date        : 2020-05-27 20:28:15
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-27 20:28:40
 * @FilePath    :
 * \data-structure\chapters\chapter03-stacks-and-queues\code\exp3-2.cpp
 * @Describe    :
 */
#include "./struct/struct.h"

/**
 * 初始化链栈
 */
void InitStack(LinkStNode *&s) {
    s = (LinkStNode *)malloc(sizeof(linknode));
    s->next = NULL;
}

/**
 * 销毁链栈
 */
void DestroyStack(LinkStNode *&s) {
    LinkStNode *p = s->next;
    while (p != NULL) {
        free(s);
        s = p;
        p = p->next;
    }
}

/**
 * 判断栈空否
 */
bool StackEmpty(LinkStNode *s) { return (s->next == NULL); }

/**
 * 进栈
 */
void Push(LinkStNode *&s, ElemType &e) {
    LinkStNode *p;
    p = (LinkStNode *)malloc(sizeof(linknode));
    p->data = e;        //新建元素 e 对应的结点p
    p->next = s->next;  //插入 p 结点作为开始结点
    s->next = p;
}

/**
 * 出栈
 */
bool Pop(LinkStNode *&s, ElemType &e) {
    linknode *p;
    if (s->next == NULL) {  //栈空的情况
        return NULL;
    }
    p = s->next;  // p 指向开始结点
    e = p->data;
    s->next = p->next;  //删除 p 结点
    free(p);            //释放 p 结点
    return true;
}

/**
 * 取栈顶元素
 */
bool GetTop(LinkStNode *s, ElemType &e) {
    if (s->next == NULL) {  //栈空的情况
        return false;
    }
    e = s->next->data;
    return true;
}