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
    ElemType post[] = "DJLNMKHEBFIGCA";
    int n = 14;  //二叉树共有个节点

    cout << "先序序列:" << pre << endl;
    cout << "中序序列:" << in << endl << endl;

    cout << "构造一颗二叉树b:" << endl;
    b = createBTbyPreAndIn(pre, in, n);
    cout << "括号表示法:";
    DispBTree(b);
    cout << endl;

    cout << "凹入表示法:" << endl;
    dispBTree(b);
    cout << endl;

    ///////////////////////////////////////////

    cout << "中序序列:" << in << endl;
    cout << "后序序列:" << post << endl;

    cout << "构造一颗二叉树b:" << endl;
    b = createBTbyInAndPost(post, in, n);
    cout << "括号表示法:";
    DispBTree(b);
    cout << endl;

    cout << "凹入表示法:" << endl;
    dispBTree(b);
    cout << endl;
    DestroyBTree(b);  //销毁二叉树

    return 0;
}