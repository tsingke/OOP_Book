// Li3_14.cpp文件: 包含Date4.h文件，主函数中定义Date类的对象数组，注意其定义、初始化及访问
#include"Date4.h"
int main()
{   Date array[3]={ Date(2011,5,1),  Date(2011,10,1) };
    for(int i=0; i<3;  i++)
    array[i].Display( );
	   return 0;
}
