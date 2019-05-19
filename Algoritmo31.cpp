#include<iostream>
#include <math.h>
using namespace std;

int main(){
    float a;
    cout<<"por favor ingrese el numero"<<std::endl;
    cin>>a;
    if(a>10){
            float b=pow(a,3);
            cout<<"elevado al cubo es:"<<b<<std::endl;
    }
    if(a<10){
        float c=(a/4);
        cout<<"la cuarta parte es:"<<c<<std::endl;
    }

}
