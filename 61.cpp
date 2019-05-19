#include <iostream>

using namespace std;

int main()
{
    int pn;
    int sn;

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
            cout<<i<<", ";
        }
          if (i==sn-1){
            cout<<i<<".";
        }
     }
    }
}

