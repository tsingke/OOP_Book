//li8_9.cpp：用write()和read()函数进行二进制文件的读写
#include<iostream.h>
#include<fstream.h>
#include<string.h>
void CreateBiFile(char *s);
void ReadBiFile(char *s);
int main()
{   CreateBiFile("test.dat");    	//建立二进制文件test.dat
    ReadBiFile("test.dat");       	//读取二进制文件test.dat中的内容并输出
	return 0;
}
void CreateBiFile(char *s)        			//建立二进制文件
{   ofstream out(s);             			//定义流对象out并打开文件，准备向文件写入数据
    if(!out)                    			//检查文件是否正常打开
    {   cout<<"Cannot open output file.\n";
        return ;
    }
    double num=98.64;          
    char str[]="This is a test of read and write\n";
    out.write((const unsigned char *)&num,sizeof(double)); 
                            			//写一个double值
    out.write(str,strlen(str));        			//再向文件写入一个字符串
    out.close();                  			//关闭文件
}
void ReadBiFile(char *s)           			//读取二进制文件的内容
{   ifstream in(s);                			//定义流对象in并打开文件，准备读文件数据
    if(! in)                      			//检查文件是否正常打开
    {   cout<<"Cannot open input file.\n";
        return ;
    }
    double num;
    char str[80]="";               			//初始化字符串，否则输出结果后面带有随机字符值
    in.read((unsigned char *)&num,sizeof(double)); 
            							//文件内容读到double变量
    in.read(str,40);                			//文件内容读到字符数组
    cout<<num<<' '<<str;          			//输出从文件中获得值的变量
    in.close();                    			//关闭文件
}
