//example7_06.cpp :容器重分配即容量测定举例。
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{  vector <int> vs;
  vs.reserve(10);                                  //得到至少10个整数s的空间
  vs.push_back(1);                                //插入元素1
  vs.push_back(2);                                //插入元素2
  cout<<"size: "<< vs.size()<<endl;                  //输出：2
  cout<<"capacity: "<<vs.capacity()<<endl;           //输出：10
  cout<<"there's  "<<vs.capacity() - vs.size()
      <<"empty elements before reallocation"<<endl;
  vs.resize(20);
  cout<<"size: "<< vs.size()<<endl;                  //输出 20
  cout<<"capacity: "<<vs.capacity()<<endl;           //输出20;
  return 0;
}
