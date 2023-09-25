
#include <iostream>
#include <time.h>
using namespace std;
#include <stdlib.h>
#include <vector>
int main()
{int n,contad,pun;
char Guarda,d;
vector<char>letras;
contad=0;
pun=0;
srand(time(NULL));
for (int i=0;i<=199;i++){
    int rand= 65 +std :: rand()%(91-65) ;
    n=rand;
    char l=n;
    cout<<l<<" ";
    letras.push_back(l);
}
for(int a=0;a<=199;a+=1){
    n=0;
    if(letras[a]!='#'){
        Guarda=letras[a];
        contad=0;
        while(n<201){
            
            if(Guarda==letras[n]){
                letras[n]='#';
                contad+=1;
            }
            n+=1;
            }
            cout<<endl<<Guarda<<": "<<contad;
            pun=0;
        } 
    
    }
    

return 0;
}
