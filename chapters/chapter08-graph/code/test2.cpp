/***
 * @Date        : 2020-05-25 23:11:06
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-25 23:11:30
 * @FilePath    : \data-structure\chapters\chapter08-graph\code\test2.cpp
 * @Describe    :
 */
#include "exp8-2.cpp"

int main() {
    AdjGraph *G;
    int A[MAXV][MAXV] = {{0, 5, INF, 7, INF, INF},   {INF, 0, 4, INF, INF, INF},
                         {8, INF, 0, INF, INF, 9},   {INF, INF, 5, 0, INF, 6},
                         {INF, INF, INF, 5, 0, INF}, {3, INF, INF, INF, 1, 0}};
    int v = 6, e = 10;  //图8.1中的数据

    CreateAdj(G, A, v, e);
    cout << "图 G 的邻接表:" << endl;
    DispAdj(G);

    cout << "从顶点 0 开始的 DFS(递归算法):" << endl;
    DFSrecu(G, 0);
    cout << endl;

    cout << "从顶点 0 开始的 DFS(非递归算法):" << endl;
    DFSunre(G, 0);

    cout << "从顶点 0 开始的 BFS:" << endl;
    BFS(G, 0);
    DestroyAdj(G);

    return 0;
}