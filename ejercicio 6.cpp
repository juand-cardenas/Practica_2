
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
int cantidad;
char palabra[40];
cout<<"ingrese cadena de caracteres: ";
gets(palabra);
cantidad=strlen(palabra);
for(int i=0;i<=cantidad;i++){
    if(palabra[i]<=122 and palabra[i]>=97){
        palabra[i]=palabra[i]-32;
    }
}
cout<<palabra;

    return 0;
}
