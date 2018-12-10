//example6_13_main.cpp: 抽象类与纯虚函数在求图形面积中的使用
#include "example6_13.h"
int main() 
{ 
	Shape *ptr[3];     	        		//定义抽象类的指针数组
    ptr[0]=new Triangle(2.5,10.0);		//创建Triangle类的对象
    ptr[1]=new Rectangle(15, 22);		//创建Rectangle类的对象
    ptr[2]=new Circle(3.0);         		//创建Circle类的对象
    cout<<"The area of Triangle(2.5,10.0) is:";
    cout<<ptr[0]->area()<<endl;    		//调用Triangle类的area()函数
    cout<<"The area of Rectangle(15, 22) is:";
    cout<<ptr[1]->area()<<endl;   		//调用Rectangle类的area()函数
    cout<<"The area of Circle(3.0); is:";
    cout<<ptr[2]->area()<<endl;    		//调用Circle类的area()函数
	return 0;
}
