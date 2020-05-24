/***
 * @Date        : 2020-05-24 16:59:18
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-24 17:00:35
 * @FilePath    : \data-structure\chapters\chapter08-graph\code\exp8-1.cpp
 * @Describe    :
 */
#include <iostream>
#include <iomanip>
#include "./struct/struct.h"

using namespace std;

/*---------------------邻接矩阵的基本运算算法----------------------*/
/**
 * 创建图的邻接矩阵
 */
void CreateMat(MatGraph &g, int A[MAXV][MAXV], int v, int e) {
    int i, j;
    g.verticeNums = v;
    g.edgeNums = e;

    for (i = 0; i < g.verticeNums; i++) {
        for (j = 0; j < g.verticeNums; j++) {
            g.edges[i][j] = A[i][j];
        }
    }
}

/**
 * 输出邻接矩阵 g
 */
void DispMat(MatGraph g) {
    int i, j;
    for (i = 0; i < g.verticeNums; i++) {
        for (j = 0; j < g.verticeNums; j++) {
            if (g.edges[i][j] != INF) {
                cout << setw(4) << g.edges[i][j];
            } else {
                cout << setw(6) << "∞";
            }
        }
        cout << endl;
    }
}

/*--------------------邻接表的基本运算算法------------------*/
/**
 * 创建图的邻接表
 */
void CreateAdj(AdjGraph *&G, int A[MAXV][MAXV], int v, int e) {
    int i, j;
    ArcNode *p;
    G = (AdjGraph *)malloc(sizeof(AdjGraph));
    for (i = 0; i < v; i++) {
        G->adjlist[i].firstarc = NULL;
    }
    for (i = 0; i < v; i++) {
        for (j = v - 1; j >= 0; j--) {
            if (A[i][j] != 0 && A[i][j] != INF) {
                p = (ArcNode *)malloc(sizeof(ArcNode));
                p->adjvex = j;
                p->weight = A[i][j];
                p->nextarc = G->adjlist[i].firstarc;
                G->adjlist[i].firstarc = p;
            }
        }
        G->verticeNums = v;
        G->edgeNums = v;  // e?
    }
}

/**
 * 输出邻接表 G
 */
void DispAdj(AdjGraph *G) {
    ArcNode *p;
    for (int i = 0; i < G->verticeNums; i++) {
        p = G->adjlist[i].firstarc;
        cout << setw(4) << i << ":";
        while (p != NULL) {
            cout << setw(3) << p->adjvex << "[" << p->weight << "]"
                 << "→";
            p = p->nextarc;
        }
        cout << "^" << endl;
    }
}

/**
 * 销毁图的邻接表
 */
void DestroyAdj(AdjGraph *&G) {
    ArcNode *pre, *p;
    for (int i = 0; i < G->verticeNums; i++) {  //扫描所有的单链表
        pre = G->adjlist[i].firstarc;  // p指向第 i 个单链表的首结点
        if (pre != NULL) {
            p = pre->nextarc;
            while (p != NULL) {
                free(pre);  //释放第 i 个单链表的所有边结点
                pre = p;
                p = p->nextarc;
            }
            free(pre);
        }
    }
    free(G);  //释放头结点数组
}