//example6_2_main.cpp: 类Point的测试
#include"example6_2.h"
int  main ()
{ 
	Point p1(5,10), p2(20,30),p3,p4;    //创建4个对象
    p3=p1+p2;                          	//相当于p3=p1.operator +(p2);语句
    p4=p1-p2;                           //相当于p4=operator - (p1,p2);语句
    cout<<"P1=";
    p1.print();                         //输出p1对象的值
    cout<<"P2=";
    p2.print();                         //输出p2对象的值 
    cout<<"p3 = p1 + p2 is:";
    p3.print();                         //输出p3=p1+p2对象的值
    cout<<"p4 = p1 - p2 is:";
    p4.print();                         //输出p4=p1-p2对象的值
	return 0;
}
