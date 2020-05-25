/***
 * @Date        : 2020-05-25 15:17:02
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-25 15:17:27
 * @FilePath    : \data-structure\chapters\chapter08-graph\code\exp8-2.cpp
 * @Describe    :
 */

#include "exp8-1.cpp"  //包含图的存储结构及基本运算算法
int visited[MAXV];  //全局数组；顶点的访问标记，（0/1：未访问/已访问）

/**
 * 递归深度优先遍历算法
 */
void DFSrecu(AdjGraph *G, int v) {
    ArcNode *p;
    cout << setw(4) << v;
    visited[v] = 1;              //访问顶点 v，并置为访问标记
    p = G->adjlist[v].firstarc;  // p 指向顶点 v 的第一条弧的弧头结点
    while (p != NULL) {
        if (visited[p->adjvex] == 0) {  //若 p->adjvex 顶点未访问，递归访问它
            DFSrecu(G, p->adjvex);
        }
        p = p->nextarc;  // p 指向顶点 v 的下一条弧的弧头结点
    }
}

/**
 * 非递归深度优先遍历算法
 */
void DFSunre(AdjGraph *G, int v) {
    ArcNode *p;
    int St[MAXV];
    int top = -1, w, x, i;
    for (i = 0; i < G->verticeNums; i++) {
        visited[i] = 0;  //顶点访问标志均置成 0
    }
    cout << setw(4) << v;  //访问顶点 v
    visited[v] = 1;        //置顶点 v 已访问
    top++;
    St[top] = v;                     //将顶点 v 进栈
    while (top > -1) {               //栈不空循环
        x = St[top];                 //取栈顶顶点 x 作为当前顶点
        p = G->adjlist[x].firstarc;  //找顶点 x 的第一个相邻点
        while (p != NULL) {
            w = p->adjvex;             // x 的相邻点为 w
            if (visited[w] == 0) {     //若顶点 w 没有访问
                cout << setw(4) << w;  //访问顶点 w
                visited[w] = 1;        //置顶点 w 已访问
                top++;
                St[top] = w;  //将顶点 w 进栈
                break;  //退出循环，即再处理栈顶的顶点（体现后进先出）
            }
            p = p->nextarc;  //找顶点 x 的下一个相邻点
        }
        if (p == NULL) {  //若顶点 x 再没有相邻点，将其退栈
            top--;
        }
    }
    cout << endl;
}

/**
 * 广度优先遍历算法
 */
void BFS(AdjGraph *G, int v) {
    ArcNode *p;
    int queue[MAXV], front = 0, rear = 0;  //定义环形队列并初始化
    int visited[MAXV];  //定义存放顶点的访问标志的数组
    int w, i;
    for (i = 0; i < G->verticeNums; i++) {
        visited[i] = 0;  //访问标志数组初始化
    }
    cout << setw(4) << v;      //输出被访问顶点的编号
    visited[v] = 1;            //置已访问标记
    rear = (rear) + 1 % MAXV;  //循环队列
    queue[rear] = v;           // v 进队
    while (front != rear) {    //若队列不为空时循环
        front = (front + 1) % MAXV;
        w = queue[front];            //出队并赋给 w
        p = G->adjlist[w].firstarc;  //找顶点 w 的第一个邻接点
        while (p != NULL) {
            if (visited[p->adjvex] == 0) {     //若相邻点未被访问
                cout << setw(4) << p->adjvex;  //访问相邻点
                visited[p->adjvex] = 1;    //置该顶点已被访问的标志
                rear = (rear + 1) % MAXV;  //该顶点进队
                queue[rear] = p->adjvex;
            }
            p = p->nextarc;  //查找下一个相邻点
        }
    }
    cout << endl;
}