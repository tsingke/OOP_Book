//example6_3.cpp:类Array成员函数的实现
#include"example6_3.h"
Array::Array(int arraySize)  
{ 
	size = arraySize;
    ptr = new int[size];
    for( int j=0; j<size; j++)
        ptr[j] = j;
}
Array::Array(const Array &init)  
{
	size = init.size;
    ptr = new int[size+1];
    for( int j=0; j<size; j++)
        ptr[j] = init.ptr[j];
}
Array::~Array()          
{ 
	delete [ ] ptr;  
}
void Array::print()    
{ 
	for( int j=0; j<size; j++)
        cout << ptr[j]  <<  "," ;
    cout<<endl;
}
int Array::getSize() const  
{
	return size;  
}
Array Array::operator++()
{ 
	for( int j=0; j<size; j++)
        ++ptr[j];      
    return *this;
}
Array & Array::operator+=(Array &v) 
{ 
	int temp=v.size>size?size:v.size;
    for( int j=0; j<temp; j++)
        ptr[j] = ptr[j] + v.ptr[j];
    return *this;                  	
}