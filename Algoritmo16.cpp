#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float tiempo, velocidad, aceleracion;
    cout <<"Ingrese el tiempo: "; cin>>tiempo;
    cout <<"Ingrese la aceleracion: "; cin>>aceleracion;
        velocidad = (0+(tiempo*aceleracion));
    cout <<"La velocidad final es: "<<velocidad<<endl;
    return 0;
}
