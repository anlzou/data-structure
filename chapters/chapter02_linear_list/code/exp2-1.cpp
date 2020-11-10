/***
 * @Date        : 2020-11-10 19:17:50
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-11-10 19:18:59
 * @FilePath    : \data-structure\chapters\chapter02_linear_list\code\exp2-1.cpp
 * @Describe    :
 */
#include "./struct/struct.h"

/**
 * 整体简历顺序表
 */
void CreateList(SqList *&L, ElemType a[], int n) {
    L = (SqList *)malloc(sizeof(SqList));
    for (int i = 0; i < n; i++) L->data[i] = a[i];
    L->length = n;
}

/**
 * 初始化线性表
 */
void InitList(SqList *&L) {
    L = (SqList *)malloc(sizeof(SqList));
    L->length = 0;
}

/**
 * 销毁线性表
 */
void DestroyList(SqList *&L) { free(L); }

/**
 * 判断线性表是否为空
 */
bool ListEmpty(SqList *L) { return (L->length == 0); }

/**
 * 求线性表的长度
 */
int ListLength(SqList *L) { return (L->length); }

/**
 * 输出线性表
 */
void DispList(SqList *L) {
    for (int i = 0; i < L->length; i++) printf("%c ", L->data[i]);
    printf("\n");
}

/**
 * 输出线性表中第i个元素值
 */
bool GetElem(SqList *L, int i, ElemType &e) {
    if (i < 1 || i > L->length) return false;
    e = L->data[i - 1];
    return true;
}

/**
 * 查找第一个值域为e的元素序号
 */
int LocateElem(SqList *L, ElemType e) {
    int i = 0;
    while (i < L->length && L->data[i] != e) i++;
    if (i >= L->length)
        return 0;
    else
        return i + 1;
}

/**
 * 插入第i个元素
 */
bool ListInsert(SqList *&L, int i, ElemType e) {
    int j;
    if (i < 1 || i > L->length + 1) return false;
    i--;
    for (j = L->length; j > i; j--) L->data[j] = L->data[j - 1];
    L->data[i] = e;
    L->length++;
    return true;
}

/**
 * 删除第i个元素
 */
bool ListDelete(SqList *&L, int i, ElemType &e) {
    int j;
    if (i < 1 || i > L->length) return false;
    i--;
    e = L->data[i];
    for (j = i; j < L->length - 1; j++) L->data[j] = L->data[j + 1];
    L->length--;
    return true;
}