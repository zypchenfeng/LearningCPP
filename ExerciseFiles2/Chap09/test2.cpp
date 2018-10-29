#include <iostream>
 
void setToSix(const int *tempPtr)
{
    *tempPtr = 6; // we're changing the value that tempPtr (and ptr) points to
}
 
int main()
{ 
    // First we set ptr to the address of five, which means *ptr = 5
    int five = 5;
    int *ptr = &five;
	
    // This will print 5
    std::cout << *ptr;
 
    // tempPtr will receive a copy of ptr
    setToSix(ptr);
 
    // tempPtr changed the value being pointed to to 6, so ptr is now pointing to the value 6
 
    // This will print 6
    if (ptr)
        std::cout << *ptr;
    else
        std::cout << " ptr is null";
 
    return 0;
}
