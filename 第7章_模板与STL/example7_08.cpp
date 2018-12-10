//example7_08.cpp:成员函数front()和back()的使用。
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector <char> v_ch;
  v_ch.push_back('A');
  v_ch.push_back('B');
  v_ch.push_back('C');
  cout<<"front: " << v_ch.front() << endl; 
  cout<<"back: " << v_ch.back() << endl; 
  v_ch.pop_back(); //remove v_ch[1]
  cout<<"back: " << v_ch.back() << endl; 
  return 0;
}


 

