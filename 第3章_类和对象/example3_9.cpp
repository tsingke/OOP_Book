//li3_9.cpp：构造函数应用举例
#include<iostream>
using namespace std;
class Date
{private:
    int year,  month,  day;
public:
    Date(int=2006 , int=10 , int=17 );                   		//构造函数原型声明
    void Display( );
};	
Date::Date(int y, int m, int d )               		//在类体外实现构造函数，故前面加类名：：
{   cout<<"Executing constructor…\n";  	//此句为编者有意加入的输出语句，用来体现
//构造函数由系统自动调用
    year = y;                                    //完成对数据成员的初始化
    month = m;
    day = d;
}
void Date::Display()
{   cout<< year << "-" << month << "-" << day << endl;  
}
int main()
{   Date today;//(2006,10,17);              		//定义对象同时完成对象的初始化
    cout<<"Today is:";
    today.Display();
    return 0;
}
