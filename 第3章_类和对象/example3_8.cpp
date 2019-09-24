//li3_8.cpp文件：this指针使用示例
#include<iostream>
using namespace std;
class Date
{
private:
	int year, month, day;
public:
	void  SetDate(int y,  int m,  int d);
    void  Display( );
};
void Date:: SetDate(int y,  int m,  int d)
{   
	year=y;
    month=m;
    day=d;
}
void Date:: SetDate(int y,  int m,  int d)
{   
	this->year=y;
    this->month=m;
    this->day=d;
}
/*
void Date::Display( )
{   cout<<"调用该函数的对象的this指针是";
    cout<<this<<endl;                             	//输出当前主调对象的地址     
    cout<<"当前对象year成员的起始地址: ";         	//输出当前对象的year成员的地址
    cout<<&this->year<<endl;
    cout<<"当前对象month成员的起始地址: ";        	//输出当前对象的month成员的地址
    cout<<&this->month<<endl;
    cout<<"year="<<this->year<<" ,month="<<this->month<<endl;  //输出this所指对象的数据成员值
}
*/

void Date::Display( )
{   
	cout<<"调用该函数的对象的this指针是";
    cout<<this<<endl;                             	//输出当前主调对象的地址     
    cout<<"当前对象year成员的起始地址: ";         	//输出当前对象的year成员的地址
    cout<<&year<<endl;
    cout<<"当前对象month成员的起始地址: ";        	//输出当前对象的month成员的地址
    cout<<&month<<endl;
    cout<<"year="<<year<<" ,month="<<month<<endl;  //输出this所指对象的数据成员值
}
int main()
{   
	Date DateA , DateB;
    DateA.SetDate(2011,7,24);
    DateB.SetDate(2010,10,1);    //定义两个对象
    cout<<"DateA地址:"<<&DateA<<endl ;              //输出对象DateA的地址     
    DateA.Display();
    cout<<"DateB地址:"<<&DateB<<endl ;              	//输出对象DateB的地址  
    DateB.Display();
	return 0;
}
