/***
 * @Date        : 2020-05-23 11:17:12
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-23 11:17:38
 * @FilePath    :
 * \data-structure\chapters\chapter07-trees-and-binary-trees\code\test3.cpp
 * @Describe    :
 */
#include "exp7-3.cpp"
int main() {
    BTNode *b;
    ElemType pre[] = "ABDEHJKLMNCFGI";
    ElemType in[] = "DBJHLKMNEAFCGI";
    ElemType post[] = "KJLNMHEBFIGCA";
    int n = 14;  //二叉树共有个节点

    b = createBTbyPreAndIn(pre, in, n);
    cout << "先序序列:" << pre << endl;
    cout << "中序序列:" << in << endl << endl;

    cout << "构造一颗二叉树b:" << endl;
    cout << "括号表示法:";
    DispBTree(b);
    cout << endl;

    // cout << "凹入表示法:" << dispBTree(b) << endl;
    return 0;
}