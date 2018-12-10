//example6_10.h：将析构函数声明为虚函数
#include <iostream>
using namespace std;
class A
{
public:
    virtual  ~A();                		//将析构函数声明为虚函数
};
class B: public A                  		//定义公有派生类
{
public:
    B(int i);  
    ~B();                       		//派生类的析构函数自动为虚函数
private:
    char *buffer;
};
