#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>

#include <cstdarg>

#include "swap.h"
using namespace std;

class screen
{
private:
    int data = 1;
    const int xx = 1;
    void parout(int val); // 私有函数只有类函数里面可以调用
public:
    static int yy;
    void out();
    screen(int val, int data); // 构造函数
    ~screen();                 // 析构函数
};

screen::screen(int val, int data = 10) // 构造函数 初始化
{
    data = data;
    yy++; // 来更改类的静态成员
}
screen::~screen() // 析构函数 删除释放对象调用
{
    cout << "end" << endl;
}
void screen::out()
{
    cout << 3231 << endl;
    parout(1);
}
void screen::parout(int val)
{
    cout << val << endl;
}

// 子类 继承
class rect : public screen
{
public:
    int rect_data;
    void getArea();
    rect(int val) : screen(400) //子类构造函数 :调用父类构造函数初始化
    {
        rect_data = val;
        cout << rect_data <<endl;
    }
};
void rect::getArea()
{
    out();
}

// 初始化类的静态成员    类的静态成员所有实例化类公用一个
int screen::yy = 1;

int main(int argc, char *argv[], char **env)
{
    screen ob(1);
    ob.out();

    rect oc(400);

    // screen *ob2 = new screen(10);
    // ->是获取结构体指针的对象
    // ob2 -> out();
    // cout << screen::yy << endl;

    system("pause");
    return 0;
}
