
/*---------------------------------------------------------*
 //example_3_10.cpp：带默认参数的构造函数的应用举例
*---------------------------------------------------------*/
#include<iostream>
using namespace std;

class Date
{
private:
    int year, month, day ;
public:
    Date(int y=2000, int m=1, int d=1 );   		    //构造函数声明，提供默认参数值
    void Display();
};	

Date::Date(int y , int m , int d)             		//函数定义时首部不能再提供默认参数值
{   cout<<"Executing constructor…"<<endl;
    year = y;
    month = m;
    day = d;
}

void Date::Display()
{   cout<< year << "-" << month << "-" << day << endl;
}

int main()
{    
	Date initiateday;                  		//1.全部采用构函函数的默认形参值
    Date newday(2006);               		//2.提供一个实际参数，其余两个采用默认形参值
    Date today(2006,10,17);            		//3.提供3个实际参数，不采用默认形参值
	
    cout<<"Initiateday is:";
    initiateday.Display();
    cout<<"Newday is:";
    newday.Display();
    cout<<"Today is:";
    today.Display();
	return 0;
}
