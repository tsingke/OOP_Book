//li3_22.cpp：用普通函数Equal判断两个人是否同年同月同日生，包含头文件Date5.h
#include"Date5.h"
bool Equal( Date &DateA, Date &DateB)
{   return (  DateA.GetYear( ) == DateB.GetYear( )
             &&DateA.GetMonth( ) == DateB.GetMonth( )
             &&DateA.GetDay( ) == DateB.GetDay( ) );
}
int main()
{   
    Date YourBirthday( 1990,10,17 ); 
    Date MyBirthday( 1990,10,17 );   		//定义对象同时完成对象的初始化
    if (Equal( YourBirthday,  MyBirthday) )
        cout<<"Birthday is the same!\n";
    else 
        cout<<"Birthday is not the same!\n";
	   return 0;
}
