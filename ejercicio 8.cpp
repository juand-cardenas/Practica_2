
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
int cantidad,posi_1=0,posi_2=0;
char palabra[125],*letras,*numeros;
cout<<"ingrese cadena de caracteres: ";
cin>>palabra;
cantidad=strlen(palabra);
letras=new  char[cantidad];
numeros=new char[cantidad];
for(int i=0;i<=cantidad;i++){
    if(97<=palabra[i] and palabra[i]<=122){
        *(letras+posi_1)=palabra[i];
        posi_1+=1;
    } 
    if(48<=palabra[i]and palabra[i]<=57){
        *(numeros+posi_2)=palabra[i];
        posi_2+=1;
    }
    if(65<=palabra[i] and palabra[i]<=90){
        *(letras+posi_1)=palabra[i];
        posi_1+=1;}   
}
cout<<"original: "<<palabra;
cout<<endl<<"numeros en la cadenas: "<<numeros;
cout<<endl<<"letras de la cadena: "<<letras;
    return 0;
}
