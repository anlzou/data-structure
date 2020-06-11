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
SqString Concat(SqString s, SqString t) {
    SqString str;
    int i;
    str.length = s.length + t.length;

    for (i = 0; i < s.length; i++) {
        str.data[i] = s.data[i];
    }
    for (i = 0; i < t.length; i++) {
        str.data[s.length + i] = t.data[i];
    }
    return str;
}

/**
 * 返回由顺序串 str 的第 index 个字符开始的 len 个字符构成的新串
 */
SqString SubStr(SqString s, int index, int len) {
    SqString str;
    int k;
    str.length = 0;

    if (index <= 0 || index > s.length || len < 0 ||
        index + len - 1 > s.length) {
        return str;  //参数不正确时返回空串
    }
    for (k = index - 1; k < index + len - 1;
         k++) {  // str.data[index...index+lenght]->str
        str.data[k - index + 1] = s.data[k];
    }
    str.length = len;
    return str;
}

/**
 * 返回将顺序串 s2 插入到顺序串 s1 的第 index 个位置中构成的新串
 */
SqString InsStr(SqString s1, int index, SqString s2) {
    int j;
    SqString str;
    str.length = 0;

    if (index <= 0 || index > s1.length + 1) {  //参数不正确时返回空串
        return str;
    }
    for (j = 0; j < index - 1; j++) {  // s1.data[0...i-2]->str
        str.data[j] = s1.data[j];
    }
    for (j = 0; j < s2.length; j++) {  // s2.data[0...s2.length-1]->str
        str.data[index + j - 1] = s2.data[j];
    }
    for (j = index - 1; j < s1.length;
         j++) {  // s1.data[i-1...s1.length-1]->str
        str.data[s2.length + j] = s1.data[j];
    }
    str.length = s1.length + s2.length;
    return str;
}

/**
 * 返回删除顺序串 s 的第 index 个字符开始的 len 个字符构成的新串
 */
SqString DelStr(SqString s, int index, int len) {
    int k;
    SqString str;
    str.length = 0;

    if (index <= 0 || index > s.length ||
        index + len > s.length + 1) {  //参数不正确时返回空串
        return str;
    }
    for (k = 0; k < index - 1; k++) {  // s.data[0...index-2]->str
        str.data[k] = s.data[k];
    }
    for (k = index + len - 1; k < s.length;
         k++) {  // s.data[index+len-1...s.length-1]->str
        str.data[k - len] = s.data[k];
    }
    str.length = s.length - len;
    return str;
}

/**
 * 返回将顺序串 s 的第 index 个字符开始的 len 个字符替换成顺序串 t 构成的新串
 */
SqString RepStr(SqString s, int index, int len, SqString t) {
    int k;
    SqString str;
    str.length = 0;

    if (index <= 0 || index > s.length ||
        index + len - 1 > s.length) {  //参数不正确时返回空串
        return str;
    }
    for (k = 0; k < index - 1; k++) {  // s.data[0...index-2]->str
        str.data[k] = s.data[k];
    }
    for (k = 0; k < t.length; k++) {  // t.data[0...t.length-1]->str
        str.data[index + k - 1] = t.data[k];
    }
    for (k = index + len - 1; k < s.length;
         k++) {  // s.data[index+len-1...s.length-1]->str
        str.data[t.length + k - len] = s.data[k];
    }
    str.length = s.length - len + t.length;
    return str;
}

/**
 * 输出顺序串 s 的所有元素
 */
void DispStr(SqString s) {
    if (s.length > 0) {
        for (int i = 0; i < s.length; i++) {
            cout << s.data[i];
        }
        cout << endl;
    }
}
#ifndef RUN_MAIN
/* ======================Test======================== */
int main() {
    SqString s, s1, s2, s3, s4;
    char *str1 = (char *)"abcdefghijklmn";
    char *str2 = (char *)"123";

    cout << "顺序串的基本运算如下:" << endl;
    cout << " （1）建立串 s 和 串 s1" << endl;
    StrAssign(s, str1);
    StrAssign(s1, str2);

    cout << " （2）输出串 s:";
    DispStr(s);
    cout << " （3）串 s 的长度：" << StrLength(s) << endl;

    cout << " （4）在串 s 的第 9 个字符位置插入 s1 而产生串 s2" << endl;
    s2 = InsStr(s, 9, s1);
    cout << " （5）输出串 s2:";
    DispStr(s2);

    cout << " （6）删除串 s 第 2 个字符开始的 5 个字符而产生串 s2" << endl;
    s2 = DelStr(s, 2, 3);
    cout << " （7）输出串 s2:";
    DispStr(s2);

    cout << " （8）将串 s 第 2 个字符开始的 5 个字符替换成串 s1 而产生串 s2"
         << endl;
    s2 = RepStr(s, 2, 5, s1);
    cout << " （9）输出串 s2:";
    DispStr(s2);

    cout << " （10）提取串 s 和第 2 个字符开始的 10 个字符而产生串 s3" << endl;
    s3 = SubStr(s, 2, 10);
    cout << " （11）输出串 s3:";
    DispStr(s3);

    cout << " （12）将串 s1 和串 s2 连接起来而产生串 s4" << endl;
    s4 = Concat(s1, s2);
    cout << " （13）输出串 s3:";
    DispStr(s4);

    DestroyStr(s);
    DestroyStr(s1);
    DestroyStr(s2);

    return 0;
}

#endif