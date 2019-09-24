//li8_10.cpp：实现Student类
#include <iomanip.h>
#include <string.h>
#include "li8_10.h"
Student::Student(char *nu,char *na,char *se,int s) 
{       strcpy(num,nu);
        strcpy(name,na);
        strcpy(sex,se);
        score=s;
}
ostream & operator<<(ostream &out,const Student &s)  		//重载"<<"运算符         
{   out<<setw(10)<<s.num<<setw(18)<<s.name<<setw(4)<<s.sex<<setw(5)<<s.score<<endl;
    return out;
}
