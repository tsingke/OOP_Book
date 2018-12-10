//example7_17.cpp: string初始化应用举例
#include <string>
#include <iostream>
using namespace std;
int main()
{
  const char text[] = "hello world";
  string s1 = text;  //用C字符串来初始化string对象
  string s2(s1);  //拷贝构造函数
  string s3(&text[0], &text[5]); //C字符串的部分；s3 = "hello"
  string s4(10, '0'); //用一个0的序列来初始化
  string s5 ( s2.begin(), s2.find(' ')); //通过其他string的部分来初始化
                                         //s5 = "hello"
  cout<<s1<<endl;
  cout<<s2<<endl;
  cout<<s3<<endl;
  cout<<s4<<endl;
  cout<<s5<<endl;
  return 0;
}

