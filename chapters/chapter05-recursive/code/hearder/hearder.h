/***
 * @Date        : 2020-05-29 11:13:36
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-29 11:17:29
 * @FilePath    :
 * \data-structure\chapters\chapter05-recursive\code\hearder\hearder.h
 * @Describe    :
 */
#include <iostream>
#include <malloc.h>

#define MaxSize 100
using namespace std;

typedef struct {
    int n;         //盘片个数
    char x, y, z;  // 3个塔座
    bool flag;     //可直接移动盘片时为 true，否则为 false
} ElemType;

/**
 * 顺序栈结构体
 */
typedef struct {
    ElemType data[MaxSize];
    int top;  //栈顶指针
} SqStack;    //声明顺序栈类型

/* ================求解 Hanoi 问题对应顺序栈的基本运算算法=============== */
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
    if (s->top == -1) {  //栈为空的情况，即栈下溢出
        return false;
    }
    e = s->data[s->top];
    s->top--;
    return true;
}
