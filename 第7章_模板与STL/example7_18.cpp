//example7_18.cpp: getline函数的应用举例
#include <string>
#include <iostream>
using namespace std;
int main()
{
  string subject(" We love ");
  string object; 
  getline(cin,object,'.');
  cout<<subject<<object<<endl;  
  return 0;
}

