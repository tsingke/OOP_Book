//example6_13.h: 包含抽象类的定义
#include<iostream>
using namespace std;
const double PI=3.1415;
class Shape                      		//定义抽象基类 Shape
{
public: 
    virtual double area() const=0;   	//声明纯虚函数
};
class Triangle: public Shape         	//定义派生三角形类Triangle
{
public:
    Triangle(double b,double h):base(b),hight(h)
    {   }
    double area() const ;           	//在派生类中定义纯虚函数的实现代码
private:
    double base,hight;
};
class Rectangle:public Shape        	//定义派生矩形类Rectangle
{
public:
    Rectangle(double h,double w):hight(h),width(w)
    {   }
    double area() const ;          		//在派生类中定义纯虚函数
private:
    double hight,width;
};
class Circle:public Shape           	//定义派生圆类Circle
{
public:
    Circle(double r):radius(r)
    {   }
    double area() const ;          		//在派生类中定义纯虚函数
private:
    double radius;
};