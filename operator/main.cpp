#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <string>
#include <limits>

using namespace std;

class Time
{
private:
    int hours;
    int minutes;

public:
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    // 显示时间的方法
    void displayTime()
    {
        cout << "H: " << hours << " M:" << minutes << endl;
    }
    // 重载前缀递增运算符（ ++ ）
    Time operator++()
    {
        ++this->minutes;
        ++this->hours;
        return *this;
    }
    // 重载后缀递增运算符（ ++ ）后缀增加int形参来识别为后缀运算符
    Time operator++(int)
    {
        ++this->minutes;
        ++this->hours;
        return *this;
    }
    // 重载前缀递增运算符（ -- ）
    Time operator--()
    {
        --this->minutes;
        --this->hours;
        return *this;
    }
    // 重载后缀递增运算符（ -- ）后缀增加int形参来识别为后缀运算符
    Time operator--(int)
    {
        --this->minutes;
        --this->hours;
        return *this;
    }

    // 重载后缀递增运算符（ - ）
    Time operator-(Time T)
    {
        // 一元运算符重载  实际是 - 左边为this 右边为参数 只可返回time类型 直接用this代替也可 返回的值直接被接受类直接重新被赋值
        T.displayTime();
        this->displayTime();
        return *this;
    }
    // 重载后缀递增运算符（ + ）
    Time operator+(Time T)
    {
        // + 和 - 差不多
        T.displayTime();
        this->displayTime();
        return *this;
    }
    // 重载运算符 =
    void operator=(Time T)
    {
        cout << 11111111111 << endl;
    }

    // 类外重载运算符 
    // friend bool operator < (const Time& t1, const Time&t2);

    // bool operator < (const Time& t);
};

    // bool Time::operator<(const Time& t)
    // {
    //     return this->hours < t.hours
    //      || (this->hours == t.hours && this->minutes < t.minutes);
    // }

    // // 因为是  重载 <
    // bool operator < (const Time& t1, const Time&t2)
    // {
     
    //     return false;
    // }
int main()
{
    Time T1(1, 2), T2(10, 20), T3(100, 200);


    T2.displayTime();
    T3.displayTime();

    system("pause");
    return 0;
}
