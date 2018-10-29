#include <iostream>
#include <string>
using namespace std;

class student
{
    int id;
    int gradDate;
    string name;
public:
    student();
    void set_ID(int id_in);
    void set_name(string name_in);
    void set_gradDate(int gradDate_in);
    void print();
    int get_ID();
    int get_gradDate();
    string get_name();
};
student::student()
{
    cout<<"Assigning initial value to the student class"<<endl;
    id = 999999;
    name = "Unknown";
    gradDate = 99999;
}
void student::set_ID(int id_in)
{
    id = id_in;
}
void student::set_gradDate(int gradDate_in)
{
    gradDate = gradDate_in;
}
void student::set_name(string name_in)
{
    name = name_in;
}
int student::get_ID(){return id;}
int student::get_gradDate(){return gradDate;}
string student::get_name(){return name;}
void student::print()
{
    cout<<name<<' '<<id<<' '<<gradDate<<'\n';
}
