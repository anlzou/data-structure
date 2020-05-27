/***
 * @Date        : 2020-05-27 21:12:39
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-27 21:16:56
 * @FilePath    :
 * \data-structure\chapters\chapter03-stacks-and-queues\code\test2.cpp
 * @Describe    :
 */
#include "exp3-2.cpp"

int main() {
    ElemType e;
    LinkStNode *s;
    cout << "链栈 s 的基本运算如下：" << endl;
    cout << " (1)初始化栈 s" << endl;
    InitStack(s);

    cout << " (2)栈为" << (StackEmpty(s) ? "空" : "非空") << endl;
    cout << " (3)依次进栈元素 a,b,c,d,e" << endl;
    Push(s, 'a');
    Push(s, 'b');
    Push(s, 'c');
    Push(s, 'd');
    Push(s, 'e');

    cout << " (4)栈为" << (StackEmpty(s) ? "空" : "非空") << endl;
    cout << " (5)出栈序列:";
    while (!StackEmpty(s)) {
        Pop(s, e);
        cout << e << " ";
    }
    cout << endl;

    cout << " (6)栈为" << (StackEmpty(s) ? "空" : "非空") << endl;
    cout << " (7)释放栈" << endl;
    DestroyStack(s);
    return 0;
}