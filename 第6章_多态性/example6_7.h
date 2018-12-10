//example6_7.h: 在类Date中，重载输出运算符"<<"和输入重载运算符">>"
#include <iostream.h>
class Date
{
	int year, month, day ;     			//数据成员默认为是私有属性
public :                     			//下一行为普通构造函数声明
    Date(int y=2011,int m=8,int d=30) ;      
    friend ostream & operator<<(ostream & out, const Date &);		//友元函数重载输出运算符"<<"
    friend istream & operator >> (istream & in, Date &); 		//友元函数输入重载运算符">>"
};