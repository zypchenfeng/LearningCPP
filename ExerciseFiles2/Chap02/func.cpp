// func.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

void func()
{
    puts("this is func()");
}

int main( int argc, char ** argv )
{
	void (*fp)() = func;
    puts("this is main()");
    fp();
    return 0;
}

