#include <iostream>
#include <string>
using namespace std;

class Student
{
    public:
        Student();
        virtual ~Student();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        int GetgradDate() { return gradDate; }
        void SetgradDate(int val) { gradDate = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }
        void print(){cout<<name<<' '<<id<<' '<<gradDate<<'\n';}

    protected:

    private:
        int id;
        int gradDate;
        string name;
};
