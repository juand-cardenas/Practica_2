
#include <iostream>

using namespace std;
int funcicambio(char cadna[]);

int main()
{
char num[]="123435";
int numer=funcicambio(num);
cout<<numer;
return 0;
}

int funcicambio(char cadna[]){
    int a=0,numero=0,signo=1;
    if (cadna[a]=='-'){
        signo=-1;
        a++;
        
    }
    while(cadna[a]!='\0'){
        numero=numero*10+(cadna[a]-'0');
        a++;
    }
    return (numero*signo);
}