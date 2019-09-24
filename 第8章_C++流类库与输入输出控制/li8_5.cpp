//li8_5.cpp：自定义输出控制符函数setup并调用
#include<iostream>
#include<iomanip>
using namespace std;
ostream &setup(ostream &stream)
{   stream.setf(ios::left);
    stream << setw(10) << setfill('$');
    return stream;
}
int main()
{   cout <<10 <<endl << setup << 10<<endl;
    return 0;
}
