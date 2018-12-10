//li8_8.cpp:利用get( )和put( )函数实现将文本文件的复制
#include <fstream>
#include <iostream>
using namespace std;
int main()
{   ifstream ifile("d:\\abc.txt");    	//打开被复制的源文件abc.txt，该文件事先已在D盘建立
    if(!ifile)                   		//判断文件是否被正常打开
    {   cout<<"abc.txt cannot be openned!"<<endl;
        return;
    }
    ofstream ofile("d:\\xyz.txt");      //在d盘根目录下建立目标文件xyz.txt
    if(!ofile)                     		//判断文件是否被正常打开
    {   cout<<"xyz.txt cannot be openned!"<<endl;
        return;
    }
    char ch;
    while(ifile .get(ch))            		//从源文件中读入一个字符给变量ch
        ofile.put(ch);             		//将变量ch的值写入目标文件
    ifile. close();                 		//关闭源文件
    ofile.close();                 		//关闭目标文件
	return 0;
}