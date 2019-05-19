#include <iostream>
#include<string>
using namespace std;

int main(){

    float a;
    do{
    cout<<"por favor ingrese el numero"<<std::endl;
    cin>>a;
    int hora=(a/3600);
    int minutos=((a-(hora*3600))/60);
    int segundos=(a-(hora*3600)+(minutos*60));

    cout<<hora<<": "<<minutos<< ": "<<segundos<<std::endl;
    return 0;
    }while(a>86399);



}
