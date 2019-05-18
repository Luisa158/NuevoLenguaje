#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float tiempo, aceleracion,temperatura;
    cout <<"Ingrese la aceleracion: "; cin>>aceleracion;
    cout <<"Ingrese el tiempo: "; cin>>tiempo;
    temperatura=(0+(aceleracion*tiempo));
    cout <<"La temperatura es de: "<<temperatura <<" Jules " <<endl;
    return 0;
}
