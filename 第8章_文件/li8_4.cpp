//li8_4.cpp：用操纵函数setw设置域宽示例
#include<iostream>
#include<iomanip>
using namespace std;
void main()
{   int i=6789;
    int j=1234;
    int k=10;
    cout << setw(6) << i << j << k << "\n";
    cout << setw(6) << i << setw(6) << j << setw(6) << k;
}
