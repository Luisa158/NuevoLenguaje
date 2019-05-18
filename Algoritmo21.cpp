#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    float segundos, horas;
    cout <<"Ingrese los segundos: "; cin>>segundos;
    horas = segundos / 3600;
    cout <<"EL tiempo en horas es: "<<horas<<endl;
    return 0;
}
