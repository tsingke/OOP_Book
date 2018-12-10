//example6_1.h: 类Student的定义
#include<iostream> 
#include<string>
using namespace std;
class Student                   	//定义类 Student
{  
	char  name[20];
    int no;
public:
    Student();                    	//构造函数重载版本1，无参数
    Student(char *sname, int n); 	//构造函数重载版本2，带参数
    void  print();                	//输出函数重载版本1，无参数
 	void  print(int n);          	//输出函数重载版本2，带参数
};
