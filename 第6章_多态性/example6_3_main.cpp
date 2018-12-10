//example6_3_main.cpp:类Array重载运算符+=和++后的测试
#include"example6_3.h"
int main()
{
	Array a(5), b(10), c(8);        		//定义3个数组对象，长度不同
    cout<<"original a array:"<<endl; 
    a.print();                    		//输出原始的a对象
    cout<<"original b array:"<<endl;  
    b.print();                    		//输出原始的b对象
    cout<<"original c array:"<<endl;  
    c.print();                    		//输出原始的c对象
    a+=b;                       		//隐式调用重载的"+="运算符，相当于a.operator+=(b);语句
    cout<<"after added with b ,a array:"<<endl;
    a.print();                    		//输出改变后的a对象
    c.operator +=(b);             		//显式调用重载的"+="运算符，相当于c+=b;语句
    cout<<"after added with b ,c array:"<<endl;
    c.print();                   		//输出改变后的c对象
    ++b;                        		//隐式调用重载的前缀"++"运算符，相当于b.operator++();语句
    cout<<"after ++, b array:"<<endl;
    b.print();                   		//输出改变后的b对象
	return 0;
}
