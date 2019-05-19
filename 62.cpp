#include <iostream>

using namespace std;

int main()
{
    int pn;
    int sn;
    int suma=0;

    cout<<"Escribe el primer numero (tiene que ser menor que el siguiente valor): ";
    cin>>pn;
    cout<<"Escribe el segundo numero (tiene que ser mayor que el valor anterior): ";
    cin>>sn;

    if (pn>sn){
        cout<<"El segundo numero debe ser mayor que el primer numero ingresado"<<std::endl;
        }
    else{
         for(int i=(pn+1); i <= (sn-1); i++){
          if (i>=pn && i<=(sn-2)){
            suma=suma+i;
            cout<<i<<", ";
        }
          if (i==sn-1){
            suma=suma+i;
            cout<<i<<"."<<std::endl;
    cout<<suma<<" <--- suma de numeros entre los dos valores"<<std::endl;
        }
     }
    }
}
