//example6_9_main.cpp: 对虚函数的使用测试
#include "example6_9.h"
void f(Base &bb)                //定义一个函数以基类的引用作形式参数
{
	bb.Print();  
}                            	//通过引用调用Print()函数     
int  main()
{
	Base b(100),*ps;			//定义一个基类对象和一个基类指针
    Derive d(200,300);			//定义一个派生类对象
    ps=&b;                  	//将指针ps指向基类对象
    ps->Print();                //调用基类的同名虚函数	
    ps=&d;                    	//将指针ps指向派生类对象
    ps->Print();                //调用派生类的同名虚函数	
    f(b);                       //调用基类的Print()函数  
    f(d);                       //调用派生类的Print()函数
	return 0;
}
