//example6_10.cpp：各析构函数的实现
#include "example6_10.h"
A::~A() 
{
    cout<<"A::~A() is called\n";
}
B::B(int i)  
{ 
	buffer=new char[i];  
}
B::~B() 
{ 
	delete [] buffer;
	cout<<"B::~B() is called\n";
}
