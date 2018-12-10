//example6_9.cpp: 各类成员函数的实现
#include "example6_9.h"
Base::Base(int x)					//基类的构造函数
{
	a=x; 
}
void Base::Print()        	//定义函数Print()为虚函数
{ 
	cout<<"Base::a="<<a<<endl; 
}
Derive::Derive(int x,int y):Base(x)	//派生类的构造函数
{
	a=y;					//派生类函数中直接访问本类的同名成员
    Base::a*=2;			  	//对继承的同名数据成员修改
}
void Derive::Print()    //此处的virtual可以省略
{
	Base::Print();            	//访问基类的同名成员前面需缀上Base::
    cout<<"Derived::a="<<a<<endl;//访问本类中的同名成员
}
