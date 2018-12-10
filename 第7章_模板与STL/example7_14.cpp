//example7_14.cpp: 不改变序列算法的应用举例
#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;
int main()
{
	int intarr_1[]={3,4,5,7,7,7,6,8,9,8};
	vector <int> ivect_1(intarr_1 , intarr_1 + sizeof(intarr_1)/sizeof(int));
	int intarr_2[]={3,4,5,7,7,7,9,7};
	vector <int> ivect_2(intarr_2 , intarr_2 + sizeof(intarr_2)/sizeof(int));
     //找出相邻两个元素值相等的第一个元素
	cout<<*adjacent_find( ivect_1.begin(), ivect_1.end())<<endl;
     //统计ivect_1中元素值为7的元素个数
	cout<<count( ivect_1.begin(), ivect_1.end(), 7)<<endl;
     //找出ivect_1中元素值小于7的元素个数
	cout<<count_if( ivect_1.begin(), ivect_1.end(),bind2nd(less<int>(),7))<<endl;
     //判断两个容器ivect_1和ivect_2是否相等（0为假，1为真）
	cout<<equal(ivect_1.begin(),ivect_1.end(),ivect_2.begin())<<endl;
	return 0;
}

