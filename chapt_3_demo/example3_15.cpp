//Li3_15.cpp文件：Date类的对象数组、指针的使用示例，包含文件Date4.h
#include "Date4.h"
int main()
{   Date array[3]={ Date(2011,5,1), Date(2011,10,1) };    //定义对象一维数组
    Date *p=array ;      			    //指针指向数组的首地址，相当于Date *p=&array[0];
    for( ; p<array+3;  p++)   	     	//用指针仿效访问数组中的元素
    p->Display( );	                   //两种访问方式等效
return 0;
}
