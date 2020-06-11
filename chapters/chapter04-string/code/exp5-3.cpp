/***
 * @Date        : 2020-06-11 15:46:57
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-06-11 15:47:50
 * @FilePath    : \data-structure\chapters\chapter04-string\code\exp5-3.cpp
 * @Describe    :
 */
#define RUN_MAIN
#include "./exp5-1.cpp"
#include <iostream>

using namespace std;

/**
 * 由模式串 t 求出 next 值
 */
void GetNext(SqString t, int next[]) {
    int j, k;
    j = 0;
    k = -1;
    next[0] = -1;
    while (j < t.length - 1) {
        if (k == -1 || t.data[j] == t.data[k]) {  // k 为 -1 或比较的字符相等时
            j++;
            k++;
            next[j] = k;
        } else {
            k = next[k];
        }
    }
}

/**
 * 显示匹配状态
 */
void display(SqString s, SqString t, int i, int j) {
    int k;
    cout << "  ";
    for (k = 0; k < i; k++) {
        cout << "  ";
    }
    cout << "↓ i = " << i << ", j = " << j
         << endl;  //显示 i 指向的 s 串中的字符
    cout << "s:";
    for (k = 0; k < s.length; k++) {  //显示 s
        cout << s.data[k] << " ";
    }
    cout << endl;

    cout << "t:";
    for (k = 0; k < i - j; k++) {  //显示 t 前面的空格
        cout << "  ";
    }
    for (k = 0; k < t.length; k++) {  //显示 t
        cout << t.data[k] << " ";
    }
    cout << endl;
    for (k = 0; k < i - j; k++) {  //显示 t 前面的空格
        cout << "  ";
    }
    for (k = 0; k <= j; k++) {  //显示 j 前面的空格
        cout << "  ";
    }
    cout << "↑" << endl;  //显示 j 指向的 t 中的字符
}

/**
 * 利用 KMP 算法求 t 在 s 中出现的次数
 */
int Count(SqString s, SqString t) {
    int next[MaxSize], i = 0, j = 0, count = 0;
    GetNext(t, next);
    display(s, t, i, j);
    while (i < s.length && j < t.length) {
        if (j == -1 || s.data[i] == t.data[j]) {
            i++;
            j++;
        } else {
            j = next[j];
            display(s, t, i, j);
        }
        if (j == t.length) {
            display(s, t, i, j);
            cout << "\t 成功匹配 1 次" << endl;
            count++;
            j = 0;
        }
    }
    return count;
}

#ifdef RUN_MAIN
/*===================test====================*/
int main() {
    SqString s, t;
    char *strS = (char *)"aaabbdaabbde";
    char *strT = (char *)"aabbd";

    StrAssign(s, strS);
    StrAssign(t, strT);

    int sum = Count(s, t);
    cout << "t 在 s 中出现的次数：" << sum << endl;
    DestroyStr(s);
    DestroyStr(t);
    return 0;
}
#endif