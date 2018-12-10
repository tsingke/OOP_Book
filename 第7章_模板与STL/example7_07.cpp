//example7_07.cpp:成员函数at()的使用。
#include <vector>
#include <iostream>
using namespace std;
int main()
{  vector< int > vi( 10, 4);               //使用默认构造函数申请10个元素并初始化为4
   vi[0] = 100;                         //重载运算符[ ]
   try
   {        cout<< vi.at(10) <<endl;         //测试下标10是否越界，并抛出异常
   }
   catch(std::out_of_range )
   {        cout<<"out of range"<<endl;        //异常处理
   }
   for(int i=0; i<10 ;i++)
	     cout<<vi[i]<<"    ";
   cout<<endl;
   return 0;
}
