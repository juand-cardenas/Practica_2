/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string.h>
using namespace std;

int main()
{int numero,factoria_1=1, factorial_2=1,multi,resul;
cout<<"ingrese el numero: ";
cin>>numero;
cout<<"para una malla de "<<numero<<"x"<<numero<<" hay ";
multi=numero*2;
while(multi!=1){
    factoria_1=factoria_1*multi;
    multi-=1;
}
while(numero!=1){
    factorial_2=factorial_2*numero;
    numero-=1;
}
factorial_2=factorial_2*factorial_2;
resul=factoria_1/factorial_2;
cout<<resul<<" caminos";
return 0;}


