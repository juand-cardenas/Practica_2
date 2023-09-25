/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{int *a;
unsigned short b[4][2] = {{77, 50}, {5, 2}, {28, 39}, {99, 3}};

cout << *b++ << std::endl;
}

//b=0x7ffd3a08e6d0
//b+2=0x7ffd5f1c25e8
//*(b+2)=0x7fffe8387108
//*(b+2)+1=0x7fffe50b701a
//*(*(b+2)+1)=39
//b[3][1]=3
//*b++=error: lvalue required as increment operand