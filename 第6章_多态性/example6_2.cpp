//example6_2.cpp: 类成员函数的实现
#include"example6_2.h"
Point::Point(int a, int b) 
{
	x=a; 
    y=b;
}            
void Point::print() 
{ 
	cout <<"("<< x << ","<< y <<")"<< endl; 
}  
Point Point::operator + ( Point p1)   
{ 
	Point p;
	p.x = x + p1.x;
	p.y = y + p1.y;
	return p;
}
Point operator - (Point p1,Point p2)
{
	Point p;
	p.x = p1.x - p2.x;
	p.y = p1.y - p2.y;
	return p;
}