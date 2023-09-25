#include <iostream>
#include <conio.h>
#include<vector>
#include<string.h>
using namespace std;
int n_filas,n_columnas;
int **puntero_matriz,**puntero_matriz_auxiliar;
void crear_matriz();
void crear_matriz_auxiliar();
void igualar_matriz();
void mostrar_matriz_2(int **puntero_matriz_auxiliar,int n_columnas,int n_filas);
void mostrar_matriz(int **puntero_matriz,int n_columnas,int n_filas);

int main()
{crear_matriz();
mostrar_matriz( puntero_matriz,n_columnas,n_filas);
crear_matriz_auxiliar();
igualar_matriz();
cout<<endl<<"girada 90 grados"<<endl;
mostrar_matriz( puntero_matriz,n_columnas,n_filas);
igualar_matriz();
cout<<endl<<"girada 180"<<endl;
mostrar_matriz( puntero_matriz,n_columnas,n_filas);
igualar_matriz();
cout<<endl<<"girada 270"<<endl;
mostrar_matriz( puntero_matriz,n_columnas,n_filas);
for (int i;i<n_filas;i++){
    delete[]puntero_matriz[i];
    delete[]puntero_matriz_auxiliar[i];
}
delete[]puntero_matriz;
delete[]puntero_matriz_auxiliar;
    return 0;
}

void crear_matriz(){
int numer1_5=0;
n_columnas=5;
n_filas=n_columnas;
puntero_matriz=new int *[n_filas];
for (int i=0;i<n_filas;i++){
    puntero_matriz[i]=new int [n_columnas];
}

for(int i=0;i<n_filas;i++){
    for(int j=0;j<n_columnas;j++){
        numer1_5+=1;
        *(*(puntero_matriz+i)+j)=numer1_5;
    }
}
}
void mostrar_matriz(int **puntero_matriz,int n_columnas,int n_filas){
    cout<<endl<<"imprimiendo matriz: "<<endl;
    for(int i=0;i<n_filas;i++){
        for(int j=0;j<n_columnas;j++){
            cout<<*(*(puntero_matriz+i)+j)<<"  ";
        }
        cout<<endl;
    }
}
void crear_matriz_auxiliar( ){
int n_columnas=5,inte=0, aux=0;
n_filas=n_columnas;
puntero_matriz_auxiliar=new int *[n_filas];
for (int i=0;i<n_filas;i++){
    puntero_matriz_auxiliar[i]=new int [n_columnas];
}
}
void igualar_matriz(){
    int n_columnas=5,inte=0, aux=0;
    for(int i=4;i>=0;i-=1){
    for(int j=4;j>=0;j-=1){
        inte=*(*(puntero_matriz+i)+j);
        *(*(puntero_matriz_auxiliar+j)+aux)=inte;
    
    }
    aux+=1;
}
for(int i=0;i<n_columnas;i++){
    for(int j=0; j<n_columnas;j++){
        *(*(puntero_matriz+i)+j)=*(*(puntero_matriz_auxiliar+i)+j);
    }
}
}
void mostrar_matriz_2(int **puntero_matriz_auxiliar,int n_columnas,int n_filas){
    cout<<endl<<"imprimiendo matriz: "<<endl;
    for(int i=0;i<n_filas;i++){
        for(int j=0;j<n_columnas;j++){
            cout<<*(*(puntero_matriz_auxiliar+i)+j)<<"  ";
        }
        cout<<endl;
    }
}
