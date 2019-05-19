#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"por favor ingrese el numero"<<std::endl;
    cin>>a;
    if(a%2==0){
            cout<<"el numero es par"<<endl;
    }

    if (a==0){
        cout<<"el cero no es par ni impar"<<std::endl;
    }
    if (a%2!=0){
        cout<<"el numero es impar"<<std::endl;
    }

    return 0;



}
