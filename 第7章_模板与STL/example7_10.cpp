//example7_10指针作为迭代器用于STL的find()算法来搜索普通的数组
#include <iostream.h>
#include <algorithm>
using namespace std;
#define SIZE 10
int iarray[SIZE];
int main()
{
  iarray[5] = 50;
  int* ip = find(iarray, iarray + SIZE, 50);
  if (ip == iarray + SIZE)
    cout << "50 not found in array" << endl;
  else
    cout << *ip << " found in array" << endl;
  return 0;
}
