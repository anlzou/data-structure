/***
 * @Date        : 2020-05-28 15:13:59
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-28 15:14:30
 * @FilePath    :
 * \data-structure\chapters\chapter03-stacks-and-queues\code\exp3-3.cpp
 * @Describe    :
 */
#include "./struct/struct.h"

/**
 * 初始化队列 q
 */
void InitQueue(SqQueue *&q) {
    q = (SqQueue *)malloc(sizeof(SqQueue));
    q->front = q->rear = 0;
}

/**
 * 销毁队列 q
 */
void DestroyQueue(SqQueue *&q) { free(q); }

/**
 * 判断队列 q 是否空
 */
bool QueueEmpty(SqQueue *q) { return (q->front == q->rear); }

/**
 * 进队
 */
bool enQueue(SqQueue *&q, ElemType e) {
    if ((q->rear + 1) % MaxSize == q->front) {
        cout << "提示：队满，不能进队!!!!!!!!!" << endl;
        return false;  //队满，上溢出，返回假
    }
    q->rear = (q->rear + 1) % MaxSize;
    q->data[q->rear] = e;
    return true;
}

/**
 * 出队
 */
bool deQueue(SqQueue *&q, ElemType &e) {
    if (q->front == q->rear) {
        cout << "提示：队空，不能进队!!!!!!!!!" << endl;
        return false;  //队空，下溢出，返回假
    }
    q->front = (q->front + 1) % MaxSize;
    e = q->data[q->front];
    return true;
}