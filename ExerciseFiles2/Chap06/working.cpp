// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
    bool a = true;
    bool b = true;
    if (true || true) {
	puts("true");
    } else {
	puts("false");
    }
    return 0;
}
