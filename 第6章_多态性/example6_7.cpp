//example6_7.cpp:实现重载输出运算符"<<"和输入重载运算符">>"
#include "example6_7.h"
Date::Date(int y,int m,int d)
{
	year=y;
    month=m;
    day=d;
}
ostream & operator<<(ostream & out, const Date & obj)
{
	out <<obj.year;
	out << "-";
    out <<obj.month;
	out << "-";
	out <<obj.day;
    out <<endl;
    return out;
}
istream & operator >> (istream & in, Date & obj)
{
	cout << "Input year, month, day of the Date:\n";
    in>>obj.year;
    in>>obj.month;
	in>>obj.day;
    return in;
}