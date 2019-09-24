//student8.cpp
#include "student8.h"
//Person类的函数实现
Person::Person( )
{}
Person::Person( char *na , char *s, int a)
{
		strcpy(name, na);
strcpy(sex , s);
		age = a;
}

Person::~Person( )
{}

//Student类的函数实现
Student::Student( )
{}

Student::Student( char *na , char *s, int a, char * spec ,char * num):
 Person( na, s, a)
{
		strcpy(speciality, spec);
		strcpy(number, num);
}

Student::~Student( )
{}

ostream & operator<<(ostream & out,const Student & stu)
{
		out << stu.number << '\t';	
		out << stu.name << '\t';
   	out << stu.age << '\t';	
		out << stu.sex << '\t';	
		out << stu.speciality << '\n';	
		return out;
}

istream & operator>>(istream & in,Student & stu)
{
		in >> stu.name;
		in >> stu.sex;
in >> stu.age;
		in >> stu.speciality;
		in >> stu.number;
		return in;
}

