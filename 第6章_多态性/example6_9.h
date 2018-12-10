//example6_9.h: print()函数声明为虚函数
#include <iostream>
using namespace std;
class Base						//定义基类Base
{
public:
    Base(int x);				//基类的构造函数
	virtual void Print();       //定义函数Print()为虚函数
    int a;					   	//基类的公有数据成员a
};
class Derive:public Base	    //定义一个公有派生类Derive
{
public:
    int a;					  	//派生类中数据成员a与基类数据成员同名
    Derive(int x,int y);	 	//派生类的构造函数
    virtual void Print();       //此处的virtual可以省略
};