class Base
{
public:
    virtual const char* getName(){ return "Base";}
};

class Derived: public Base
{
public:
    virtual const char* getName(){ return "Derived"; }
    char* getName() const { return "not virtual derived"; }
};

#include <iostream>
int main()
{
    Derived derived;
    Base &base = derived;
    std::cout << base.getName() << std::endl;
    const Derived d2;
    std::cout<< d2.getName() << std::endl;
}
