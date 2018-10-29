// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
	const int iONE = 1;
	const int iTWO = 2;
	const int iTWENTY = 20;
	const int iTHREE = 3;
	const int iFOUR = 4;
	
	int i = 3;
	switch (i)
	{
	case iONE:
		puts("one");
		break;
	case iTWO:
	case iTWENTY:
		puts("two");
		break;
	case iTHREE:
		puts("three");
		break;
	case iFOUR:
		puts("four");
		break;
	default:
		break;
	}
	
    return 0;
}
