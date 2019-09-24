//第1个文件: example4_04_Circle.h
#ifndef _Circle                        //条件编译,避免重复包含
#define _Circle                        //宏名不要与类名相同
class Circle
{
private:
	    double Radius;                    //定义圆的半径
	    const double PI;                   //定义一个常数据成员PI代表圆周率
public:
	    Circle(double r=0): PI(3.1415926)    //只能通过初始化列表初始化常数据成员
{
		   Radius=r;
	    }
	    double Area();                    //求圆的面积
	    double Circumference();            //求圆的周长
     double GetRadius( )const;          //常成员函数，获取半径值，此例新增加
};
#endif

