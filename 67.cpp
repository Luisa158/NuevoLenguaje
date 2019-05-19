#include <iostream>

using namespace std;
 int main ()
{
    int i, cont1=0, cont2=0, cont3=0, cont4=0, a, b;
    cout << "¿Cuantos numeros edsea ingresar?: "; cin>>a;
    for (i=0; i<a; i++){
        cout << "Ingrese un numero: "; cin>>b;

        if (b < 100){
            cont2 ++;
        }

        else {
                if (b > 100){
                    cont3 ++;
        }
        }
        if (b == 100){
            cont4 ++;
        }
    }
     cout <<"Los mayores a 100 son: "<<cont3<<"\nLos menores a 100 son: "<<cont2<<"\nLos iguales a 100 son: "<<cont4<<endl;
}
