## This is for recording of C++ notes

#### Lesson 1  Basics

1. `#include <stream>`: here the `<>` means the default library. If want to search for the current library, use `#include "stream"`
2. Comment:
    1. `/*` and `*/` signify comment block.
    2. `//` uses for inline Comment
3. Namespace: `using namespace std;`
4. Write to the console: `std::cout<<"This is a example!\n";`
5. Format output, the most common ones are:
   1. \n - newline
   2. \t - tab
   3. std::setw(15) set total width to 15
6. File I/O
    ```
    - Include the <fstream> library
    - Create a stream (input, output, both)
         - ofstream myfile; (for writing to a file)
         - ifstream myfile; (for reading a file)
         - fstream myfile; (for reading and writing a file)
    - Open the file  myfile.open(“filename”);
    - Write or read the file
    - Close the file myfile.close();
    ```
7. User input: a. single input use `std:cin`; b. input a string use `std::getline(std::cin, VariableName)`
8. String operations
    1. Include the Stringstream library.

    `#include<sstream>`
    2. Use getline to get the string from the user

        `std::getline(std::cin, stringVariable);`
    3.  Convert the string variable to a float variable.

     `std::stringstream(stringVariable) >> numericVariable`

#### Lesson 2 Compilation and Execution
###### Compile
1. Open a terminal window
2. change the working directory to the directory of the program
3. Make sure names of folders and files do not have spaces in them
4. To compile the program: g++ filename.cpp -o executableName
5. To execute the program: ./executableName
###### Common mistakes when executing in the terminal:
1. Make sure there are no spaces in filenames
2. Make sure all the files you need are in the working directory (including header files), use 'ls' to check

#### Lesson 3 Arithmetic operations
1. Has to include the math library `#include <cmath>`
2. Arithmetic operators ( +, -, \*, /, % )
3. Compound assignment (+=, -=, \*=, /=, %=, >>=, <<=, &=, ^=, |=)
4. Increment and decrement (++, --)
    1. prefix `++i`: evaluates to the final value of `x`, once it is __already increased__
    2. postfix `i++`: evaluates to the value that `x` had __before being increased__
5. Relational and comparison operators ( ==, !=, >, <, >=, <= )

#### Lesson 4 Control Flow
1. use `size_t`
```
#include <cstddef> //don't forget to include the library
.
.
.
for(size_t i =0; i<5; i++)
```

#### Lesson 5 Pointers
1. Get pointer of a variable: `a` is a variable, and `&a` is the address(pointer) of the variable `a`
2. Dereferencing: use pointer to access the variable:
  1. adding the operator `*` before the pointer variable name

  ```
  // this is an integer variable with value = 54
  int a = 54;

  // this is a pointer that holds the address of the variable 'a'.
  // if 'a' was a float, rather than int, so should be its pointer.
  int * pointerToA = &a;  // notice the space between * and pointerToA

  // If we were to print pointerToA, we'd obtain the address of 'a':
  std::cout << "pointerToA stores " << pointerToA << '\n';

  // If we want to know what is stored in this address, we can dereference pointerToA:
  std::cout << "pointerToA points to " << * pointerToA << '\n';
  ```

#### Lesson 9: Overloading
1. Overloading can be:
  * class (constructors: w/ or w/o initial value)
  * Operators (int operator +)

#### Lesson 10: Templates
1. Syntax1
  ```
  template <typename T>  // this is required, tell the compiler we are using a template
  T functionName (T  parameter1,T  parameter2,...)
  {
      function statements;
  }
  ```
2. Syntax2: if the type is different
  ```
  template <typename T, typename U, typename V>
  T functionName (U  parameter1, V  parameter2,...)
  {
      function statements;
  }
  ```
3. Template for classes
  ```
  template <class T>
  class StudentRecord
  {
  ```
  * The member functions must all be treated as generic functions. You will have to add the template command to each member function.
  ```
  template<class T>
  StudentRecord<T>::StudentRecord(T input)
  {
      grade=input;
  }
  ```
