/***
 * @Date        : 2020-05-24 16:30:54
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-24 16:31:26
 * @FilePath    : \data-structure\chapters\chapter08-graph\code\struct\struct.h
 * @Describe    :
 */
#define MAXV 32767      //定义∞
typedef char InfoType;  //存储类型

/**
 * 以下定义邻接矩阵类型
 */
/* 顶点类型 */
typedef struct {
    int no;         //顶点编号
    InfoType info;  //顶点其他信息
} VertexType;

/* 完整的图邻接矩阵类型 */
typedef struct {
    int edges[MAXV][MAXV];  //邻接矩阵数组
    int n, e;               //顶点数、边数
    VertexType vexs[MAXV];  //存放顶点信息
} MatGraph;

/* 边结点的类型 */
typedef struct ANode {
    int adjvex;             //该边的邻接点编号
    struct ANode* nextarc;  //指向下一条边的指针
    int weight;  //该边的相关信息，如权值（用整型表示）
} ArcNode;

/* 邻接表头结点类型*/
typedef struct Vnode {
    InfoType info;      //顶点其他信息
    int count;          //存放顶点入度，仅仅用于拓扑排序
    ArcNode* firstarc;  //指向第一条边
} Vnode;

/* 完整的图邻接表类型*/
typedef struct {
    Vnode adjlist[MAXV];  //邻接表头结点数组
    int n, e;             //图中顶点数 n 和边数 e
} AdjGraph;
