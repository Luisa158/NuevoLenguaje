#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"por favor ingrese el numero"<<std::endl;
    cin>>a;
    if(a<0 && a%2==0){
        cout<<"el numero es par negativo"<<std::endl;
    }
    if(a>0 && a%2==0){
        cout<<"el numero es par positivo"<<std::endl;
    }
    if(a<0 && a%2!=0){
        cout<<"el numero es negativo impar"<<std::endl;
    }
    if(a>0 && a%2!=0){
        cout<<"el numero es positivo impar"<<std::endl;
    }
    return 0;
}
