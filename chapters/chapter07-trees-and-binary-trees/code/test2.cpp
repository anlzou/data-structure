/***
 * @Date        : 2020-05-22 20:27:53
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-22 20:28:27
 * @FilePath    :
 * \data-structure\chapters\chapter07-trees-and-binary-trees\code\test2.cpp
 * @Describe    :
 */
#include "exp7-2.cpp"
#include <iomanip>

int main() {
    BTNode *b;

    CreateBTree(b, "A(B(D,E(H(J,K(L,M(,N))))),C(F,G(,I)))");
    cout << setw(20) << "二叉树b:";
    DispBTree(b);
    cout << endl << endl;

    cout << setw(24) << "先序递归遍历序列:";
    preOrderRecu(b);
    cout << endl;

    cout << setw(24) << "先序递非归遍历序列:";
    preOrderUNre(b);
    cout << endl;

    cout << setw(24) << "中序递归遍历序列:";
    inOrderRecu(b);
    cout << endl;

    cout << setw(24) << "中序非递归遍历序列:";
    inOrderUnre(b);
    cout << endl;

    cout << setw(24) << "后序递归遍历序列:";
    postOrderRecu(b);
    cout << endl;

    cout << setw(24) << "后序非递归遍历序列:";
    postOrderUnre(b);
    cout << endl;

    cout << setw(24) << "层次遍历序列:";
    travLevel(b);
    cout << endl;

    return 0;
}