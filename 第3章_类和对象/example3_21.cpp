// li3_21.cpp文件：对象引用作为函数的返回值使用示例。包含头文件Date5.h
#include"Date5.h"

Date &Fun(Date &pDate)                 	//对象引用作为普通函数Fun()的形式参数
{   
	pDate.ModifyDate( 2012, 5 ,1 );    	//修改引用的值,也就是修改对应实参对象的值
    cout<<"reference pDate:\n";
    pDate.Display( );
    return pDate;
}
/*
Date & Fun(Date  &pDate)     			//普通函数Fun()的定义，对象引用作形参，并返回引用
{   Date qDate;                 		//定义局部自动对象qDate
    qDate.ModifyDate(2011,  10,  20);          
    return qDate;                 		//引用返回qDate，不安全，有告警
}
*/
int  main()
{   Date DateA(2011),tDate; 
    cout<<"Before right Fun, DataA:\n";
    DateA.Display();
    cout<<"Before right Fun, tDate:\n";
    tDate.Display();
    tDate=Fun(DateA);
	cout<<"After right Fun, DateA:\n";
	DateA.Display( );
	cout<<"After right Fun, tDate:\n";
	tDate.Display( );
    Fun(DateA)=Date(1998,10,5);
    cout<<"After left Fun, DateA:\n";
    DateA.Display();
	cout<<"After left Fun, tDate:\n";
    tDate.Display();
    return 0;
}   
 
