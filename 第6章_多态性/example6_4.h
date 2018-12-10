//example6_4.h：在复数类Complex中用友元形式重载"+"、前缀"++"运算符
#include <iostream.h>
class Complex                    		//定义类 Complex
{
private:
    float  real;
    float  imag;
public:
    Complex(float r=0, float i=0) ;
    void print();
    friend Complex operator + (const Complex &a, const Complex &b);  
    								//友元重载"+"，两个形式参数	    
    friend Complex operator ++ ( Complex &a);  
    								//友元重载单目运算符前缀"++"，提供一个引用参数
};