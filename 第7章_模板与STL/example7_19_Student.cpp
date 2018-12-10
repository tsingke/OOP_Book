// example7_19_Student.cpp：学生类的实现
#include "example7_19_Student.h"
Student::Student()
{
	age=0;
}
//构造函数
Student::Student( string na , string id , string num , string  spec ,int ag)
{	name=na;
    ID=id;
    number=num;
	speciality=spec;
	age=ag;
}

Student::Student(const Student &per)           //拷贝构造函数，在此例中暂时没有用到
{
	name=per.name;
	ID=per.ID;
	number=per.number;
	speciality=per.speciality;
	age=per.age;
}
	
Student::~Student()                         //析构函数
{}
	   
string Student:: GetName()                   //提取姓名
{
	return name;
}
string Student::GetID()                      //提取身份证
{  
	return ID;
}
int Student::GetAge()                       //提取年龄
{  
	return age;
}
string Student::GetSpec()                    //提取专业
{
	return speciality;
}
string Student::GetNumber()                 //提取学号
{
	return number;
}
void Student::Display()  const                  //输出数据信息
{
	cout<<"姓  名："<<name<<endl;
	cout<<"身份证："<<ID<<endl;
	cout<<"学  号："<<number<<endl;
	cout<<"专  业："<<speciality<<endl;	
	cout<<"年  龄："<<age<<endl<<endl;
}
void Student::Input()                      //输入数据
{
	cin.get();
	cout<<"输入姓  名：";
	getline(cin,name);
	cin.get();
	cout<<"输入身份证：";

	getline(cin,ID) ;
		cin.get();
	
	
	cout<<"输入学  号：";

	
	getline(cin,number); 
		cin.get();
	cout<<"输入专  业：";
	getline(cin,speciality) ;
	cout<<"输入年  龄：";
	cin.get();
	cin>>age;

}
/*bool SearchStu( string na )         //按姓名查询
{
	bool flag=false;
	if( GetName().compare(na) == 0 )
		return true;
	else
	return false;
}*/
