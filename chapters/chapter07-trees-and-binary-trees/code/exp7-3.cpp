/***
 * @Date        : 2020-05-23 11:08:58
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-23 11:09:54
 * @FilePath    :
 * \data-structure\chapters\chapter07-trees-and-binary-trees\code\exp7-3.cpp
 * @Describe    :
 */
#include "exp7-1.cpp"
#define MaxWidth 40

/**
 * 由先序和中序遍历构造二叉树
 * n:二叉树共有个节点
 */
BTNode *createBTbyPreAndIn(char *pre, char *in, int n) {
    BTNode *b;
    char *p;
    int k;
    if (n <= 0) {
        return NULL;
    }
    b = (BTNode *)malloc(sizeof(BTNode));  //创建二叉树结点b
    b->data = *pre;
    for (p = in; p < in + n; p++) {  //在中序序列中找等于*pre字符的位置k
        if (*p == *pre) {            // pre指向根结点
            break;                   //在in中找到后退出循环
        }
    }
    k = p - in;  //确定根结点在in中的位置
    b->lchild = createBTbyPreAndIn(pre + 1, in, k);  //递归构造左子树
    b->rchild =
        createBTbyPreAndIn(pre + k + 1, p + 1, n - k - 1);  //递归构造右子树
    return b;
}
