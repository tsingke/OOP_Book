
//example3_17.cpp文件: 引用的使用示例，包含头文件Date4.h

#include "Date4.h"

//---------------------------------------------------------------------
//调用两次构造函数生成两个对象
Date DateA( 2010, 1, 1 )；
Date DateB( 2010, 5, 1 );  	
	
//pDate为对象DateA的别名，初始化引用并不调用构造函数
Date &pDate=DateA;   

//----------------输出对象DateA、DateB和引用pDate的值------------------
void f( )                 		
{    
     DateA. Display ( );
	 DateB. Display ( );
	 
	 pDate. Display ( );
}
//--------------------【主函数】----------------------------------------
int main()
{  
	cout<<"original DateA,DateB,pDate:"<<endl;
    f( );   
	
    pDate = DateB;  //相当于DateA=DateB，pDate仍是DateA的别名，未改变为DateB的别名
    cout<<"after pDate=DateB,  DateA,DateB,pDate:"<<endl;
	
    f( );                        //此处输出的DateA、DateB、pDate值一定相等
    pDate = Date(2010, 10, 1) ;  //对引用pDate的值进行修改，相当于 DateA = Date(100,200); 
    cout<<"after pDate=Date(2010, 10, 1),  DateA,DateB,pDate:"<<endl;
	
    f( );                 	     //此处输出的DateA和pDate值一定相等，而DateB保持原值
	
    return 0;
}
