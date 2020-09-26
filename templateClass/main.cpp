#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <cstdarg>
#include "swap.h"
using namespace std;

// 类模板友元讲的很好
// https://blog.csdn.net/chenkaixin_1024/article/details/70741674

void clg(int val)
{
    cout << val << endl;
}
void clg(string val)
{
    cout << val << endl;
}

// 类模板  可以使用缺省实参  动态类型或者初始数据
template <class T1, int T2, int T3 = 0>
class Stack
{

private:
    T1 num1;
    int num2;
    int num3;

public:
    static int num4;
    void out();
    Stack();
    friend void fout();
};

// 类模板函数 每个前面都必须声明函数参与的模板
template <class T1, int T2, int T3>
void Stack<T1, T2, T3>::out()
{
    ++num4;
    clg(num4);
}

// 类构造函数
template <class T1, int T2, int T3>
Stack<T1, T2, T3>::Stack()
{
    num3 = T3;
    // clg(num1);
    // clg(num2);
    // clg(num3);
}

// 类模板友元函数
void fout()
{
    Stack<int, 111, 222> s; //初始化一个实例然后来调用
    clg(s.num3);
}

// 初始化 类模板内的静态成员   静态成员在类模板前也需要先声明类模板
// 类模板内的静态成员 不会和其他类共享
template <class T1, int T2, int T3>
int Stack<T1,T2,T3>::num4 = 1;

int main()
{
    Stack<int, 111, 222> s;
    Stack<int, 111, 333> ss;

    s.out();

    system("pause");
    return 0;
}