//example5_05.cpp:多重继承示例
#include <iostream>
using namespace std;

class BaseA
{
private:
		int a1;
protected:
		int a2;
public:
		int a3;
		void setA(int x, int y, int z)
		{
			a1 = x;
			a2 = y;
			a3 = z;
		}
		void showA( )
		{
			cout << " a1 = " << a1 ;
			cout << " a2 = " << a2 ;
			cout << " a3 = " << a3 << endl;
		}
};

class BaseB
{
private:
		int b1;
protected:
		int b2;
public:
		int b3;
		void setB(int x, int y, int z)
		{
			b1 = x;
			b2 = y;
			b3 = z;
		}
		void showB( )
		{
			cout << " b1 = " << b1 ;
			cout << " b2 = " << b2 ;
			cout << " b3 = " << b3 << endl;
		}
};

class BaseC
{
private:
		int c1;
protected:
		int c2;
public:
		int c3;
		void setC(int x, int y, int z)
		{
			c1 = x;
			c2 = y;
			c3 = z;
		}
		void showC( )
		{
			cout << " c1 = " << c1 ;
			cout << " c2 = " << c2 ;
			cout << " c3 = " << c3 << endl;
		}
};

class Derived: public BaseA, protected BaseB, private BaseC
{
private:
		int d1;
protected:
		int d2;
public:
		int d3;
		void setD(int x, int y, int z)
		{
			d1 = x;
			d2 = y;
			d3 = z;
		}
		void showD( )
		{
			cout << " d1 = " << d1 ;
			cout << " d2 = " << d2 ;
			cout << " d3 = " << d3 << endl;
		}
		void setall(int x0, int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int x9, int x10, int x11 )
		{
			setA(x0, x1, x2);
			setB(x3, x4, x5);
			setC(x6, x7, x8);
			setD(x9, x10, x11);
		}
		void showall( )
		{
			showA( );
			showB( );
			showC( );
			showD( );
		}
};

int main( )
{
		Derived obj;
		obj.setall(10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120);
//	obj.showA( );			// 可以通过obj访问
//	obj.showB( );			// showB( )已成为protected成员，无法通过obj访问
//	obj.showC( );			// showC( )已成为private成员，无法通过obj访问
//	obj.showD( );			// 可以通过obj访问
		obj.showall();
		return 0;
}
