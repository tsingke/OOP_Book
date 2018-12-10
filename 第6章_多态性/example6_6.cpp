//example6_6.cpp：实现类Matrix中成员函数
#include"example6_6.h"
Matrix::Matrix(int r, int c)
{
	row=r;
    col=c;
    m=new int[row * col];      		//申请动态空间存放矩阵的元素
    for(int i=0; i<r*c; i++)   		//初始化矩阵
        *(m+i)=i;
}
int & Matrix::operator() (int r, int c) 
{ 
	return (*(m+r*col+c));  
}                              		//返回矩阵的r行c列元素引用
