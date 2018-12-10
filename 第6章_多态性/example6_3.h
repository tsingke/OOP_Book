//example6_3.h:类Array重载运算符+=和++
#include<iostream.h>
class Array                       		//定义类 Array
{
private:
    int  *ptr;                    		//动态申请空间存放数组的元素
    int  size;                    		//数组中实际元素个数
public:
    Array(int arraySize =10) ;       		//构造函数原型声明，提供默认参数值
    Array(const Array &);          		//拷贝构造函数原型声明
    ~Array();                     
    void print() ;                 		//定义输出函数
    int getSize() const;            		//得到数组元素个数            
    Array operator++();           		//重载单目运算符++，无参数
    Array &operator+=(Array &);   		//重载双目运算符+=，只有一个参数
};