// li3_18.cpp文件：对象作为值形式参数的单向值传递方法，包含头文件Date5.h
#include"Date5.h"
void Fun(Date DateVar)           	     //普通函数Fun()的定义，参数为值形式参数
{   DateVar.ModifyDate( 2011, 11, 1 );     	//修改形参对象的值
    DateVar. Display ( );    
}
int  main()
{   Date DateA;          
    DateA. Display ( );
    Fun(DateA);                 		//实参对象单向传值给形参对象，调用拷贝构造函数
    cout<<"after calling fun() DateA:";
	DateA. Display ( );
	return 0;
}     
