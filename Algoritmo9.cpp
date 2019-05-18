#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float iva, incluido, original, venta;
    cout <<"Ingrese el valor de la venta: "; cin>>venta;
    iva = venta*19/100;
    incluido = venta + iva;
    original = venta - iva;
    cout <<"El precio de venta es: "<<venta<<endl;
    cout <<"El IVA es de: "<<iva<<"%"<<endl;
    cout <<"El precio con IVA incluido es: "<<incluido<<endl;
    cout <<"El valor original es: "<<original<<endl;

    return 0;
}
