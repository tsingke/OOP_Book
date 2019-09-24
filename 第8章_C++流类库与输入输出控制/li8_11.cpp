//li8_11.cpp：将文本文件test.txt文件的前五个字符倒置
#include<iostream>
#include<fstream>
using namespace std;
int main()
{   fstream inout("d:\\test.txt", ios::in | ios::out);  	//打开一个文本文件，可读写
    if (!inout)                           	//判断文件是否正常打开
    {   cout<<"Cannot open input file.\n";
        return 0;
    }
    long e=5, i, j;
    char c1, c2;
    for(i=0, j=e-1; i<j; i++, j--)             	//控制互换，i，j位置上的字符交换
    {   inout.seekg(i, ios::beg);
        inout.get(c1);
        inout.seekg(j, ios::beg);
        inout.get(c2);
        inout.seekg(i, ios::beg);
        inout.put(c2);
        inout.seekg(j, ios::beg);
        inout.put(c1);
    }
    inout.close();                       	//关闭文件
	return 0;
}
