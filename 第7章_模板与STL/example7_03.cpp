//example7_03.cpp：类模板的定义
#include<iostream>
using namespace std;
template < class T1 , class T2 >         		//类模板中用到两种类型参数
class Myclass
{   public:
        Myclass( T1 xx , T2  yy );
        void Print()              		//类模板中成员函数可以在类体内定义
        {   cout<<"x="<<x<<",y="<<y<<endl;  
        }
    private:
        T1 x;
        T2 y;
};
template<class T1,class T2>         		//类模板中成员函数可以在类体外定义
Myclass<T1,T2>::Myclass(T1 xx,T2 yy)
{   x=xx;
    y=yy;
}
int main()
{   Myclass<int ,char> obj(10,'a');           //Myclass<int，char>为模板类
    obj.Print();
    return 0;
}
