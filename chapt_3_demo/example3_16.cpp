//Li3_16.cpp文件：利用指针生成动态对象及动态对象数组示例，包含文件Date4.h
#include "Date4.h"
int main()
{   Date *q=new Date(2010, 4, 1);	//申请1个对象的动态空间，并将首地址赋给对象指针q
    cout<<"one  dynamic object is:"<<endl;
    q->Display( );
    delete q;               		//释放q对象的动态空间，调用1次析构函数
    q=new Date[ 3 ];        		//生成动态一维对象数组，调用3次无参构造函数
    q[0]=Date(2011, 5, 1);         	//调用有参构造函数生成无名对象赋值给q[0]
    q[1]=Date(2011, 10, 1);         	//调用有参构造函数生成无名对象赋值给q[1]
    for (int i=0;i<3;i++)      		//这时的指针q相当于一维数组名，可以作数组名使用
    q[i].Display( );  
    delete [ ]q;              		//释放对象数组的动态空间，调用3次析构函数
	   return 0;
}

