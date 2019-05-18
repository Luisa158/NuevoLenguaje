#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main ()
{
    float area, perimetro, apotema, lado, medio;
    cout <<"Ingrese el valor del un lado del hexagono: "; cin>>lado;
    perimetro = lado * 6;
    medio = lado/2;
    apotema = sqrt(pow(lado, 2) - pow(medio, 2));
    area = (perimetro * apotema)/2;
    cout <<"El area del hexagono es: "<<area<<endl;
    return 0;
}
