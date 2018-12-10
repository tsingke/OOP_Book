//li8_10_main.cpp: 定义创建文件、读出文件的函数及主函数
#include <fstream.h>
#include "li8_10.h"
void CreateBiFile(char *filename)           			//建立一个二进制文件
{   ofstream out(filename);                			//打开文件
    Student stu[3]={Student("B11041015","陈秋寒","男",92),
                 Student("B11041111","宋张文霄","男",95),
                 Student("B11050902","米合热阿依.依明","女",98)};
    out.write((char *)stu,sizeof(Student)*3); 			//一次向文件中写入3条记录
    out.close();                        				//关闭文件
}
void ReadBiFile(char *filename)           			//从二进制文件读取信息输出
{   Student stu[5];
    int i=0;
    ifstream in(filename);                			//打开文件
	/*
    while (!in.eof())                  				//当文件结束标记未被标识时
          in.read((char * )&stu[i++],sizeof(Student));       
               								//逐条读取记录放入数组
    for (int j=0;j<i-1;j++) cout<<stu[j];    				//实际记录条数为i-1
*/
 while (!in.eof())      
{   in.read((char * )&stu[i],sizeof(Student)); 
    cout<<stu[i];
    i++;
}



    in.close();                       				//关闭文件
}
int  main()
{    CreateBiFile("stu.dat");           				//调用函数建立保存学生信息的文件stu.dat
     ReadBiFile("stu.dat");            				//调用函数读取二进制文件stu.dat
     return 0;
}