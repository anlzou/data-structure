/***
 * @Date        : 2020-05-22 16:34:06
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-22 16:35:44
 * @FilePath    :
 * \data-structure\chapters\chapter07-trees-and-binary-trees\code\test.cpp
 * @Describe    :
 */
#include "exp7-1.cpp"

int main() {
    BTNode *b;
    BTNode *p, *lp, *rp;
    cout << "二叉树的基本运算如下:" << endl;
    cout << " (1)创建二叉树" << endl;
    CreateBTree(b, "A(B(D,E(H(J,K(L,M(,N))))),C(F,G(,I)))");

    cout << " (2)输出二叉树:";
    DispBTree(b);
    cout << endl;

    cout << " (3)H结点:";
    p = FindNode(b, 'H');
    if (p != NULL) {
        lp = LchildNode(p);
        if (lp != NULL) {
            cout << "左孩子为" << lp->data;
        } else {
            cout << "无左孩子";
        }
        rp = RchildNode(p);
        if (rp != NULL) {
            cout << "右孩子为" << rp->data;
        } else {
            cout << "无右孩子";
        }
    }
    cout << endl;

    cout << " (4)二叉树b的高度:" << BTHeight(b) << endl;
    cout << " (5)释放二叉树 b" << endl;
    DestroyBTree(b);

    return 0;
}