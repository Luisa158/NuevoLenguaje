#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main ()
{
    float x, tiempo;
    cout <<"Por favor, ingrese la velocidad final: "; cin>>x;
    tiempo = (x - 0)/9.8;
    cout <<"El tiempo de caida ibre es: "<<tiempo<<endl;
    return 0;
}
