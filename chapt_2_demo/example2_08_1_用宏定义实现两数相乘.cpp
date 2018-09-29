
/*---------------------------------------------------------*
   example2_08_1.cpp: 用宏定义实现两数相乘
*---------------------------------------------------------*/
#include <iostream>

using namespace std;

#define  Multiply(x,y)  x*y   //注意:此处x和y两边未加括号

int  main()
{
	int a = Multiply(3 + 4, 2 + 3);  //展开后为:int a=3+4*2+3

	cout << "a=" << a << endl;

	return 0;
}
