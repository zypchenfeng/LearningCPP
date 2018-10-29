// hello.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
	int i = 7;
	int *ip = &i; 
    printf("This is the address of my pointer %d \n", ip);
    return 0;
}
