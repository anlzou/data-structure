/***
 * @Date        : 2020-05-21 17:37:52
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-21 17:38:34
 * @FilePath    :
 * \data-structure\chapters\chapter01-introduction\code\exp1-1.cpp
 * @Describe    :
 */
#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

long add1(long n) {
    long i, sum = 0;
    for (i = 1; i < n; i++) {
        sum += i;
    }
    return sum;
}

long add2(long n) {
    long sum = 0;
    return n * (n - 1) / 2;
}

void addTime(long n, int select) {
    clock_t time = clock();
    long sum;

    if (select == 1) {
        sum = add1(n);
        time = clock() - time;
    } else if (select == 2) {
        sum = add2(n);
        time = clock() - time;
    }
    cout << "function one ans:" << sum << endl;
    cout << "use time:" << time << endl;
}

int main() {
    int select;
    long n;

    cout << "input n:";
    cin >> n;
    cout << "select function(1,2):";
    cin >> select;

    addTime(n, select);
    return 0;
}