
//example3_4.cpp：分散定义类成员示例。
#include <iostream>
using namespace std;
class Date
{
public:             			//公有成员函数
   void SetDate(int , int , int ); 
private:              			//定义私有数据成员
   int year,  month,  day;
public:               			//定义公有成员函数
   int GetYear( );
   int GetMonth( );
   int GetDay( )；
};


