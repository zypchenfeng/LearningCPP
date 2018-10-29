#include "student.h"

Student::Student()
{
    cout<<"Assigning initial value to the student class"<<endl;
    id = 999999;
    name = "Unknown";
    gradDate = 99999;
}

Student::~Student()
{
    //dtor
}
