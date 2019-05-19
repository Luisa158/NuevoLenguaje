#include <iostream>
#include <string>
using namespace std;
int main(){
    string c,d;
    string a= "pepe";
    string b= "1234";
    cout<<"ingrese el nombre de usuario"<<std::endl;
    cin>>a;
    cout<<"ingrese la contraseña"<<std::endl;
    cin>>b;
    if(c==a && d==b){
        cout<<"bienvenido"<<std::endl;
    }
    else{
        cout<<"no robes cuentas"<<std::endl;
    }
    return 0;





}
