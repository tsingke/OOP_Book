//Date2.h：完整的Date类定义,成员函数的定义放在类体内
#include<iostream>
using namespace std;
class Date
{private:
    int year;
    int month;
    int day;
public:
    void  SetDate(int y, int m , int d)             //对数据成员初始化的公有成员函数
{   year = y;
   	    month = m;
    	    day = d;
}
int  GetYear( )                         //公有成员函数，提取year变量值
{   return year;   
}          
int  GetMonth( )                       //公有成员函数，提取month变量值
{   return month;
}
int  GetDay( )                          //公有成员函数，提取day变量值
{   return day;
}
void  Display( )	                        //执行显示功能的公有成员函数
{   cout<< year << "-" << month << "-" << day << endl;
}
};                                          //此分号不能少，表示类定义结束
