//example5_14_people.h
#ifndef _PERSON
#define _PERSON

#include<iostream>
#include<string>
using namespace std;

class Date
{
protected:
	int year;
	int month;
	int day;
public:
	void Set( int y, int m, int d );
	int GetYear( );
	int GetMonth( );
	int GetDay( );
};

class Person
{
protected:
	char name[20];
	char number[10];
	char sex;
	Date birthday;
public:
	Person( );
	void Input( );
	void Output( );
	char* GetName( );
};

class Student: virtual public Person
{
protected:
	char speciality[20];
public:
	void Input( );
	void Output( );
};

class Graduate: virtual public Student
{
protected:
	char  researchTopic[50];	//研究课题
public:
	void Input( );
	void Output( );
};

class Teacher: virtual public Person
{
protected:
	char academicTitle [20];	//教师职称
public:
	void Input( );
	void Output( );
};

class PostgraduateOnJob: public Graduate, public Teacher
{
public:
	void Input( );
	void Output( );
};

#endif

