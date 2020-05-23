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
 * 由先序和中序遍历序列构造二叉树
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

/**
 * 由中序和后序遍历序列构造二叉树
 * n:二叉树共有个节点
 */
BTNode *createBTbyInAndPost(char *post, char *in, int n) {
    BTNode *b;
    char r, *p;
    int k;
    if (n <= 0) {
        return NULL;
    }
    r = *(post + n - 1);                   //取根节点值
    b = (BTNode *)malloc(sizeof(BTNode));  //创建二叉树结点*p
    b->data = r;
    for (p = in; p < in + n; p++) {  //在in中查找根节点
        if (*p == r) {
            break;
        }
    }
    k = p - in;  // k为根结点在in中的下标
    b->lchild = createBTbyInAndPost(post, in, k);  //递归构造左子树
    b->rchild =
        createBTbyInAndPost(post + k, p + 1, n - k - 1);  //递归构造右子树
    return b;
}

/**
 * 以凹入表示输出一颗二叉树
 */
void dispBTree(BTNode *b) {
    BTNode *St[MaxSize], *p;
    int level[MaxSize][2], top = -1, n, i, width = 4;
    char type;  //存放左右孩子标记
    if (b != NULL) {
        top++;
        St[top] = b;  //根结点进栈
        level[top][0] = width;
        level[top][1] = 2;  // 2表示根
        while (top > -1) {  //栈不空循环
            p = St[top];    //取栈顶结点，并凹入显示该结点值
            n = level[top][0];  //取根结点的显示场宽，即左边的空格个数
            switch (level[top][1]) {
                case 0:
                    type = 'L';  //左结点之后输出(L)
                    break;
                case 1:
                    type = 'R';  //右结点之后输出(R)
                    break;
                case 2:
                    type = 'B';  //根结点之后输出(B)
                    break;
            }
            for (i = 1; i <= n; i++) {  //其中n为显示场宽，字符以右对齐显示
                cout << " ";
            }
            cout << p->data << "(" << type << ")";
            for (i = n + 1; i <= MaxWidth; i += 2) {
                cout << "--";
            }
            cout << endl;
            top--;  //退栈
            if (p->rchild != NULL) {
                top++;
                St[top] = p->rchild;        //右孩子进栈
                level[top][0] = n + width;  //显示场宽增width
                level[top][1] = 1;          // 1表示是右子树
            }
            if (p->lchild != NULL) {
                top++;
                St[top] = p->lchild;        //左孩子进栈
                level[top][0] = n + width;  //显示场宽增width
                level[top][1] = 0;          // 0表示是左子树
            }
        }
    }
}