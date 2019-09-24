// li3_20.cpp文件：对象指针作为形式参数的单向传地址方法，包含头文件Date5.h
#include"Date5.h"
void Fun(Date &pDate)                 	    //对象指针作为普通函数Fun()的形式参数
{   pDate.ModifyDate(2011, 11, 1);            	//修改指针所指向的对象的值
    pDate.Display( );
}
int  main()
{   
	Date DateA(2010);     
    DateA.Display( ); 	//输出对象的值
    Fun (DateA) ;                       	//实参对象地址单向传给形参对象指针
    cout<<"after calling fun() DateA: ";
    DateA.Display( );             	         //实参对象的值已改变
    return 0;
}                    
