//example9_05_person.cpp
#include "example9_05_person.h"


//Date类的函数实现
void Date::Set( int y, int m, int d )
{
	year = y;
	month = m;
	day = d;
}

int Date::GetYear( )
{
	return year;
}

int Date::GetMonth( )
{
	return month;
}

int Date::GetDay( )
{
	return day;
}


//Person类的函数实现
Person::Person( string na , string num , char s, int y, int m, int d , string sp, string re, string ac, int ty )
{
	name = na;
	number = num;
	sex = s;
	birthday.Set( y, m, d );
	speciality = sp;
	researchTopic = re;
	academicTitle = ac;
	type = ty;
}

bool Person::operator<( Person ob ) const
{
	if ( number < ob.number )
		return true;
	else
		return false;
}

string Person::GetName( )
{
	return name;
}

string Person::GetNumber( )
{
	return number;
}

char Person::GetSex( )
{
	return sex;
}

Date Person::GetBirth( )
{
	return birthday;
}

string Person::GetSpec( )
{
	return speciality;
}

string Person::GetResearch( )
{
	return researchTopic;
}

string Person::GetAcademic( )
{
	return academicTitle;
}

int Person::GetType( )
{
	return type;
}