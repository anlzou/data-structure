/***
 * @Date        : 2020-06-08 21:49:30
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-06-08 22:43:48
 * @FilePath    : \data-structure\chapters\chapter04-string\code\exp5-1.cpp
 * @Describe    :
 */

#include "./header/header.h"

/**
 * 由串常量 cstr 创建顺序串 str
 * 注意：未做越界处理！
 */
void StrAssign(SqString &str, char cstr[]) {  // str 为引用类型参数
    int i;
    for (i = 0; cstr[i] != '\0'; i++) {
        str.data[i] = cstr[i];
    }
    str.length = i;  //设置串的长度
}

/**
 * 销毁串
 * 由于顺序串没有使用到指针，所以它的存储空间由操作系统管理，
 * 即操作系统分配其存储空间，并在超出作业域的时释放其存储空间，
 * 所以这里的销毁顺序串运算不包含任何操作。
 */
void DestroyStr(SqString &str) {}

/**
 * 将顺序串 t 复制到串 str
 */
void StrCopy(SqString &str, SqString t) {  // str 为引用类型参数
    for (int i = 0; i < t.length; i++) {   //复制 t 的所有字符
        str.data[i] = t.data[i];
    }
    str.length = t.length;  //设置串 s 的长度
}

/**
 * 判断两个顺序串 s 和 t 是否相同
 */
bool StrEqual(SqString str, SqString t) {
    bool same = true;
    int i;
    if (str.length != t.length) {  //长度不相等时返回 0
        same = false;
    } else {
        for (i = 0; i < str.length; i++) {
            if (str.data[i] != t.data[i]) {  //有一个对应字符不相同时返回假 0
                same = false;
                break;
            }
        }
    }
    return same;
}

/**
 * 求顺序串 str 的长度
 */
int StrLength(SqString str) { return str.length; }

/**
 * 返回将顺序串 t 连接到顺序串 s 之后构成的新串
 * 注意：未做越界处理！
 */
SqString Concat(SqString str, SqString t) {
    SqString str;
    int i;
    str.length = str.length + t.length;
    for (i = 0; i < str.length; i++) {
        str.data[i] = str.data[i];
    }
    for (i = 0; i < t.length; i++) {
        str.data[str.length + i] = t.data[i];
    }
    return str;
}

/**
 * 返回由顺序串 str 的第 i 个字符开始的 j 个字符构成的新串
 */
SqString SubStr(SqString s, int index, int length) {
    SqString str;
    int k;
    str.length = 0;
    if (index <= 0 || index > str.length || length < 0 ||
        index + length - 1 > str.length) {
        return str;  //参数不正确时返回空串
    }
    for (k = index - 1; k < index + length + 1;
         k++) {  // str.data[index...index+lenght]->str
        str.data[k - index + 1] = str.data[k];
    }
    str.length = index;
    return str;
}
/* ======================Test======================== */
int main() { return 0; }