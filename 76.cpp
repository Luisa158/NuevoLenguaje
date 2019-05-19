#include <iostream>

using namespace std;

int main()
{
    int x;
    int num;
    int cant=0;
    cout<<"cuantos numero quieres imprimir: ";
    cin>>x;
    cout<<"ingrese un numero: ";
    cin>>num;
    for(int i=1; i <= x; i++){
        if (num%i==0){
         cout<<i<<" <-- Divisor"<<std::endl;
         cant=cant+1;
        }
    }
    cout<<cant<<" <-- Es la cantidad de numeros en los que se puede dividir"<<std::endl;
}
