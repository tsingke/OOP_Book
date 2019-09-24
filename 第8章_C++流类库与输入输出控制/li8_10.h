//li8_10.h:¶¨ÒåstudentÀà
#include <fstream.h>
class Student
{   char num[10];
    char name[20];
    char sex[3];
    int score;
public:
    Student(char *nu="",char *na="",char *se="",int s=0);
    friend ostream & operator<<(ostream &out,const Student &s);
};