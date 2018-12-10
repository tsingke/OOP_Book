//example6_1_main.cpp: 类Student的测试
#include"example6_1.h" 
int main()
{ 
	Student  s1;               	//创建类Student的一个对象，调用第1个构造函数 
    Student  s2("学生",22) ;   	//创建类Student的对象，调用第2个构造函数 
    s1.print();					//对象s1调用重载版本1的输出函数print()
    s2.print();                	//对象s2调用重载版本1的输出函数print()
    s2.print(2008) ;           	//对象s2调用重载版本2的输出函数print(int)
	return 0;
}
