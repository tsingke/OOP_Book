//example7_12.cpp:ÈÝÆ÷µü´úÆ÷¾ÙÀý
#include <iostream.h>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{  vector<int> intVector(20,5);
   intVector[5] = 10;
   vector<int>::iterator intIter = find(intVector.begin(), intVector.end(), 10);
   if ( intIter != intVector.end() )
      cout << *intIter << " found in vector" << endl;
   else
      cout << "10 not found in vector" << endl;
   return 0;
}




