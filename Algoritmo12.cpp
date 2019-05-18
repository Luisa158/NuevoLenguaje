#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float x, y, z, promedio;
    cout <<"Digite el primer numero: "; cin>>x;
    cout <<"Digite el segundo numero: "; cin>>y;
    cout <<"Digite el tercer numero: "; cin>>z;

    promedio = (x+y+z)/3;
    cout <<"E promedio de los tres numeros es: "<<promedio<<endl;
    return 0;
}
