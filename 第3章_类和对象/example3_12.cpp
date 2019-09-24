//example_3_12.cpp：构造函数与析构函数的调用顺序
#include<iostream>
using namespace std;
#include"Date4.h"
int main()
{
	Date today;                    	//定义一个对象
	Date newday(2011,10,18);          	//再定义一个对象
	newday.Display( );                 //调用函数输出
	return 0;
}

