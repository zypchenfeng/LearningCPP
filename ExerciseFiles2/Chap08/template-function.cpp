// template-function.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <string>
using namespace std;

template <typename T> T maxof ( T a, T b ) {
    return ( a > b ? a : b );
}

int main( int argc, char ** argv ) {
    printf("max is: %s\n", maxof( "this", "what" ));
    return 0;
}
