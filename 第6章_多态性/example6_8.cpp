//example6_8.cpp：在复数类Complex中用友元形式重载前缀"++"、后缀"++"运算符
#include "example6_8.h"
Complex::Complex(float r, float i) 
{
	real=r;  
    imag=i;
}
void Complex::print()
{
	cout << real;                                
    if( imag != 0 ) 
    {   if( imag > 0 ) cout << " + " ;                  
        cout << imag << " i " ;  
    }
    cout << endl;                            
}
Complex operator ++ ( Complex &a)     
{ 
	++a.real;
    ++a.imag;
    return a;
}

Complex operator ++ ( Complex &a,int)   
{ 
	Complex temp(a);          	                  //复制a对象到临时对象temp中	
    a.real++ ;                  	                  //对a对象的实部自增1
    a.imag++ ;                                 	    //对a对象的虚部自增1
    return temp;                	                  //返回temp，即改变以前的a
} 

