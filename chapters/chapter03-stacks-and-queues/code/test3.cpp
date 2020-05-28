/***
 * @Date        : 2020-05-28 15:25:00
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-28 15:29:29
 * @FilePath    :
 * \data-structure\chapters\chapter03-stacks-and-queues\code\test3.cpp
 * @Describe    :
 */
#include "exp3-3.cpp"

int main() {
    ElemType e;
    SqQueue *q;
    cout << "环形队列基本运算如下：" << endl;
    cout << " (1)初始化队列 q" << endl;
    InitQueue(q);

    cout << " (2)依次进队列元素 a,b,c" << endl;
    enQueue(q, 'a');
    enQueue(q, 'b');
    enQueue(q, 'c');
    cout << " (3)队列为" << (QueueEmpty(q) ? "空" : "非空") << endl;

    deQueue(q, e);
    cout << " (4)出队一个元素" << e << endl;

    cout << " (5)依次进队元素 d,e,f" << endl;
    enQueue(q, 'd');
    enQueue(q, 'e');
    enQueue(q, 'f');

    cout << " (6)出队列序列：";
    while (!QueueEmpty(q)) {
        deQueue(q, e);
        cout << e << " ";
    }
    cout << endl;

    cout << " (7)释放队列" << endl;
    DestroyQueue(q);

    return 0;
}