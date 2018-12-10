// example7_19_Student.h：学生类的定义
#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<string>
#include<vector>
using namespace std;
#define SIZE 80
class Student
{
	string name;                     //姓名
	string ID;                     //身份证
	string number;                 //学号
	string speciality;                //专业
	int age;                         //年龄
public:
	Student();                         //无参构造函数
	Student( string na , string id , string num , string  spec ,int ag);  //带参构造函数
	Student(const Student &per);          //拷贝构造函数
	~Student();                        //析构函数
    string GetName();                   //提取姓名
	string GetID();                      //提取身份证
	string GetNumber();                 //提取学号
	string GetSpec();                    //提取专业
	int GetAge();                       //提取年龄
	void Display() const;                      //显示学生信息
	void Input();                        //输入学生信息
	bool Insert( );   
//	bool SearchStu( string na )   ;
};
#endif
