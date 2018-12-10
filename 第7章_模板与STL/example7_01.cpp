//example7_01.cpp：函数模板示例
#include<iostream>
using namespace std;
template<class T>                   			//类型未知，用类型参数T表示
T Max(T a,T b)                       			//返回两个同类型的形式参数a，b中的较大者
{	
	return a>b ?a :b ;                        
}
int main()
{   
	cout<<"Max(2,8) is "<<Max(2,8)<<endl;  		//用实参的类型int型自动实例化T
    cout<<"Max('2','8') is "<<Max('2','8')<<endl;		//用实参的类型char型自动实例化T
    return 0;
}
