//li3_24.cpp：将类Date的成员函数Print（）作为类Student的友元成员示例
#include<iostream>
#include<string>
using namespace std;
class Student;              	//向前引用，因为在后面定义的Date类中用到Student类型
class Date
{   int year, month, day ;     			//数据成员默认为是私有属性
public :                     			//下一行为普通构造函数声明
    Date( int y=2007 , int m=1 , int d=1 ) ;      
    void Display (const Student &stu );        //成员函数，其形式参数为类Student的对象引用
};
class Student               	// Student后于Date定义，在Date定义前需增加Student的向前引用
{private:                 	
    char *specialty;
public:
    Student(char  *pSpec);
    ~Student();           
    friend void Date::Display (const Student &);   //此为声明友元成员的语句，Date::不可少
};
Date::Date(int y,int m,int d)  			//普通构造函数的定义
{   year = y;
    month = m;
    day = d;
    cout<<"Constructor called.\n";
}
void Date:: Display (const Student  &stu)      //Display是Date的成员函数，Student类的友元成员
{   cout<< stu.specialty <<endl;               //先显示学生对象的专业名称
    cout<< year << "-" << month << "-" << day << endl;   //再显示本类当前对象代表的日期
}

Student::Student(char *pSpec)                  //Student类的构造函数定义
{   if ( pSpec )
		{	specialty = new char[strlen( pSpec ) + 1];
			strcpy( specialty, pSpec );
		}
    else specialty = 0;
}
Student::~Student( )                           //Student类的析构函数定义
{  if ( specialty )
   delete [ ]specialty; 
}

int main( )
{   Student zhang("computer");
    Date Birthday( 1990,10,17 );
    Birthday. Display ( zhang );       	      //通过Date类对象Birthday调用函数也同时显示对象zhang的信息
	return 0;
}
