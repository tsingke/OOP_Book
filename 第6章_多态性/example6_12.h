//example6_12.h: 纯虚函数的定义
#include <iostream>
using namespace std;
class Point
{
public:
    virtual void Draw ()=0; //定义纯虚函数
};
class Line:public Point
{
public:
    void Draw();           //在派生类Line中定义Draw函数，给出实现代码
 };
class Circle:public Point
{
public:
    void Draw();           //在派生类Circle中定义Draw函数，给出实现代码
};
