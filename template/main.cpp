#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>

#include <cstdarg>

#include "swap.h"
using namespace std;

// 普通的模板函数 无返回
template <typename T> 
void fun(T a)
{
    cout << "void fun(T1 a)" << endl;
}

// 返回的值也可以自适应 
template <typename T>
T funs(T a)
{
    cout << "void funs(T1 a)" << endl;
    return a;
}

// 两个参数呢
template <typename T1, typename T2>
void fun(T1 a, T2 b)
{
    cout << "void fun(T1 a, T2 b)" << endl;
}

// 普通的函数
void fun(int a, float b)
{
    cout << "void fun(int a, float b)" << endl;
}

int main()
{
    int a = 0;
    float b = 0.0;
    funs(a);
    fun(a);
    fun(a, b);   //普通函数void fun(int a, float b)已经能完美匹配，于是调用普通函数
    fun(b, a);   //这个调用，函数模板有更好的匹配，于是调用函数模板
    fun<>(a, b); //限定只使用函数模板



    system("pause");
    return 0;
}
