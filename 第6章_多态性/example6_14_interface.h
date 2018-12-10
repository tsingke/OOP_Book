//example6_14_interface.h
#include "example6_14_student.h"
const int N = 2;        //常量N的值可以根据实际编程需要调整
class Interface
{
protected:
	Student st[N];
	int num;			//学生信息人数
public:
	Interface( );		//学生信息系统界面
	void Browse( );		//浏览学生信息
	void Run( );		//系统启动
	void Input( );		//输入学生信息
	void Sort( );		//按年龄排序学生信息
	void Statistic( );	//按性别统计学生信息
	bool Search( );		//按姓名查询学生信息
};

