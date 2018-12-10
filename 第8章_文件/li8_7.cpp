//li8_7.cpp：使用"<<"运算符向文件中写内容，使用">>"运算符从文件中读内容示例
#include<fstream>
#include <iostream>
using namespace std;
void CreateFile(char *s);
void ReadFile(char *s);
int main(  )
{   CreateFile("f1.txt");            		//建立f1.txt文件
    ReadFile("f1.txt");             		//读取f1.txt文件内容并在显示器上显示
	return 0;
}
void  CreateFile(char  *s)         		//建立一个文本文件
{   ofstream outf (s);               	//定义输出流对象outf，打开s文件
    if(! outf)                     		//判断文件是否正常打开
    {   cout << "Cannot open the file\n";
        return ;
    }
    outf << 10 << " " << 71.2718;    		//向文件中写入一个整数、一个实数
    outf << "\"This is a short text file.\"\n"; 
    outf.close();                  		//关闭文件
}
void ReadFile(char * s)             		//读取一个文本文件的内容
{   int i=0;                      		//定义若干内存变量
    double d=0;
    char str[50];
    ifstream inf( s);                		//定义输入流对象inf，打开s文件
    if(!inf)                       		//判断文件是否正常打开
    {   cout << "Cannot open the file\n";
        return ;
    }
    inf >>i>>d;                   		//从文件中读数据赋给内存变量
    cout <<i<<" " <<d;             		//向屏幕输出内存变量的值
    inf.getline(str,50);              		//从文件中读出含空格的字符串
    cout<<str<<"\n";               	//向屏幕输出字符串的值
    inf.close();
}
