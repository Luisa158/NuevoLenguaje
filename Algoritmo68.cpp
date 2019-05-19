#include <iostream>

using namespace std;

int main()
{
    int i, y, positivos=0, negativos=0, impares=0, pares=0, multiplos=0, x;
    cout <<"¿Cuanto numeros desea ingresar?: "; cin>>y;
    for (i=0; i<y; i++){
            cout <<"Ingree un numero: "; cin>>x;
            if (x<0){
                negativos++;
            }
            if (x>0){
                positivos++;
            }
            if (x%2==0){
                pares++;
            }
            if (x%2!=0){
                impares++;
            }
            if (x%8==0){
                multiplos++;
            }
    }
    cout <<"Los negativos son: "<<negativos<<"\nLos positivos son: "<<positivos<<"\nLos pares son: "<<pares<<"\nLos impares son: "<<impares<<"\nLos multiplos de 8 son: "<<multiplos<<endl;
}
