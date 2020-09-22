#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <cstdarg>
#include "swap.h"
using namespace std;

// 友元函数 能够调用类内部的外部函数   friend
class Box
{
    double width;

public:
    friend void printWidth(Box box);
    void setWidth(double wid);
};

// 成员函数定义
void Box::setWidth(double wid)
{
    width = wid;
}

// 请注意：printWidth() 不是任何类的成员函数
void printWidth(Box box)
{
    /* 因为 printWidth() 是 Box 的友元，它可以直接访问该类的任何成员 */
    cout << "Width of box : " << box.width << endl;
}

int main(int argc, char *argv[], char **env)
{
    Box box;

    // 使用成员函数设置宽度
    box.setWidth(10.0);

    // 使用友元函数输出宽度
    printWidth(box);

    system("pause");
    return 0;
}
