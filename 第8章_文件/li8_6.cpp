//li8.11.cpp：在类Sample中重载">>"和"<<"，在主函数中进行调用
#include <iostream.h>
class Sample 
{   int x,y;
public:
    Sample(int m=0,int n=0):x(m),y(n)
    {}
    friend ostream & operator<<(ostream & stream,const Sample &s);
    friend istream & operator >>(istream & stream,Sample &s);
};
ostream & operator<<(ostream & stream,const Sample &s)
{   stream<<"x="<<s.x<<",y="<<s.y<<endl;
    return stream;
}
istream & operator >>(istream & stream,Sample &s)
{   cout<<"Input x & y"<<endl;
    cout<<"x:";    stream>>s.x;
    cout<<"y:";    stream>>s.y;
    return stream;
}
void main()
{   Sample a(1,2),b,c;            		//定义3个对象
    cout<<"a object is:\n";
    cout<<a;                    		//相当于operator<<(cout,a);语句
    cin>>b>>c;                  		//相当于operator(operator>>(cin,b),c);语句
    cout<<"b and c objects are:\n";
    cout<<b<<c;               		//相当于operator(operator<<(cout,b),c);语句
}
