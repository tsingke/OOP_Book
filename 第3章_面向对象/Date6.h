//date6.h:有构造、拷贝构造、析构函数、输出函数、修改函数、友元函数
#include <iostream>
using namespace std;
class Date
{   int year, month, day ;     			//数据成员默认为是私有属性
public :                     			//下一行为普通构造函数声明
    Date(int y=2007, int m=1, int d=1) ;      
    Date(const Date &date); 			//拷贝构造函数声明
	~Date( );    
	int  GetYear( );
	int  GetMonth( );
	int  GetDay( );
    void  Display ( );                   //普通成员函数，输出数据成员的值
	void ModifyDate( int, int, int);
	friend bool Equal(Date& , Date& );
};
Date::Date(int y, int m, int d)  			//普通构造函数的定义
{   year = y;
    month = m;
    day = d;
    cout<<"Constructor called.\n";
}

Date::Date( const Date &date)		    //拷贝构造函数的定义
{   year = date.year;
    month = date.month;
    day = date.day;
    cout<<"Copy Constructor called.\n";
}

Date::~Date( )
{cout<<"Destructor called.\n"; 
}

int Date:: GetYear( )                    //公有成员函数，提取year变量值
{   return year;   
}          
int Date:: GetMonth( )                  //公有成员函数，提取month变量值
{   return month;
}
int Date:: GetDay( )                    //公有成员函数，提取day变量值
{   return day;
}
void Date::Display()           		   //输出函数的定义
{   cout<<year<<"-"<<month<<"-"<<day<<endl;   }

void Date::ModifyDate(int y, int m, int d)  //修改日期函数的定义
{	year = y;
    month = m;
    day = d;
}

bool Equal( Date &DateA, Date &DateB)
{return (DateA.year == DateB.year && DateA.month == DateB.month && DateA.day == DateB.day);
}
