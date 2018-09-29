//example2_02_method2.cpp：两种符号常量定义的区别，方法2：用const定义符号常量

#include <iostream>

using namespace std;

int main()
{
	int x = 5;

	const int T1 = x + x;      	//行5，用const定义符号常量T1

	const int T2 = T1 - T1;   	//行6，用const定义符号常量T2

	cout << "T1=" << T1 << "  T2=" << T2 << endl;

	return 0;
}
