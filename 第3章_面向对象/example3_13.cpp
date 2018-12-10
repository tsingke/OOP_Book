
//example3_13.cpp文件：用系统默认的拷贝构造函数只能实现浅拷贝，析构时出错
#include <string>
#include <iostream>
using namespace std;
//---------------------定义学生类----------------------------------
class Student
{
	char *specialty;

 public:
	Student(char *pSpec = 0);      		//普通构造函数声明
	Student(const Student &r);          //拷贝构造函数声明
	~Student();							//析构函数（程序中只能有一个）
	void Show();                        //普通函数
};
//---------------构造函数，析构函数定义----------------------------
Student::Student(char *pSpec)           //普通构造函数的定义
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy(specialty, pSpec);
	}
	else specialty = 0;
}

Student::Student(const Student &r)     //自定义拷贝构造函数
{
	if (r.specialty)
	{
		specialty = new char[strlen(r.specialty) + 1];
		strcpy(specialty, r.specialty);
	}
	else specialty = 0;
}

Student::~Student()                    //析构函数定义
{
	if (specialty)

	delete[]specialty;     	//specialty的存储空间由new运算符分配，需用delete释放

}
//---------------普通函数定义-------------------------------------
void Student::Show()
{
	cout << "specialty=" << specialty << '\n';
}

int main()
{
	Student zhang("computer");   //调用普通构造函数，创建对象zhang
	Student wang(zhang);         //调用拷贝构造函数（默认的或自定义的）
	zhang.Show();
	wang.Show();
	return 0;
}
