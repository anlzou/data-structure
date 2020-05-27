/***
 * @Date        : 2020-05-27 09:41:59
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-27 09:42:36
 * @FilePath    :
 * \data-structure\chapters\chapter03-stacks-and-queues\code\exp3-1.cpp
 * @Describe    :
 */
#include "./struct/struct.h"

/**
 * 初始化顺序栈
 */
void InitStack(SqStack *&s) {
    s = (SqStack *)malloc(sizeof(SqStack));
    s->top = -1;
}

/**
 * 销毁顺序栈
 */
void DestroyStack(SqStack *&s) { free(s); }

/**
 * 判断栈空否
 */
bool StackEmpty(SqStack *s) { return (s->top == -1); }

/**
 * 进栈
 */
bool Push(SqStack *&s, ElemType e) {
    if (s->top == MaxSize - 1) {  //栈满的情况，即栈上溢出
        return false;
    }
    s->top++;
    s->data[s->top] = e;
    return true;
}

/**
 * 出栈
 */
bool Pop(SqStack *&s, ElemType &e) {
    if (s->top == -1)  //栈为空的情况，即栈下溢出
    {
        return false;
    }
    e = s->data[s->top];
    s->top--;
    return true;
}

/**
 * 取栈顶元素
 */
bool GetTop(SqStack *s, ElemType &e) {
    if (s->top == -1)  //栈为空的情况，即栈下溢出
    {
        return false;
    }
    e = s->data[s->top];
    return true;
}