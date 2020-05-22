/***
 * @Date        : 2020-05-22 20:15:39
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-22 20:16:10
 * @FilePath    :
 * \data-structure\chapters\chapter07-trees-and-binary-trees\code\exp7-2.cpp
 * @Describe    :
 */
#include "exp7-1.cpp"  //包含二叉树的基本运算算法
#include <iostream>

using namespace std;

/**
 * 先序遍历的递归算法
 */
void preOrderRecu(BTNode *b) {
    if (b != NULL) {
        cout << b->data << " ";   //访问根结点
        preOrderRecu(b->lchild);  //递归访问左子树
        preOrderRecu(b->rchild);  //递归访问右子树
    }
}

/**
 * 先序遍历的非递归算法
 */
void preOrderUNre(BTNode *b) {
    BTNode *St[MaxSize], *p;
    int top = -1;
    if (b != NULL) {  //根结点进栈
        top++;
        St[top] = b;
        while (top > -1) {  //栈不为空时循环
            p = St[top];    //退栈并访问该结点
            top--;
            cout << p->data << " ";
            if (p->rchild != NULL) {  //有右孩子，将其进栈
                top++;
                St[top] = p->rchild;
            }
            if (p->lchild != NULL) {  //有左孩子，将其进栈
                top++;
                St[top] = p->lchild;
            }
        }
        cout << endl;
    }
}

/**
 * 中序遍历的递归算法
 */
void inOrderRecu(BTNode *b) {
    if (b != NULL) {
        inOrderRecu(b->lchild);  //递归访问左子树
        cout << b->data << " ";  //访问根结点
        inOrderRecu(b->rchild);  //递归访问右子树
    }
}

/**
 * 中序遍历的非递归算法
 */
void inOrderUnre(BTNode *b) {
    BTNode *St[MaxSize], *p;
    int top = -1;
    if (b != NULL) {
        p = b;
        while (top > -1 || p != NULL) {
            while (p != NULL) {  //扫描结点p的所有左下结点并进栈
                top++;
                St[top] = p;
                p = p->lchild;
            }
            if (top > -1) {
                p = St[top];  //出栈结点p并访问
                top--;
                cout << p->data << " ";
                p = p->rchild;
            }
        }
        cout << endl;
    }
}

/**
 * 后序遍历的递归算法
 */
void postOrderRecu(BTNode *b) {
    if (b != NULL) {
        postOrderRecu(b->lchild);  //递归访问左子树
        postOrderRecu(b->rchild);  //递归访问右子树
        cout << b->data << " ";    //访问根结点
    }
}

/**
 * 后序遍历的非递归算法
 */
void postOrderUnre(BTNode *b) {
    BTNode *St[MaxSize];
    BTNode *p;
    int top = -1;  //栈指针置初值
    bool flag;
    if (b != NULL) {
        do {
            while (b != NULL) {  //将b结点的所有左下结点进栈
                top++;
                St[top] = b;
                b = b->lchild;
            }
            p = NULL;     // p指向当前结点的前一个已访问的结点
            flag = true;  // flag为真表示正在处理栈顶结点
            while (top != -1 && flag) {
                b = St[top];           //取出当前的栈顶元素
                if (b->rchild == p) {  //右子树不存在或已被访问，访问之
                    cout << b->data << " ";  //访问根结点
                    top--;
                    p = b;  // p指向被访问的结点
                } else {
                    b = b->rchild;  // b指向右子树
                    flag = false;   //表示当前不是处理栈顶结点
                }
            }

        } while (top != -1);
        cout << endl;
    }
}

/**
 * 层次遍历
 */
void travLevel(BTNode *b) {
    BTNode *Qu[MaxSize];  //定义环形队列
    int front, rear;      //定义队首和队为指针
    front = rear = 0;     //置队列为空
    if (b != NULL) {
        cout << b->data << " ";
    }
    rear++;
    Qu[rear] = b;            //根结点进队
    while (rear != front) {  //队列不为空
        front = (front + 1) % MaxSize;
        b = Qu[front];  //出队结点b
        if (b->lchild != NULL) {
            cout << b->lchild->data << " ";  //输出左孩子，并进队
            rear = (rear + 1) % MaxSize;
            Qu[rear] = b->lchild;
        }
        if (b->rchild != NULL) {
            cout << b->rchild->data << " ";  //输出右孩子，并进队
            rear = (rear + 1) % MaxSize;
            Qu[rear] = b->rchild;
        }
    }
    cout << endl;
}