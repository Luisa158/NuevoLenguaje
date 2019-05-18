#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i, x, promedio;
    int cont=0;

    for (i=0; i<=9; i++){
        cout <<"Ingrese un numero: "; cin>>x;
        cont += x;

    }
    promedio = cont / 10;
    cout <<"La suma es: "<<cont<<endl;
    cout <<"El promedio es: "<<promedio<<endl;
    return 0;
}
