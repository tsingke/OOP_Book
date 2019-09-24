//example4_01.cpp:静态数据成员使用示例
#include <iostream>
using namespace std;
class Student
{
private:
		int num;
		char name[20];
public:
		static int total;           //公有的静态数据成员
		Student( )  { total++; }   //构造函数，每定义一个新对象，则total加1
		~Student( ) { total--; }     //析构函数，每一个对象生命期结束，则total减1
		Student(int n, char *p="Wang");
		void GetName();
		int Getnum( );
};
int Student::total=0;           //静态数据成员的初始化
Student::Student(int n, char *p)  //带参构造函数，每定义一个新对象，则total加1
{
		num=n;
		strcpy(name,p);
		total++;
}				
void Student::GetName( )
{	cout<<name<<endl;
}
int Student::Getnum( )
{	return num;
}
int main() 
{	cout<<"The number of all students: "<<Student::total<<endl;    //无对象时可类名::静态成员名访问
		Student *p=new Student(13);                             //用指针申请动态空间并得到对象*p
		cout<<"The number of all students: "<<Student::total<<endl;    //用类名::静态成员名形式访问
   	cout<<"The number of all students: "<<p->total<<endl;        //用指针所指向的对象去访问
		delete p;                                              //通过指针删除动态对象，析构一次
    cout<<"The number of all students: "<<Student::total<<endl;    //用类名::静态成员名形式访问
		Student s[2];                                           //定义两个对象，构造函数调用两次
		cout<<"The number of all students: "<<s[0].total<<endl;        //这两行输出结果一定相同
		cout<<"The number of all students: "<<s[1].total<<endl;	
		return 0;
}
