//example5_09.cpp:  派生类与基类有同名成员
#include <iostream>
using namespace std;

class Base
{
public:
		Base(int x)
		{
			a = x;
    	}
    	void Print( )
    	{
			cout << "Base::a = " << a << endl; 
    	}
   	int a;
};

class Derived: public Base
{
public:
    	int a;
    	Derived(int x, int y): Base(x)	
    	{
			a = y;		    	//派生类内部直接访问的是新增成员a
       	Base::a *= 2 ;  	//访问基类的同名成员要使用Base::
    	}
    	void Print( )
    	{
			Base::Print( );  	//访问基类的同名成员要使用Base::
        	cout << "Derived::a = " << a << endl;
    	}
};

void f1(Base &obj)
{
		obj.Print( );    
}

void f2(Derived &obj)
{
		obj.Print( );    
}

int main( )
{
    	Derived d(200,300) ; 
 
		d.Print( );		    	//调用派生类中新增的同名函数
    	d.a = 400;		    	//改变派生类中新增的同名数据成员
    	d.Base::a = 500;     	//改变基类中的同名数据成员
    	d.Base::Print( ) ;    	//调用基类的同名函数
 
		Base *pb; 
    	pb = &d;
    	pb -> Print( );       	//基类指针调用的是基类的Print( )函数

		f1(d);				//基类引用调用的是基类的Print( )函数

		Derived *pd;
		pd = &d;
		pd -> Print( );		//派生类指针调用的是派生类的Print( )函数 
	
		f2(d);				//派生类引用调用的是派生类的Print( )函数

		return 0;
}
