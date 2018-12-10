//example9_05_interface.cpp

#include "example9_05_interface.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

Interface::Interface( )
{
	ReadFile( );
}


void Interface::Display( )
{
	cout << endl;
	cout << "**********0.退    出**********" << endl;
	cout << "**********1.添加信息**********" << endl;
	cout << "**********2.查询信息**********" << endl;
	cout << "**********3.删除信息**********" << endl;
	cout << "**********4.显示信息**********" << endl;
}


void Interface::Run( )
{
	int choice;

	do
	{
		Display( );
		cout << "Please input your choice:";
		cin >> choice;
		switch ( choice )
		{
		case 0 :
			break;
		case 1 :
			Insert( );
			break;
		case 2 :
			Search( );
			break;
		case 3 :
			Delete( );
			break;
		case 4 :
			Output( );
			break;
		}

	} while (choice);

	Save( );
}


void Interface::Search( )
{
	string number;

	cout << "请输入要查询的编号: " << endl;
	cin >> number;

	set<Person>::iterator p = pe.begin( );

	while ( p != pe.end( ) )
	{
		if ( p->GetNumber( ) == number )
			break;
		p++;
	}

	if ( p == pe.end( ) )
		cout << "没有此人信息!\n";
	else
	{
		cout << "姓名\t编号\t性别  出生日期\t 专业\t       课题\t职称\t类型\n";
		PrintOne( p );
	}
}

void Interface::Insert( )
{
	string name;
	string number;
	char sex;		
	int y, m ,d;
	string speciality;
	string researchTopic;
	string academicTitle;
	int type;
	
	char ch = 'n';
	do
	{
		cout << "你要输入的人员类型(1-学生 2-研究生 3-在职研究生 4-教师 ):";
		cin >> type;
		while ( type != 1 && type != 2 && type != 3 && type != 4 )
		{
			cout << "输入错误，请重新输入\n";
			cout << "你要输入的人员类型(1-学生 2-研究生 3-在职研究生 4-教师 ):";
			cin >> type;
		}

		cout << "姓名: ";
		cin >> name;
		cout << "编号: ";
		cin >> number;
		cout << "性别(m/f)：";
		cin >> sex;
		cout << "出生日期(年份 月份 日期):";
		cin >> y >> m >> d;
	
		if ( type == 1 )
		{
			cout << "专业: ";
			cin >> speciality; 
			researchTopic = "";
			academicTitle = "";
		}
		else if  ( type == 2 )
		{
			cout << "专业: ";
			cin >> speciality; 
			cout << "课题: ";
			cin >> researchTopic; 
			academicTitle = "";
		}
		else if  ( type == 3 )
		{
			cout << "专业: ";
			cin >> speciality; 
			cout << "课题: ";
			cin >> researchTopic;
			cout << "职称: ";
			cin >> academicTitle;
		}
		else if  ( type == 4 )
		{
			cout << "职称: ";
			cin >> academicTitle;
			speciality = "";
			researchTopic = "";			
		}

		Person ob( name, number, sex, y, m, d, speciality, researchTopic, academicTitle, type);
		
		pe.insert(ob);

		cout << "继续输入？(y/n)" << endl;
		cin >> ch;

	} while( ch == 'y' ); 
}



void Interface::PrintOne( set<Person>::iterator p )
{
	cout << p->GetName( ) << '\t' << p->GetNumber( ) << '\t';

	if ( p->GetSex( ) == 'm' )
		cout << "女    ";
	else
		cout << "男    ";

	Date bi = p->GetBirth( );
	cout << bi.GetYear( ) << '-' << bi.GetMonth( ) << '-' <<bi.GetDay( ) << "\t ";

	string sp = p->GetSpec( );
	if ( sp == "" )
		cout << setw(12) << setiosflags(ios::left) << "-" << "  ";
	else
		cout << setw(12) << setiosflags(ios::left) << sp << "  ";

	string re = p->GetResearch( );
	if ( re == "" )
		cout << "-\t";
	else
		cout << re << "\t";

	string ac = p->GetAcademic( );
	if ( ac == "" )
		cout << "-\t";
	else
		cout << ac << '\t';

	int type = p->GetType( );
	if ( type == 1 )
		cout << "学生\n";
	else if ( type == 2 )
		cout << "研究生\n";
	else if ( type == 3 )
		cout << "在职研究生\n";
	else if ( type == 4 )
		cout << "教师\n";
}


void Interface::Output( )
{
	cout << "姓名\t编号\t性别  出生日期\t 专业\t       课题\t职称\t类型\n";
	set<Person>::iterator p = pe.begin( );

	while ( p != pe.end( ) )
	{
		PrintOne( p );
		p++;
	}
}


void Interface::Delete( )
{
	string number;

	cout << "请输入要删除的编号: " << endl;
	cin >> number;

	set<Person>::iterator p = pe.begin( );
	while ( p != pe.end( ) )
	{
		if ( p->GetNumber( ) == number )
		{
			pe.erase(p++);
			cout << "删除成功!" << endl;
		}
		else
			p++;
	}
	return;
}


void Interface::ReadFile( )
{
	ifstream in("D:\\record.txt");
	if( !in )
	{
		cout << "Cannot open the file\n";
		return ;
	}

	string name;
	string number;
	char sex;		
	int y, m ,d;
	string speciality;
	string researchTopic;
	string academicTitle;
	int type;

	set<Person>::iterator p = pe.begin( );
	
	in >> name >> number >> sex >> y >> m >> d >> speciality >> researchTopic >> academicTitle >> type;

	while ( !in.eof() )
	{
		if ( speciality == "-" )
			speciality = "";

		if ( researchTopic == "-" )
			researchTopic = "";

		if ( academicTitle == "-" )
			academicTitle = "";
		
		Person ob( name, number, sex, y, m, d, speciality, researchTopic, academicTitle, type);
		pe.insert(ob);

		in >> name >> number >> sex >> y >> m >> d >> speciality >> researchTopic >> academicTitle >> type;

	}

	in.close();

	return;
}


void Interface::Save( )
{
	ofstream out("D:\\record.txt");
	if( !out )
	{
		cout << "Cannot open the file\n";
		return ;
	}

	set<Person>::iterator p = pe.begin( );
	
	while ( p != pe.end( ) )
	{
		out << p->GetName( ) << ' ' << p->GetNumber( ) << ' ' << p->GetSex( )<< ' ';

		Date bi = p->GetBirth( );
		out << bi.GetYear( ) << ' ' << bi.GetMonth( ) << ' ' <<bi.GetDay( )<< ' ';

		string sp = p->GetSpec( );
		if ( sp == "" )
			out << "-" << ' ';
		else
			out << sp << ' ';

		string re = p->GetResearch( );
		if ( re == "" )
			out << "-" << ' ';
		else
			out << re << ' ';

		string ac = p->GetAcademic( );
		if ( ac == "" )
			out << "-" << ' ';
		else
			out << ac << ' ';
	
		out << p->GetType( )  << endl;

		p++;
	}

	out.close();

	return;
}
