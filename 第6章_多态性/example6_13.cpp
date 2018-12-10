//example6_13.cpp: 纯虚函数在派生类的实现
#include "example6_13.h"
double Triangle::area() const 
{ 
	return 0.5*base*hight;   
}
double Rectangle::area() const 
{ 
	return hight*width;   
}
double Circle::area() const 
{ 
	return PI*radius*radius;   
}