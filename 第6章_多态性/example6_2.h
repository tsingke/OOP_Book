//example6_1.h: 类Point的定义
#include<iostream.h>
class Point                              	//定义类Point
{public: 
    Point(int a=0, int b=0);                 //构造函数
    void print();                         	//打印函数
    Point operator + ( Point p1);           //以成员函数形式重载运算符 +
    friend Point operator - (Point p1,Point p2); 	//以友元形式重载运算符-
private:
    int x;    
    int y;  
};