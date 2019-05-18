#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float n1, n2, n3, n4, n5, a, b, c, d, e,suma;
    cout <<"Ingrese la primer nota: "; cin>>n1;
    cout <<"Ingrese la segunda nota: "; cin>>n2;
    cout <<"Ingrese la tercer nota: "; cin>>n3;
    cout <<"Ingrese la cuarta nota: "; cin>>n4;
    cout <<"Ingrese la quinta nota: "; cin>>n5;
    a=n1*15/100;
    b=n2*0.2;
    c=n3*15/100;
    d=n4*0.3;
    e=n5*0.2;
    suma=a+b+c+d+e;
    cout<<"La nota final es: "<<suma<<endl;

    return 0;

}
