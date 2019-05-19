#include <iostream>
#include <string>
#include <cstdlib>
#define USER "Luisa158"
#define PASS "1234"
using namespace std;
int main(){
    string usu, contra;
    int cont=0;
    bool ingresa = false;

    do {
            cout <<"\t\t\tLOGIN DE USUARIO"<<endl;
            cout <<"\t\t\t---------------"<<endl;
            cout <<"\n\tusuario: ";
            getline(cin, usu);
            cout <<"\tContraseña";
            getline(cin, contra);

            if (usu == USER && contra == PASS){
                    ingresa = true;
            } else{
                cout <<"El usuario y/o contraseña son incorrectos"<<endl;
                cont++;
                }
    }while (ingresa == false && cont <3);

if (ingresa == false){
    cout <<"\n\tUsted no puede ingresar al sistemas. Adios!"<<endl;
} else {
    cout <<"\n\tBienvenido al sistema"<<endl;
}

cin.get();
return 0;

}
