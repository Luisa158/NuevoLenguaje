#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x,y,tiempo,distancia;
    cout <<"Ingrese la velocidad: "; cin>>x;
    cout <<"Ingrese la aceleracion: "; cin>>y;
    tiempo = (x - 0)/9.8;
    distancia = (((0*tiempo) + (y * pow(tiempo, 2)))/2);
    cout <<"La distancia es: "<<distancia<<endl;
    return 0;
}
