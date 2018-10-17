// example_3_6.cpp：指针访问形式的应用举例
#include"Date1.h"
int main()
{   
	Date today,*t;
	today.SetDate(2006,10,17);      			//通过对象以圆点形式访问成员函数
	cout<<"One day is:";
	today.Display();               			//输出日期的信息
	t=&today;
	t->SetDate(2007,12,18);       			    //通过指针以圆点形式访问成员函数
	cout<<"the other day is:";
	t->Display();                			    //输出日期的信息
	return 0;
}
