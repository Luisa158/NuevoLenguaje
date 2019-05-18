#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i, x, promedio, y;
    int cont=0;
    cout <<"¿Cuantos numeros desea leer?: "; cin>>y;

    for (i=0; i<y; i++){
        cout <<"Ingrese un numero: "; cin>>x;
        cont += x;

    }
    promedio = cont / 10;
    cout <<"La suma es: "<<cont<<endl;
    cout <<"El promedio es: "<<promedio<<endl;
    return 0;
