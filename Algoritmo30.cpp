#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"por favor ingrese el numero"<<std::endl;
    cin>>a;
    float b=((a*19)/100);
    cout<<"el valor del iva es:"<<b<<std::endl;
    if(a>150000){
        float c=((a*5)/100);
        cout<<"el descuento es:"<<c<<std::endl;
    }
    return 0;

}
