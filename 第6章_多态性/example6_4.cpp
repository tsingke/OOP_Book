//example6_4.cpp：在复数类Complex中重载运算符"+"、前缀"++"的实现
#include "example6_4.h"
Complex::Complex(float r, float i) 
{
	real=r;  
    imag=i;
}
void Complex::print()
{ 
	cout << real;                                
    if( imag != 0 ) 
    {
		if( imag > 0 ) cout << " + " ; 
			cout << imag << " i " ;  
    }
    cout << endl;                            
}
Complex operator + (const Complex &a, const Complex &b)
{
	Complex temp;
    temp.real = a.real + b.real;
    temp.imag = a.imag + b.imag;
    return temp;
}
Complex operator ++ ( Complex &a)     
{
	++a.real;
    ++a.imag;
    return a;
}