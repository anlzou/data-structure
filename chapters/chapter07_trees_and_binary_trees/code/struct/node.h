/***
 * @Date        : 2020-05-24 16:14:04
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-24 16:25:30
 * @FilePath    :
 * \data-structure\chapters\chapter07-trees-and-binary-trees\code\struct\node.h
 * @Describe    :
 */

typedef char ElemType;  //存储类型

/**
 * 二叉链结点类型
 */
typedef struct node {  //定义结点
    ElemType data;
    struct node *rchild;
    struct node *lchild;
} BTNode;