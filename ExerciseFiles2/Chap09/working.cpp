// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
    const static int bufsize = 256;
    char buf[bufsize];
    fputs ("Prompt: ", stdout);
    fgets (buf, bufsize, stdin);
    fputs (buf, stdout); 
    return 0;
}
