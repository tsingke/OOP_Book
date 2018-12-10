//example6_1.cpp: 类成员函数的实现
#include"example6_1.h" 
Student::Student()  
{
	no=0;
	strcpy(name, "同学");
}  
Student::Student(char *sname, int n)
{ 
	no=n;
	strcpy(name, sname);
}
void  Student::print() 
{   
	cout << name <<"  " << no << endl; 
}
void  Student::print(int n) 
{   
	cout << name <<"  B"<< n << no << endl;  
}