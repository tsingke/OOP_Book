//example6_11.h：虚函数与同名覆盖问题
#include<iostream>
using namespace std;
class base                       		//声明并定义基类 base
{
public: 
    virtual void f1()               		//声明为虚函数
    {
		cout<<"f1 function of base \n";	   
    } 
    virtual void f2()               		//声明为虚函数
    {
		cout<<"f2 function of base \n"; 	   
    } 
   void f3()                    		//声明为普通函数
    { 
	   cout<<"f3 function of base \n"; 	   
    } 
}; 
class derive:public base             		//声明并定义派生类 derive
{
 public:
    void f1()                    		//具有虚函数特征
    {
		cout<<"f1 function of derive \n"; 	   
    } 
    void f2 (int x)                 		//改变参数，同名覆盖,不具有虚函数特征
    { 
		cout<<"f2 function of derive \n"; 	   
    } 
    void f3()                     		//仍为普通函数，同名覆盖
    { 
		cout<<"f3 function of derive \n";	   
    } 
};
