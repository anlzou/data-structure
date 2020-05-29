/***
 * @Date        : 2020-05-29 11:12:07
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-29 11:20:08
 * @FilePath    : \data-structure\chapters\chapter05-recursive\code\exp5-1.cpp
 * @Describe    :
 */
#include "./header/header.h"

/**
 * 求解 Hanoi 问题的递归算法
 */
void HanoiRecu(int n, char a, char b, char c) {
    if (n == 1) {
        cout << "\t将第 " << n << " 个盘片从 " << a << " 移动到 " << c << endl;
    } else {
        HanoiRecu(n - 1, a, c, b);
        cout << "\t将第 " << n << " 个盘片从 " << a << " 移动到 " << c << endl;
        HanoiRecu(n - 1, b, a, c);
    }
}

/**
 * 求解 Hanoi 问题的非递归算法
 */
void HanoiUnre(int n, char x, char y, char z) {
    StackType *st;  //定义顺序栈指针
    ElemType e, e1, e2, e3;
    if (n <= 0) {
        return;  //返回错误时直接返回
    }
    InitStack(st);  //初始化栈

    e.n = n;
    e.x = x;
    e.y = y;
    e.z = z;
    e.flag = false;
    Push(st, e);  //元素 e 进栈

    while (!StackEmpty(st)) {   //栈不空循环
        Pop(st, e);             //出栈元素 e
        if (e.flag == false) {  //当不能直接移动盘片时
            e1.n = e.n - 1;
            e1.x = e.y;
            e1.y = e.x;
            e1.z = e.z;
            if (e1.n == 1) {  //只有一个盘片时可直接移动
                e1.flag = true;
            } else {  //有一个以上盘片时不能直接移动
                e1.flag = false;
            }
            Push(st, e1);  //处理 Hanoi(n-1, y, x, z)步骤

            e2.n = e.n;
            e2.x = e.x;
            e2.y = e.y;
            e2.z = e.z;
            e2.flag = true;
            Push(st, e2);  //处理 move(n, x, z)步骤

            e3.n = e.n - 1;
            e3.x = e.x;
            e3.y = e.z;
            e3.z = e.y;
            if (e3.n == 1) {  //只有一个盘片时可直接移动
                e3.flag = true;
            } else {
                e3.flag = false;  //有一个以上盘片时不能直接移动
            }
            Push(st, e3);  //处理 Hanoi(n-1, x, z, y)步骤
        } else {           //当可以直接移动时
            cout << "\t将第 " << e.n << " 个盘片从 " << e.x << " 移动到 " << e.z
                 << endl;
        }
    }
    DestroyStack(st);  //销毁栈
}

/* ======================Test======================== */
int main() {
    cout << "递归方法：" << endl;
    HanoiRecu(3, 'A', 'B', 'C');
    cout << "=========================================" << endl;
    cout << "非递归方法：" << endl;
    HanoiUnre(3, 'X', 'Y', 'Z');
    return 0;
}