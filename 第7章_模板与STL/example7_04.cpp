//example7_04.cpp：单向链表类模板的定义及使用示例
#include<iostream>
using namespace std;
template <class Type> 
class Link
{public:
    Link();                      		//构造函数
    void Insert(Type&) ;           		//插入结点
    void PrintLink();              		//输出链表信息
    ~Link();
protected:
    struct Node
    {   Node* next;
        Type* p;                 		//结点信息用指针类型
    };
    Node* head;
};
template<class Type>
Link<Type>::Link()
{   head=0;  
}
/*在链首插入新结点，使每个新结点都是新的第一个结点*/
template<class Type>
void Link<Type>::Insert(Type& t)
{   Node* temp=new Node;
    temp->p=&t;
    temp->next=head;
    head=temp;
}
template<class Type>
void Link<Type>::PrintLink()
{   for( Node *pp=head ;  pp ;  pp = pp->next )
    {   cout<<*(pp->p)<<"  ";	
    }
    cout<<endl;
}
template<class Type>
Link<Type>::~Link()
{   Node* pp;
    while( pp = head )
    {   head = head->next;
        delete pp->p;
        delete pp;
    }
}
int main()
{   
	Link< double > DoubleLink;
    for( int i=1;  i<7 ;  i++ )
    {   
		DoubleLink.Insert(*new double ( i + 0.1 ) );	
    }
    DoubleLink.PrintLink( );
	return 0;
}
