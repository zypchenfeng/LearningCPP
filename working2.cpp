#include <iostream>
#include <string>
#include <utility>
#include <assert.h>

using namespace std;

int input1(){
    cout<<"Input the first integer: ";
    int x;
    cin >> x;
    // cout << x << endl;
    return x;
}

char getOperation(){
    char op;
    do
    {
        cout<<"Enter an operation ('+', '-', '*', '/'): ";
        cin >> op;
    } 
    while (op!='+' && op!='-' && op != '*' && op !='/');
    // cout << op << endl;
    return op;
}

int input2(){
    cout<<"Input the second integer: ";
    int x;
    cin >> x;
    cout << x << endl;
    return x;
}

int add(int x, int y){
    return x + y;
}

int subtract(int x, int y){
    return x - y;
}

int multiply(int x, int y){
    return x * y;
}

int divide(int x, int y){
    assert(y!=0);
    return x / y;
}

typedef int(*arithmeticFcn)(int, int);


struct arithmeticStruct{
    char op;
    arithmeticFcn fcn;
};

static const arithmeticStruct arithmeticArray[] {
    {'+', add},
    {'-', subtract},
    {'*', multiply},
    {'/', divide}
};

arithmeticFcn getArithmeticFunction (char op)
{
    for (const auto &arith: arithmeticArray)
    {
        if (arith.op == op)
            return arith.fcn;
    }
    
    return add;       
}

int main()
{
    int x = input1();
    char op = getOperation();
    int y = input2();

    arithmeticFcn fcn = getArithmeticFunction(op);
    cout << x << ' ' << op << ' ' << y << " = " << fcn(x, y)<<'\n';

    return 0;
}
