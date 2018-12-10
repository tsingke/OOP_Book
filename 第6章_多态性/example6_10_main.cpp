//example6_10_main.cpp：析构函数声明为虚函数后的检验
#include "example6_10.h"
int main()
{
	A *a=new B(5000);
    delete a;
	return 0;
}
