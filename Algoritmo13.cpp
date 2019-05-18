#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main ()
{
    int x,y,c;
    cout <<"Ingrese el primer valor: "; cin>>x;
    cout <<"Ingrese el segundo valor: "; cin>>y;
    cout <<"\nLas variables originales son "<<"("<<x<<","<<y<<")"<<endl;
    c=x;
    x=y;
    y=c;
    cout <<"El intercambio de variables: "<<"("<<x<<","<<y<<")"<<endl;
    return 0;
}
