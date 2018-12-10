//example6_4_main.cpp：重载"+"、前缀"++"运算符后的测试
#include "example6_4.h"
int main()
{
	Complex c1(1.5, 2.5), c2(5, 10), c3;
    cout<<"original c1 is:   ";
    c1.print();
    cout<<"original c2 is:   ";
    c2.print();
    c3=c1+c2;                   		//相当于c3=operator+(c1,c2);
    cout<<"c3=c1+c2  is:   ";
    c3.print();
    ++c2;                      			//相当于operator++(c2);
    cout<<"after added 1 c2 is:   ";
    c2.print();
	return 0;
}
