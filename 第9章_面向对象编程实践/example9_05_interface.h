//example9_05_interface.h
#ifndef _INTERFACE
#define _INTERFACE

#include "example9_05_person.h"
#include <set>

class Interface
{
protected:
	set<Person> pe;									//数据集
public:
	Interface( );									//构造函数
	void Display( );								//输出界面信息
	void Run( );									//界面类主体功能
	void Output( );									//输出所有信息
    void PrintOne( set<Person>::iterator p );		//输出单条数据记录
	void Insert( );									//插入数据
	void Delete( );									//删除数据
	void ReadFile( );								//从文件中读取数据
	void Search( );									//从数据集中查找数据
	void Save( );									//将数据保存到文件
};

#endif

