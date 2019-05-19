#include <iostream>
using namespace std;

int main(){
    float a,b,precio=5000;
    cout<<"por favor ingrese la distancia:"<<std::endl;
    cin>>a;
    cout<<"por favor ingrese el tiempo:"<<std::endl;
    cin>>b;
    float precio1=(a*precio);
    float vd=((precio1*b)*15/100);

    if(vd>1000){

        cout<<"se hara un descuento"<<vd<<std::endl;
    }
    if(precio1<100000){
        cout<<"el precio total es:"<<precio1<<std::endl;
    }


}
