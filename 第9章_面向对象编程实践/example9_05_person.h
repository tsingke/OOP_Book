//example9_05_person.h

//该预编译的作用是为了减少VC6的误报
#ifdef WIN32
#pragma warning (disable: 4514 4786)
#endif

#ifndef _PERSON
#define _PERSON

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
	string name;							//姓名
	string number;							//编号
	char sex;								//性别		
	Date birthday;							//出生日期
	string speciality;						//专业
	string researchTopic;					//课题
	string academicTitle;					//职称
	int type;								//类别
public:
	Person( string na , string num , char s, int y, int m, int d , string sp, string re, string ac, int ty );
											//构造函数
	bool operator<( Person ob )const;		//重载<运算，set容器要求元素之间满足该关系	
	string GetName( );						//返回姓名
	string GetNumber( );					//返回编号
	char GetSex( );							//返回性别
	Date GetBirth( );						//返回出生日期
	string GetSpec( );						//返回专业
	string GetResearch( );					//返回研究课题
	string GetAcademic( );					//返回职称
	int GetType( );							//返回类别
};

#endif

