#include <iostream>
using namespace std;
void fun_a(int *px, int *py);
void fun_b(int a[], int tam);
int main()
{
int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
fun_b(array, 10);
}
void fun_a(int *px, int *py){
int tmp = *px;
*px = *py;
*py = tmp;
}
void fun_b(int a[], int tam){
int f, l;
int *b = a;
for (f = 0, l = tam -1; f < l; f++, l--) {
fun_a(&b[f], &b[l]);
}
}
//Cuál es su dirección en memoria?¿Cuántos bytes se dedican para almacenar cada elemento de array?
//Resp:0x7fffffffeb90, son 40 bytes, para el arreglo array de 10 elementos.
//Cuál es la dirección y el contenido en memoria del elemento array[3] ?
//0x7fffffffeb9c, el contenido es 3.
//Describa el efecto que tiene la función fun_b, sobre el arreglo array.
//la funcion fun_b recibe el tamaño del arreglo y el arreglo en si,
//fun_b entrega las direcciónes del elemento es la posisicion 0 y en la posisicion 9 a la funcion fun_a, 
//las cuales iran descendiendo, hasta que f=4 y l=5.