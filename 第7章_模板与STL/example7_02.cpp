//example7_02.cpp：重载模板函数示例
#include<iostream>
#include<string>
using namespace std;
template<class T>
T Max(T a,T b)
{	return a>b?a:b;  }
char* Max(char* a,char* b)
{   return (strcmp(a,b)>0?a:b); }
int main()
{   cout<<"Max('2','8') is "<<Max('2','8')<<endl;
    cout<<"Max(\"ABCD\",\"ABAB\") is "<<Max("ABCD","ABAB")<<endl;
	return 0;
}
