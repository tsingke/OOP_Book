/*---------------------------------------------------------*
   //example2_10.cpp：引用的声明及使用示例
*---------------------------------------------------------*/
#include <iostream>

using namespace std;

int x = 5, y = 10;
int &r = x;                                     	//定义一个引用r作为变量x的别名

void print()                                    	//定义一个专门用于输出的函数 
{
	cout << "x=" << x << " y=" << y << " r=" << r << endl;  	//输出x、y、r的值
	cout << "Address of x " << &x << endl;        	          //输出变量x的内存地址
	cout << "Address of y " << &y << endl;          	      //输出变量y的内存地址
	cout << "Address of r " << &r << endl;       		      //输出引用r的内存地址
}

int main()
{
	print();                                   	//第1次调用输出函数
	
	r = y;                                     	//相当于x=y，将y的值赋给x
											//而不是r改变为变量y的别名
	y = 100;                                  	//对y重新赋值不会影响引用r的值
	print();                                  	//再次调用输出函数
	x = 200;                                     //对x重新赋值, r随之改变,不会影响变量y的值
	print();                                  	//再次调用输出函数
	return 0;
}
