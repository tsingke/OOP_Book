//main8.cpp
#include "student8.h"
#include <fstream.h>
const int M = 10;
int main( )
{
		Student  stu[M];
		char filename[80];
		ifstream inf("student8_data.txt");
		for(int i=0;i<M;i++)
		{
			inf >> stu[i];
		}
		inf.close();
		cout << "\n请输入数据文件名：";
		cin >> filename;   		//可以包含路径名文件名和扩展名
		ofstream outf(filename);
		for(i=0;i<M;i++)
			outf << stu[i];
		outf.close();
		return 0;
}
