/***
 * @Date        : 2020-05-27 09:57:01
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-27 09:57:25
 * @FilePath    :
 * \data-structure\chapters\chapter03-stacks-and-queues\code\test1.cpp
 * @Describe    :
 */
#include "exp3-1.cpp"

int main() {
    ElemType e;
    SqStack *s;

    cout << "顺序栈 s 的基本运算如下:" << endl;
    cout << " (1)初始化栈 s" << endl;
    InitStack(s);

    cout << " (2)栈为 " << (StackEmpty(s) ? "空" : "非空") << endl;
    cout << " (3)依次进栈元素 a,b,c,d,e" << endl;
    Push(s, 'a');
    Push(s, 'b');
    Push(s, 'c');
    Push(s, 'd');
    Push(s, 'e');

    cout << " (4)栈为 " << (StackEmpty(s) ? "空" : "非空") << endl;
    cout << " (5)出栈序列：";
    while (!StackEmpty(s)) {
        Pop(s, e);
        cout << e << " ";
    }
    cout << endl;

    cout << " (6)栈为 " << (StackEmpty(s) ? "空" : "非空") << endl;
    cout << " (7)释放栈" << endl;
    DestroyStack(s);

    return 0;
}