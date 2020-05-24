/***
 * @Date        : 2020-05-22 16:16:29
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-22 16:17:25
 * @FilePath    :
 * \data-structure\chapters\chapter07-trees-and-binary-trees\code\exp7-1.cpp
 * @Describe    : btree
 */
#include <iostream>
#include <malloc.h>

using namespace std;
#define MaxSize 100
typedef char ElemType;  //存储类型

typedef struct node {  //定义结点
    ElemType data;
    struct node *rchild;
    struct node *lchild;
} BTNode;

/**
 * 创建二叉树
 * 由括号表示串str创建二链b
 */
void CreateBTree(BTNode *&b, char *str) {
    BTNode *St[MaxSize], *p;
    int top = -1, k, j = 0;
    char ch;

    b = NULL;  //创建二叉树初始时为空
    ch = str[j];
    while (ch != '\0') {  // str 未扫描完时循环
        switch (ch) {
            case '(':  //开始处理左子树
                top++;
                St[top] = p;
                k = 1;
                break;

            case ')':  //左子树处理完
                top--;
                break;

            case ',':  //开始处理右子树
                k = 2;
                break;

            default:
                p = (BTNode *)malloc(sizeof(BTNode));
                p->data = ch;
                p->lchild = p->rchild = NULL;
                if (b == NULL) {  //若b为空，p置为二叉树的根结点
                    b = p;
                } else {  //已创建二叉树根结点
                    switch (k) {
                        case 1:
                            St[top]->lchild = p;
                            break;

                        case 2:
                            St[top]->rchild = p;
                            break;
                    }
                }
        }
        j++;
        ch = str[j];
    }
}

/**
 *销毁二叉树
 */
void DestroyBTree(BTNode *&b) {
    if (b != NULL) {
        DestroyBTree(b->lchild);
        DestroyBTree(b->rchild);
        free(b);
    }
}

/**
 * 查找值为x的结点
 * 使用先序遍历
 */
BTNode *FindNode(BTNode *b, ElemType x) {
    BTNode *p;
    if (b == NULL) {
        return NULL;
    } else if (b->data == x) {
        return b;
    } else {
        p = FindNode(b->lchild, x);
        if (p != NULL) {
            return p;
        }

        else {
            return FindNode(b->rchild, x);
        }
    }
}

/**
 * 返回p结点的左孩子结点指针
 */
BTNode *LchildNode(BTNode *p) { return p->lchild; }

/**
 * 返回p结点的左孩子结点指针
 */
BTNode *RchildNode(BTNode *p) { return p->rchild; }

/**
 * 求二叉树b的高度
 */
int BTHeight(BTNode *b) {
    int lchildh, rchildh;
    if (b == NULL) {
        return 0;
    } else {
        lchildh = BTHeight(b->lchild);  //求左子树的高度
        rchildh = BTHeight(b->rchild);  //求右子树的高度
        return (lchildh > rchildh) ? (lchildh + 1) : (rchildh + 1);
    }
}

/**
 * 以括号表示法输出二叉树
 */
void DispBTree(BTNode *b) {
    if (b != NULL) {
        cout << b->data;
        if (b->lchild != NULL || b->rchild != NULL) {
            cout << "(";           //有孩子结点时才输出(
            DispBTree(b->lchild);  //递归处理左子树
            if (b->rchild != NULL) {
                cout << ",";  //有右孩子结点时才输出,
            }
            DispBTree(b->rchild);  //递归处理右子树
            cout << ")";           //有孩子结点时才输出)
        }
    }
}