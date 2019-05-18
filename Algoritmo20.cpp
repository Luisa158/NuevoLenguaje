#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int num, a,b,c,suma;
    cout <<"Ingrese un valor: "; cin>>num;
    a = num * 11;
    b = num * 111;
    suma = a + b + num;
    cout <<"Los numeros son: " << num <<", "<< a <<", "<< b <<"."<<endl;
    cout <<"La suma es de: "<<suma<<endl;
    return 0;

}
