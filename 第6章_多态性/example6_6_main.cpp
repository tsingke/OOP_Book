//example6_6_main.cpp：测试重载的函数调用运算符"()"
#include"example6_6.h"
int main()
{ 
	Matrix  am(10,10);           		//创建矩阵对象am
    cout << "am(2,3)= " <<am(2,3)<< endl;    
    am(2,3)=900;                		//相当于am.operator()(2,3)=900;语句
    cout << "am(2,3)= " <<am(2,3)<< endl;
	return 0;
}
