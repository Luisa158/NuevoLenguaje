#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main ()
{
    float area, perimetro, radio;
    cout <<"Ingrese el valor del radio: "; cin>>radio;
    area = 3.141592 * pow(radio, 2);
    perimetro = 2*3.14159*radio;
    cout <<"El area del circulo es: "<<area<<endl;
    cout <<"El perimetro del circulo es: "<<perimetro<<endl;

    return 0;
}
