//example5_08.cpp:  多重继承下构造函数与析构函数的调用
#include <iostream>
using namespace std;

class Grand
{
private:
		int a;
public:
		Grand(int n): a(n)
		{
			cout << "constructing Grand, a = " << a << endl;
		}
		~Grand( )
		{
			cout << "destructing Grand" << endl;
		}
};

class Father: public Grand
{
private:
		int b;
public:
		Father(int n1,int n2): Grand(n2), b(n1)
		{
			cout << "constructing Father, b = " << b << endl;
		};
	~Father( )
		{
			cout << "destructing Father" << endl;
		}
};

class Mother
{
private:
		int c;
public:
		Mother(int n): c(n)
		{
			cout << "constructing Mother, c = " << c << endl;
		}
		~Mother( )
		{
			cout << "destructing Mother" << endl;
		}
};

class Son: public Father, public Mother
{
private:
		int d;
public:
		Son(int n1, int n2, int n3, int n4): Mother(n2), Father(n3, n4), d(n1)
		{
			cout << "constructing Son, d = " << d << endl;
		}
		~Son( )
		{
			cout << "destructing Son" << endl;
		}
};

int main( )
{
		Son s(1,2,3,4);
		return 0;
}
