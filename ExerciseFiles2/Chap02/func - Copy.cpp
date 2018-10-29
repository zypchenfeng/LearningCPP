// func.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

double func( int i, int j)
{
    puts("this is func()");
	return i * j;
}

int main( int argc, char ** argv )
{
	double (*fp)(int, int) = func;
    puts("this is main()");
    printf("The value is: %f\n", fp(42, 2));
    return 0;
}

