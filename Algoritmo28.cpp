#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"por favor ingrese el numero"<<std::endl;
    cin>>a;
    if(a>0){
            cout<<"el numero es positivo"<<std::endl;
    }
    if (a==0){
        cout<<"el numero no es ni positivo ni negativo"<<std::endl;
    }
    if(a<0){
        cout<<"el numero es negativo"<<std::endl;


    }
    return 0;
}
