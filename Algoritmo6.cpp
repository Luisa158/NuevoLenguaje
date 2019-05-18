
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

float x,y,suma,rest,multi,divi;

int main()
{
    cout <<"Ingrese un numero: "; cin>>x;
    cout <<"Ingrese otro numero: "; cin>>y;
    suma= x + y;
    rest= x - y;
    multi= x * y;
    divi=x / y;
    cout <<"La suma es: "<<suma<<endl;
    cout <<"La rest es: "<<rest<<endl;
    cout <<"La multiplicacion es: "<<multi<<endl;
    cout <<"La division es: "<<divi<<endl;

    return 0;
}
