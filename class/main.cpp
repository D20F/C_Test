#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>

#include <cstdarg>

#include "swap.h"
using namespace std;

class Screen
{
private:
    int data = 1;
    const int xx = 1;
    void parout(int val); // 私有函数只有类函数里面可以调用

public:
    Screen &operator+(const Screen &s);

public:
    static int yy;
    int xy = 1;
    void out();
    Screen(int val, int data); // 构造函数
    ~Screen();                 // 析构函数
};

Screen::Screen(int val, int data = 10) // 构造函数 初始化
{
    data = data;
    yy++; // 来更改类的静态成员
    cout << yy <<endl;
}
Screen::~Screen() // 析构函数 删除释放对象调用
{
    cout << "end" << endl;
}
void Screen::out()
{
    cout << 3231 << endl;
    parout(1);
}
void Screen::parout(int val)
{
    cout << val << endl;
}

Screen& Screen::operator+(const Screen &s)
{
    Screen sc(1);
    sc.xy = this->xy + s.xy;
    return *this;
}

// 子类 继承
class rect : public Screen
{
public:
    int rect_data;
    void getArea();
    rect(int val) : Screen(400) //子类构造函数 :调用父类构造函数初始化
    {
        rect_data = val;
        cout << rect_data << endl;
    }
};
void rect::getArea()
{
    out();
}

// 初始化类的静态成员    类的静态成员所有实例化类公用一个
int Screen::yy = 1;

int main(int argc, char *argv[], char **env)
{
    Screen ob(1);
    Screen oc(1);
    Screen od(1);
    
    // od = ob + oc;


    // rect oc(400);

    // Screen *ob2 = new Screen(10);
    // ->是获取结构体指针的对象
    // ob2 -> out();

    system("pause");
    return 0;
}
