//student8.h
#include<iostream.h>
#include<string.h>
class Person
{
protected:
		char name[80];
		char sex[4];
		int age;
public:
		Person( );
		Person( char *na , char *s , int a);
		~Person( );
};

class Student: virtual public Person
{
protected:
		char speciality[20];
char number[16];
public:
		Student( );
		Student( char *na , char *s, int a, char * spec, char * num);
		~Student( );
    	friend ostream & operator << (ostream &,const Student &);		//友元函数重载输出运算符"<<"
    	friend istream & operator >> (istream &,Student &); 		//友元函数输入重载运算符">>"
};

