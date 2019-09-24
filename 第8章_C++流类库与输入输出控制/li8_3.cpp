//例8_3.cpp：用setf() 函数设置状态标志
#include<iostream>
using namespace std;
int main()
{   cout.setf(ios::showpos);         		//正数前面输出+
    cout.setf(ios::scientific);         		//用科学计数法输出实数
    cout << 123 << "　" << 123.23 << "\n" ;
	return 0;
}
