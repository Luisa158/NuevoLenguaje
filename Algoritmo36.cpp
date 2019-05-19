#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    cout<<"por favor ingrese el primer valor"<<std::endl;
    cin>>a;
    cout<<"por favor ingrese el segundo valor"<<std::endl;
    cin>>b;
    cout<<"por favor ingrese el tercer valor"<<std::endl;
    cin>>c;
    float suma= a+b;
    if(suma>c){
        cout<<"la suma supera al tercer numero"<<std::endl;
    }
    else{
            cout<<"el tercer numero es mayor a la suma"<<std::endl;
    }
    return 0;
}
