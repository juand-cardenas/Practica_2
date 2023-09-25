
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
char romano[100];
int valor[100];
int n,i,numero;
cout<<"ingrese el numero romano: ";
gets(romano);
n=strlen(romano);
for(i=0;i<n;i+=1){
    if(romano[i]=='I' or romano[i]=='i'){
        valor[i]=1;
    }
    if(romano[i]=='V' or romano[i]=='v'){
        valor[i]=5;
    }
    if(romano[i]=='X' or romano[i]=='x'){
        valor[i]=10;}
        
    if(romano[i]=='L' or romano[i]=='l'){
        valor[i]=50;}
    
    if(romano[i]=='C' or romano[i]=='c'){
        valor[i]=100;}
    
    if(romano[i]=='D' or romano[i]=='d'){
        valor[i]=500;}
    
    if(romano[i]=='M' or romano[i]=='m'){
        valor[i]=1000;}
        
}
for(i=0;i<n;i+=1){
    if(i==n-1){
        numero+=valor[i];
    }
    else
        if(valor[i]>=valor[i+1]){
            numero+=valor[i];
        }
        else
            numero-=valor[i];
}
cout<<"el numero romano ingresado es: "<<romano<<endl;
cout<<"que corresponde a: "<< numero;
    return 0;
}
