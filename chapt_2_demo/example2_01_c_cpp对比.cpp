/*C++源程序example2_01.cpp，与example2_01.c实现同样的功能*/

#include <iostream>
using namespace std;

int main()
{
	char c;                           //定义变量c、a、f的值
	int a;
	float f;

	cin >> c >> a >> f;                //输入变量c、a、f的值

	a = a + c;
	f = f + 2 * a;

	cout << "c=" << c << "  a=" << a << "  f=" << f << endl;  	//输出变量c、a、f的值

	return 0;
}
