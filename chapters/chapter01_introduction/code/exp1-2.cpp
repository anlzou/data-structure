/***
 * @Date        : 2020-05-22 10:15:25
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-22 10:15:54
 * @FilePath    :
 * \data-structure\chapters\chapter01-introduction\code\exp1-2.cpp
 * @Describe    :
 */
#include <iostream>
#include <math.h>
#include <iomanip>  //setw()

using namespace std;

double log2(double n) {  //求logv2(n)
    return log10(n) / log10(2);
}

long exponext(int n) {  //求2^n
    long s = 1;
    for (int i = 1; i < n; i++) {
        s *= 2;
    }
    return s;
}

long factiorial(int n) {  //求n!
    long s = 1;
    for (int i = 1; i < n; i++) {
        s *= i;
    }
    return s;
}

void printTime(int n) {
    cout << setw(8) << "log2(n)" << setw(8) << "sqrt(n)" << setw(8) << "n"
         << setw(12) << "nlog2(n)" << setw(8) << "n^2" << setw(8) << "n^3"
         << setw(8) << "2^n" << setw(8) << "n!" << endl;
    cout << "=================================================================="
            "==="
         << endl;
    for (int i = 1; i < n; i++) {
        cout << setw(8) << setprecision(3) << log2(i);
        cout << setw(8) << setprecision(3) << log2(double(i));
        cout << setw(8) << setprecision(3) << i;
        cout << setw(8) << setprecision(3) << i * log2(double(i));
        cout << setw(8) << setprecision(3) << i * i;
        cout << setw(8) << setprecision(3) << i * i * i;
        cout << setw(8) << setprecision(3) << exponext(i);
        cout << setw(n) << factiorial(i) << endl;
    }
}

int main() {
    int n;
    cout << "Input n: ";
    cin >> n;
    printTime(n);
    return 0;
}