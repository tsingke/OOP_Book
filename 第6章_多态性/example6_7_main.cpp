//example6_7_main:重载运算符">>"和">>"的测试
#include "example6_7.h"
int main()
{
	Date  d1,d2(2011,9,1),d3;   		//定义3个日期对象
    cin >> d3;       					//相当于operator>>(cin,d1);
    cout << "the value of d1 is :" << d1;  
    cout << "the value of d2 is :" << d2;  
    cout << "the value of d3 is :" << d3;  
	return 0;
}
