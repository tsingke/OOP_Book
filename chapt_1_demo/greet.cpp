//源文件greet.cpp的代码，是Greet函数具体的实现代码
#include <iostream.h>
#include "greet.h"
void Greet()
{	char Name[20];
    cout<<"Enter your name:\n"; 
    cin.get(Name,19);
    cout<<"Greetings:"<<Name<<endl;
}
