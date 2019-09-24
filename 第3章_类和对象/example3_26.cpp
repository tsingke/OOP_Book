//example3_26.cpp文件：包含主函数及其他一些普通函数
#include<iostream>
#include "example3_26_student.h"
using namespace std;
const int N=10;

void menu();
void OutputStu( Student *array );
void InputStu(Student *array);
int SearchStu( Student *array, char *na);

int count=0;

int main()
{
	Student array[N];
	int choice;
	
	do
	{
		menu();
		cout<<"Please input your choice:";
		cin>>choice;
		if( choice>=0 && choice <= 3 )         
			switch(choice)
		{
			case 1:InputStu(array);break;
			case 2:cout<<"Input the name searched"<<endl;
			       char na[20];
				   cin>>na;
				   int i;
					   i=SearchStu(array, na);
				   if (i==N)
					   cout<<"查无此人！\n";
				   else
					   array[i].Display();
				   break;
			case 3:OutputStu(array); break;
			default:break;
		}
	}while(choice);
	return 0;
}
				   

void menu()
{
	cout<<"**********1.录入信息**********"<<endl;
	cout<<"**********2.查询信息**********"<<endl;
	cout<<"**********3.浏览信息**********"<<endl;
	cout<<"**********0.退    出**********"<<endl;
}

void OutputStu( Student *array)               //输出对象数组元素
{
	cout<<"学生总人数="<<count<<endl;
	for(int i=0 ; i<count ; i++)
		array[i].Display();
}

int SearchStu( Student *array, char *na )         //按姓名查询
{
	int i,j=N;
	for(i=0 ; i<count ; i++)
		if( strcmp( array[i].GetName() , na) == 0 )
			j=i;
	return j;
}

void InputStu(Student *array )                //输入对象数组元素
{
	char ch;
	do
	{   
		array[count].Input();
		count++;
		cout<<"继续输入吗？(Y or N )"<<endl;
		cin>>ch;
	}while(ch=='Y');
}
