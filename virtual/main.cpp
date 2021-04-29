#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


// 虚函数保证即使是指向A父类，也可以调用子类的同名函数
// 如果没有虚函数,指向是谁的函数,就调用谁
class A  
{  
public:  
    virtual void foo()  
    {  
        cout<<"A::foo() is called"<<endl;  
    }  
};  
class B:public A  
{  
public:  
    void foo()  
    {  
        cout<<"B::foo() is called"<<endl;  
    }  
};  


int main()
{

    A *a = new B();  
    a->foo(); 

    system("pause");
    return 0;
}
