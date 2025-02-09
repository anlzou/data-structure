<!--
 * @Date        : 2020-05-02 20:37:47
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-06-18 23:10:12
 * @FilePath    : \data-structure\chapters\chapter04-string\test-3.md
 * @Describe    : 
 -->
## 题目地址
5.1 综合性实验

## 题目描述
实验题 1：利用 KMP 算法求子串在主串中出现的次数

目的：

深入掌握 KMP算法的应用。

内容：
```
编写一个程序，利用 KMP 算法求子串 t 在主串 s 中出现的次数，
并以 s = "aaabbdaabbde"，t = "aabbd" 为例，显示匹配过程。
```

函数：
```cpp
GetNext(SqString t, int next[])                 //由模式 t 求出 next 串数值值

display(SqString s, SqString t, int i, int j)   //显示匹配状态信息

Count(SqString s, SqString t)                   //利用 KMP 算法求 t 在 s 中出现的次数
```

## 思路
- [漫画：什么是KMP算法？](https://mp.weixin.qq.com/s/3gYbmAAFh08BQmT-9quItQ)
- [字符串匹配的KMP算法-阮一峰](http://www.ruanyifeng.com/blog/2013/05/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm.html)


## 关键点
- next[]数组，作用是指明当前位置不匹配则下个比较的位置（主串与模式串比较的位置叫当前位置）
```
假设
主串为：GTGTGAGCTGGTGTGTGCFAA；长度为：21
模式串为：GTGTGCF；长度为：7
next[]数组的生成只与模式串相关，next[7] = {0,0,0,1,2,3,0}，不取next[0]

分析
模式串最长公共前后缀；小于子串，否则为0；小于模式串
子串G的最长公共前后缀为0，前缀为G，下标[0]，后缀为G，下标[0]，前后缀等于子串长度
子串GT的最长公共前后缀为0，前缀为G，下标[0]，后缀为T，下标[1]，前后缀不相等，没有最长公共前后缀
子串GTG的最长公共前后缀为1，前缀为G，下标[0]，后缀为G，下标[2]
子串GTGT的最长公共前后缀为2，前缀为GT，下标[0-1]，后缀为GT，下标[2-3]
子串GTGTG的最长公共前后缀为3，前缀为GTG，下标[0-2]，后缀为GTG，下标[2-4]
子串GTGTGC的最长公共前后缀为0，前缀为G，下标[0]，后缀为C，下标[5]，前后缀不相等，没有最长公共前后缀
```

## 代码
>- [exp5-3.cpp](./code/exp5-3.cpp)
>> - [header.h](./code/header/header.h)
>> - [exp5-1.cpp](./code/exp5-1.cpp)

## 结果
```
  ↓ i = 0, j = 0
s:a a a b b d a a b b d e
t:a a b b d
  ↑
      ↓ i = 2, j = 1
s:a a a b b d a a b b d e
t:  a a b b d
      ↑
              ↓ i = 6, j = 5
s:a a a b b d a a b b d e
t:  a a b b d
              ↑
         成功匹配 1 次
                        ↓ i = 11, j = 5
s:a a a b b d a a b b d e
t:            a a b b d
                        ↑
         成功匹配 1 次
                        ↓ i = 11, j = -1
s:a a a b b d a a b b d e
t:                        a a b b d
                        ↑
t 在 s 中出现的次数：2
```

## 补充
漫画：几种字符串匹配算法
- [BF算法和RK算法](https://mp.weixin.qq.com/s?__biz=MzIxMjE5MTE1Nw==&mid=2653201142&idx=1&sn=8cac1bbcfdb94474f0cc3855705cc253&chksm=8c99d02cbbee593ae0fb7fa1c8c610e7c1f57009e0c0ecbe19d07f60951912c915bce65c8619&scene=21#wechat_redirect)
- [BM算法](https://mp.weixin.qq.com/s?__biz=MzIxMjE5MTE1Nw==&mid=2653201540&idx=1&sn=645a3f5f3fbf30be4f6d1c23eebdf0e7&chksm=8c99d65ebbee5f482dd68efecf7b2a23e98b238ba04c1d3a6aed6c12cab76d4650c3bef5ea00&scene=21#wechat_redirect)

## 复杂度分析

- 时间复杂度：O( )
- 空间复杂度：O( )