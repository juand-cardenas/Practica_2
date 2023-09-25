#include <iostream>
#include <conio.h>
#include<vector>
#include<string.h>
using namespace std;
int n_filas,n_columnas;
int **puntero_matriz;
void crear_matriz();
void suma_matriz(int **puntero_matriz);
void mostrar_matriz(int **puntero_matriz,int n_columnas,int n_filas);

int main()
{crear_matriz();
mostrar_matriz( puntero_matriz,n_columnas,n_filas);
suma_matriz(puntero_matriz);

for(int i=0;i<n_filas;i++){
    delete[] puntero_matriz[i];
}
delete[] puntero_matriz;
    return 0;
}

void crear_matriz(){
cout<<"ingrese el nimero de columnas: ";
cin>>n_columnas;
n_filas=n_columnas;
puntero_matriz=new int *[n_filas];
for (int i=0;i<n_filas;i++){
    puntero_matriz[i]=new int [n_columnas];
}
cout<<endl<<"digite los elemtos de la matriz: "<<endl;
for(int i=0;i<n_filas;i++){
    for(int j=0;j<n_columnas;j++){
        cout<<"digite el numero de la posiscion ["<<i<<"]["<<j<<"] : "<<endl;
        cin>>*(*(puntero_matriz+i)+j);
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
void suma_matriz(int **puntero_matriz){
    vector<int>suma;
    int cantidad=0;
    for(int i=0;i<n_filas;i+=1){
        int suma_filas=0;
        for(int j=0;j<n_columnas;j++){
        suma_filas+=*(*(puntero_matriz+i)+j);
        }
        suma.push_back(suma_filas);
        cantidad+=1;
    }
    
    for(int i=0;i<n_filas;i+=1){
        int suma_columnas=0;
        for(int j=0;j<n_columnas;j++){
            suma_columnas+=*(*(puntero_matriz+j)+i);
        }
        suma.push_back(suma_columnas);
        cantidad+=1;
    }
    int suma_diagonal_1=0;
    for(int i=0;i<n_filas;i+=1){
        int j=i;
        suma_diagonal_1+=*(*(puntero_matriz+i)+j);
        if(i==n_filas-1){
            suma.push_back(suma_diagonal_1);
            cantidad+=1;
        }
    }
    int suma_diagonal_2=0;
    for(int i=n_filas-1;i>=0;i-=1){
        int j=i;
        suma_diagonal_2+=*(*(puntero_matriz+i)+j);
        if(i==0){
            suma.push_back(suma_diagonal_2);
            cantidad+=1;
        }
        
    }
for(int i=0;i<cantidad;i+=1){
    if(suma[0]!=suma[i]){
    cantidad=0;
        cout<<endl<<"no es cuadro magico";
    }
}
if (cantidad!=0){
    cout<<endl<<"es un cuadro magico";
}
}