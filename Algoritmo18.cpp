#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float masa, aceleracion, fuerza;
    cout <<"Ingrese la aceleracion: "; cin>>aceleracion;
    cout <<"Ingrese la masa en kg: "; cin>>masa;
    fuerza = aceleracion * masa;
    cout <<"La fuerza es: "<<fuerza<<endl;
    return 0;

}
