#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <string>
#include <limits>

using namespace std;

// 虚函数保证即使是指向A父类，也可以调用子类的同名函数
// 如果没有虚函数,指向是谁的函数,就调用谁
class person
{
    int x;

public:
    person()
    {
        x = 1;
    }

};

int main()
{

    A a;

    system("pause");
    return 0;
}
