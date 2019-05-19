#include <iostream>

using namespace std;

int main ()
{
    int cont100=0, cont5=0, contleidos=0, a;
    while (cont5 <= 80 && cont100<=100){
            cout <<"Ingrese un valor: "; cin>>a;
            contleidos++;
            if (a % 2 ==0){
               cont100++;
            }
            if (a==5){
                cont5++;
            }
    }
     cout <<"La cantidad de numeros leidos es: "<<contleidos<<"\La cantidad de numeros pares es: "<<cont100<<"\nLa cantidad de numeros 5 es: "<<cont5<<endl;
}
