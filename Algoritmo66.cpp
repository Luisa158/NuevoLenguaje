#include <iostream>

using namespace std;

int main ()
{
    int x;
    cout <<"Ingrese un numero positivo: "; cin>>x;
    while (x<0){
            cout <<"POSITIVO!"<<endl;
            cout <<"Ingrese un numero positivo: "; cin>>x;
    }
    cout << x <<endl;
}
