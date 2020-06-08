/***
 * @Date        : 2020-06-08 21:49:30
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-06-08 22:41:19
 * @FilePath    : \data-structure\chapters\chapter04-string\code\header\header.h
 * @Describe    :
 */

#include <iostream>
#include <malloc.h>

#define MaxSize 100
using namespace std;

/**
 * 顺序串结构体
 */
typedef struct {
    char data[MaxSize];  //存放串字符
    int length;          //存放串长
} SqString;              //顺序串类型

/**
 * 链串结构体
 */
typedef struct snode {
    char data;           //存放字符
    struct snode *node;  //指向下一个结点的指针
} LinkStrNode;           //链串的结点类型