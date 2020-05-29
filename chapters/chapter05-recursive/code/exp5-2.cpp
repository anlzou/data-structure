/***
 * @Date        : 2020-05-29 16:46:32
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-29 16:50:03
 * @FilePath    : \data-structure\chapters\chapter05-recursive\code\exp5-2.cpp
 * @Describe    :
 */
#include "./header/header.h"

/**
 * 求解从 (x, y) 到 (1, 1) 的路径条数
 */
int pathnum(int x, int y) {
    if (x < 1 || y < 1) {
        return 0;
    }
    if (x == 1 && y == 1) {
        return 1;
    }
    return pathnum(x - 1, y) + pathnum(x, y - 1);
}

/**
 * 输出从 (x, y) 到 (1, 1) 的所有路径
 */
void dispath(int x, int y, PathType path[], int d) {
    if (x < 1 || y < 1) {
        return;
    }
    if (x == 1 && y == 1) {  //找到目的地，输入一条路径
        d++;                 //将当前路径放入 path 中
        path[d].x = x;
        path[d].y = y;
        cout << "路径" << ++add << "：";

        for (int k = 0; k <= d; k++) {
            cout << "(" << path[k].x << ", " << path[k].y << ") ";
        }
        cout << endl;
    } else {
        d++;  //将当前位置放入 path 中
        path[d].x = x;
        path[d].y = y;
        dispath(x - 1, y, path, d);  //向下走一步
        dispath(x, y - 1, path, d);  //退回来，向右走一步
    }
}

/*=====================Test======================*/
int main() {
    int x = 2, y = 5;
    cout << "x = " << x << ", y = " << y << " 的路径条数：" << pathnum(x, y)
         << endl;

    PathType path[MaxSize];
    int d = -1;
    dispath(x, y, path, d);
    return 0;
}