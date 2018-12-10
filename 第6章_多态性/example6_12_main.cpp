//example6_12_main.cpp: 纯虚函数的测试
#include "example6_12.h"
void DrawObject(Point *p)	//定义顶层函数，以基类指针为形式参数
{ 
	p->Draw();    
}
int main()
{ 
	Line L;
    Circle C;
    DrawObject(&L) ;             		//相当于Point *p=&L;语句，基类指针指向L对象
    DrawObject(&C) ;             		//相当于Point *p=&C;语句，基类指针指向C对象
	return 0;
}
