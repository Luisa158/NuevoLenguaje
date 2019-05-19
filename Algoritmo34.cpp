#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    cout<<"por favor ingrese el primer valor:"<<std::endl;
    cin>>a;
    cout<<"por favor ingrese el segundo valor:"<<std::endl;
    cin>>b;
    cout<<"por favor ingrese el tercer valor:"<<std::endl;
    cin>>c;
    if(a>b && a>c){
        cout<<"el mayor es:"<<a<<std::endl;
    }
    if(b>a && b>c){
        cout<<"el mayor es:"<<b<<std::endl;
    }
    else{
        cout<<"el mayor es:"<<c<<std::endl;
    }
    return 0;
}
