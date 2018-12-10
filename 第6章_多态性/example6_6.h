//example6_6.h：在类Matrix中成员函数重载函数调用运算符"()"
#include<iostream.h>
class Matrix                     		//定义矩阵类
{
private:
    int  *m ;                    		//利用m申请动态空间存放矩阵的元素
    int  row;                    		//矩阵的行数
    int  col ;                    		//矩阵的列数
public:
    Matrix(int, int);
    int & operator()(int,int);       		//重载函数调用运算符"()"
};