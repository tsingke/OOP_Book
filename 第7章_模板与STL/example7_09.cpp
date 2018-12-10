//example7_09.cpp:迭代器的定义与使用
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <char> v;
    v.push_back('a');                         
    v.push_back('b');                         
    v.push_back('c');
	v.push_back('d');
	for(int i=0;i<4; i++)
		cout<<"v["<<i<<"]=="<<v[i]<<endl;
	vector<char>::iterator p=v.begin();
	cout<<"The third is "<<v[2]<<endl;
	p++;
	cout<<*p<<endl;
	p++;
	cout<<*p<<endl;
	p--;
	cout<<*(p+2)<<endl;
	return 0;
}
