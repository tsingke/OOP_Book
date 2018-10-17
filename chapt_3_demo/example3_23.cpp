//li3_23.cpp：用友元函数Equal()判断两个人是否同年同月同日生，包含头文件Date6.h
#include"Date6.h"
int main()
{   Date YourBirthday(1990 , 10 , 17); 
    Date MyBirthday(1990 , 10 , 17);   		//定义对象同时完成对象的初始化
    if ( Equal(YourBirthday , MyBirthday) )
        cout<<"Birthday is the same!\n";
    else 
        cout<<"Birthday is not the same!\n";
	   return 0;
}
