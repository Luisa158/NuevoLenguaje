#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x1, x2, y1, y2, distancia;
    cout <<"Ingrese la coordenada de X1: "; cin>>x1;
    cout <<"Ingrese la coordena de X2: "; cin>>x2;
    cout <<"Ingrese la coordena de Y1: "; cin>>y1;
    cout <<"Ingrese la coordena de Y2: "; cin>>y2;
    distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    cout <<"La distancia entre coordenadas es de: "<<distancia<<endl;
    return 0;
}
