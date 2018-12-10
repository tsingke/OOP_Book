//example6_11_main.cpp：虚函数与同名覆盖现象测试
#include"example6_11.h"
int main() 
{
	base ob1, *p ;                		//创建基类的对象ob1和指针p
    derive ob2;                   		//创建派生类的对象ob2
    p=&ob1;                    		//将指针p指向基类的对象ob1
    cout<<"p point to base class object ob1:\n";
    p->f1();	                    	//调用基类函数f1
    p->f2();	                    	//调用基类函数f2
    p->f3();	                    	//调用基类函数f3
    p=&ob2;		              	//将指针指向派生类的对象ob2
    cout<<"p point to derive class object ob2:\n";
    p->f1();	                  		//调用派生类的函数f1（动态联编）
    p->f2();                     		//调用基类的函数f2
//   p->f2(1);	                   	//此行会报错，因为基类中的f2()是不带参数的
    p->f3();	                    	//调用基类函数f3
    cout<<"derive class object ob2: call member functions:\n";
    ob2.f1();                     		//通过派生类对象只能直接调用本类的f1()函数
//   ob2.f2();                    		//此行会报错，因为派生类中的f2()是带一个形式参数的
    ob2.base::f2();                		//同名覆盖，调用加基类名::访问
    ob2.f2(1);                    		//调用派生类重新定义的f2()函数
    ob2.f3();                     		//调用派生类重新定义的f3()函数
	return 0;
}
