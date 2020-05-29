/***
 * @Date        : 2020-05-29 11:12:07
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-29 11:20:08
 * @FilePath    : \data-structure\chapters\chapter05-recursive\code\exp5-1.cpp
 * @Describe    :
 */
#include "./hearder/hearder.h"

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

int main() {
    HanoiRecu(3, 'A', 'B', 'C');
    return 0;
}