//example5_14_interface.cpp
#include "example5_14_interface.h"
#include <cstring>
#include <iostream>

using namespace std;

Interface::Interface( )
{
	numOfSt = 0;
	numOfGr = 0;
	numOfPo = 0;
	numOfTe = 0;
}

void Interface::display( )
{
	cout << "**********0.退    出**********" << endl;
	cout << "**********1.录入信息**********" << endl;
	cout << "**********2.浏览信息**********" << endl;
}

void Interface::run( )
{
	int choice;

	do
	{
		display( );
		cout << "Please input your choice:";
		cin >> choice;
		switch ( choice )
		{
		case 0 :
			break;
		case 1 :
			Input( );
			break;
		case 2 :
			Output( );
			break;
		}

	} while (choice);
}

void Interface::Input( )
{
	int type;
	int i;
	char ch;

	do
	{
		cout << "你要输入的人员类型(1-学生 2-研究生 3-在职研究生 4-教师 ):";
		cin >> type;

		if ( type == 1 )
		{
			if ( numOfSt == N )
			{
				cout << "人数已满,无法继续录入!" << endl;
			}
			else
			{
				for ( i=0 ; strcmp( st[i].GetName( ), "00" ) != 0; i++ );
				st[i].Input( );
				numOfSt++;
			}
		}
		else if ( type == 2 )
		{
			if ( numOfGr == N )
			{
				cout << "人数已满,无法继续录入!" << endl;
			}
			else
			{
				for ( i=0 ; strcmp( gr[i].GetName( ), "00" ) != 0; i++ );
				gr[i].Input( );
				numOfGr++;
			}
		}
		else if ( type == 3 )
		{
			if ( numOfPo == N )
			{
				cout << "人数已满,无法继续录入!" << endl;
			}
			else
			{
				for ( i=0 ; strcmp( po[i].GetName( ), "00" ) != 0; i++ );
				po[i].Input( );
				numOfPo++;
			}
		}
		else if ( type == 4 )
		{
			if ( numOfTe == N )
			{
				cout << "人数已满,无法继续录入!" << endl;
			}
			else
			{
				for ( i=0 ; strcmp( te[i].GetName( ), "00" ) != 0; i++ );
				te[i].Input( );
				numOfTe++;
			}
		}
		else
		{
			cout << "选择有误" << endl;
		}

		cout << "继续输入？(y/n)" << endl;
		cin >> ch;

	} while( ch == 'y' );
}

void Interface::Output( )
{
	int type;
	int i;
	cout << "你要查看的人员类型(1-学生 2-研究生 3-在职研究生 4-教师 ):";
	cin >> type;

	if ( type == 1 )
	{
		if ( numOfSt == 0 )
		{
			cout << "没有学生数据!" << endl;
		}
		else
		{
			for ( i=0 ; i<N ; i++ )
			if ( strcmp( st[i].GetName( ), "00" ) != 0 )
				st[i].Output( );
		}
	}
	else if ( type == 2 )
	{
		if ( numOfGr == 0 )
		{
			cout << "没有研究生数据!" << endl;
		}
		else
		{
			for ( i=0 ; i<N ; i++ )
			if ( strcmp( gr[i].GetName( ), "00" ) != 0 )
				gr[i].Output( );
		}
	}
	else if ( type == 3 )
	{
		if ( numOfPo == 0 )
		{
			cout << "没有在职研究生数据!" << endl;
		}
		else
		{
			for ( i=0 ; i<N ; i++ )
			if ( strcmp( po[i].GetName( ), "00" ) != 0 )
				po[i].Output( );
		}
	}
	else if ( type == 4 )
	{
		if ( numOfTe == 0 )
		{
			cout << "没有教师数据!" << endl;
		}
		else
		{
			for ( i=0 ; i<N ; i++ )
			if ( strcmp( te[i].GetName( ), "00" ) != 0 )
				te[i].Output( );
		}
	}
	else
	{
		cout << "选择有误" << endl;
	}
}
