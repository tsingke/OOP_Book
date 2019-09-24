//Date1.h：完整的Date类定义,成员函数的定义放在类体外
#include<iostream>
using namespace std;
class Date
{private:
    int year;
    int month;
    int day;
public:
    void SetDate(int ,int ,int );        	 	//对数据成员初始化的公有成员函数
    void Display( );                 	   	//执行显示功能的公有成员函数
    int GetYear( );                           //公有成员函数，提取year变量值
    int GetMonth( );                         //公有成员函数，提取month变量值
int GetDay( );                           //公有成员函数，提取day变量值
};                                         //此分号不能少，表示类定义结束
void Date::SetDate(int y,int m,int d)
{   year=y;
    month=m;
    day=d;
}
int Date::GetYear( )
{   return year;   
}          
int Date::GetMonth( )
{   return month;
}
int Date::GetDay( )
{   return day;
}
void Date::Display()
{   cout << year<< "-" << month << "-" << day << endl;
}
