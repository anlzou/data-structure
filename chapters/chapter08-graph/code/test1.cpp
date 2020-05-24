/***
 * @Date        : 2020-05-24 17:01:12
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-24 21:25:56
 * @FilePath    : \data-structure\chapters\chapter08-graph\code\test1.cpp
 * @Describe    :
 */

#include "exp8-1.cpp"

int main() {
    MatGraph g;
    AdjGraph *G;
    int A[MAXV][MAXV] = {{0, 5, INF, 7, INF, INF},   {INF, 0, 4, INF, INF, INF},
                         {8, INF, 0, INF, INF, 9},   {INF, INF, 5, 0, INF, 6},
                         {INF, INF, INF, 5, 0, INF}, {3, INF, INF, INF, 1, 0}};
    int v = 6, e = 10;  //图8.1中的数据

    CreateMat(g, A, v, e);
    cout << "(1)图G的邻接矩阵:" << endl;
    DispMat(g);

    CreateAdj(G, A, v, e);
    cout << "(2)图G的邻接表:" << endl;
    DispAdj(G);

    cout << "(3)销毁图G的邻接表" << endl;
    DestroyAdj(G);
    return 0;
}