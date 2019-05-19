#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b,c,d,e;
    cout<<"por favor ingrese la primera nota"<<std::endl;
    cin>>a;
    cout<<"por favor ingrese la segunda nota"<<std::endl;
    cin>>b;
    cout<<"por favor ingrese la tercera nota"<<std::endl;
    cin>>c;
    cout<<"por favor ingresa la cuarta nota"<<std::endl;
    cin>>d;
    cout<<"por favor ingrese la quinta nota"<<std::endl;
    cin>>e;
    float nota1=((a*15)/100);
    float nota2=((b*20)/100);
    float nota3=((c*15)/100);
    float nota4=((d*30)/100);
    float nota5=((e*20)/100);
    float suma= nota1+nota2+nota3+nota4+nota5;

    if(suma<2){
        cout<<"no habilitas wey"<<std::endl;
    }
    if (suma>2 && suma<3){
        cout<<"reprobaste"<<std::endl;
    }
    if(suma>=3 && suma<4.5){
        cout<<"aprobaste"<<std::endl;
    }
    if (suma>4.5){
        cout<<"felicidades por tu dedicacion"<<std::endl;
    }

    return 0;
}
