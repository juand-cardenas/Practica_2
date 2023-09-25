#include <iostream>
void fun_c(double *a, int n,  double *suma);
using namespace std;

int main(){
double c=6;
int n=6;
double *notas;
double *suma,*dc;
double notas_1[6]={1,2,3,4,5,6};
//cout<<"tamaño del arreglo";
//cin>>n;
notas=&notas_1[0];
suma=new double[n];
dc=new double[n];
fun_c(notas, n, suma);
    return 0;
}

void fun_c(double *a, int n,  double *suma){
int i;
float s;
suma=0;
for (i = 0; i < n; i++){
double suma =suma + a[i];
cout<<a[i]<<" "<<suma<<endl;
s=suma/n;
}
cout<<"el promedio es: "<<s;

}