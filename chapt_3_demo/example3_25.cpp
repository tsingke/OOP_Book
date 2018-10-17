//li3_25.cpp：友元类的应用，本例中Student类作为Date的友元类
#include<iostream>
#include<string>
using namespace std;
class Student;               		//向前引用，因为在后面定义的Date类中用到Student类型
class Date                 		//在本例中对Date类做了部分修改，使之简单化
{   int year, month, day;
public:
    Date(int , int , int );  
    void Display ();
    friend Student;         		//类Student作为Date的友元类
};	
class Student  
{private:
    char *specialty;
char *name;
public:
    Student(char *pn, char *pSpec);
    ~Student();
    void Display (Date &);      		//类Student中所有成员函数均可直接访问类Date中所有成员
};
Date::Date(int y,int m,int d):year(y),month(m),day(d)
{   }
void Date:: Display ( )
{   cout<<year<<"-"<<month<<"-"<<day<<endl;    
}
Student::Student(char *pn, char *pSpec)
{   if(pSpec)
	{	specialty=new char[ strlen( pSpec ) + 1];
		strcpy( specialty, pSpec );
	}
     else  specialty = 0;
	 if ( pn )
	{	name = new char[ strlen( pn ) + 1];
		strcpy(name, pn);
	}
     else  name = 0;
}
Student::~Student()
{   if  ( specialty ) delete [ ]specialty; 
    if( name ) delete [ ]name; 
}
void Student:: Display ( Date& obj )  		    // Student::Print( )可直接访问Date类中所有成员         
{   cout<<name<<endl;
	   cout<<specialty<<endl;      		//输出本类对象的数据成员
    obj. Display () ;             		    //调用声明友元类所在类对象的成员函数
    cout<<"Date's another format is:";
    cout<<obj.month<<"_"<<obj.day<<"_"<<obj.year<<endl;
                         		    //直接调用声明友元类所在类对象的私有数据成员
}
int main()
{   Student boy( "zhang",  "computer" );      	//定义Student类对象
    Date birthday(1990,10,17);  		     //定义Date类对象   
    boy. Display ( birthday ) ;       		     //显示对象boy和birthday信息
return 0;
}
