//example5_06.cpp: 类间继承与派生时构造函数与析构函数的调用次序
#include <iostream>
using namespace std;

class Member
{

public:
    	Member( )
   	{
			cout << "constructing Member\n"; 
   	}
    	~Member( )
    	{
			cout << "destructing Member\n"; 
    	}
};

class Base
{
public:
    	Base( )
    	{
			cout << "constructing Base\n";  
    	}
    	~Base( )
    	{
			cout << "destructing Base\n"; 
    	}
};

class Derived: public Base                         //继承
{
private:
    	Member mem;                              //对象成员
public:
    	Derived( )
    	{
			cout << "constructing Derived\n"; 
    	}
    	~Derived( )
    	{
			cout << "destructing Derived\n";  
    	}
};

int main( )
{
		Derived obj;
		return 0;
}
