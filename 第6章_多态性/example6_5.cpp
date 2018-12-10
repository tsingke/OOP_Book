//example6_5.cpp文件：改造example3_13.cpp,增加了赋值运算符的重载
#include <string>
#include <iostream>
using namespace std;
class Student
{
	char *specialty;
public:
    Student(char *pSpec = 0) ;      	
	Student (const Student &r);    
	~Student( );
    void Show( );
	Student & operator = (const Student &s);  //新增加的重载赋值运算符声明
};
Student::Student( char *pSpec )       		//普通构造函数的定义
{ 
	if( pSpec )
    {
		specialty = new char[strlen( pSpec ) + 1];
        strcpy(specialty,  pSpec);
    }
    else specialty = 0;
}
Student:: Student (const Student &r)          	//拷贝构造函数的定义
{  
	if( r.specialty )
    {  
		specialty=new char[strlen( r.specialty ) + 1];
        strcpy(specialty,  r.specialty);
    }
    else
		specialty=0;
}
Student::~Student( )           		     //析构函数的定义
{ 
	if ( specialty )
		delete [ ]specialty;     	//specialty的存储空间由new运算符分配，需用delete释放
}
void Student::Show()
{ 
	cout<< "specialty=" << specialty << '\n' ;  
}
Student & Student::operator = (const Student &s)//新增加的重载赋值运算符的定义
{
	if ( specialty ) delete [ ]specialty; 
    if( s.specialty )
    {
		specialty=new char[strlen(s.specialty ) + 1];
        strcpy(specialty,  s.specialty);
    }
    else 
		specialty=0;
	return *this;
}
int main( )
{ 
	Student zhang("computer");    		//调用普通构造函数
    Student wang("LLL") ;         	//调用普通构造函数
    wang=zhang;                      //赋值,调用了重载的=运算符
    zhang.Show();
    wang.Show();
	return 0;
}
