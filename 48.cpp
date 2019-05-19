#include <iostream>

using namespace std;

int main()
{
    string palabra;
    string pinvertida="";

    cout<<"Escribe una palabra:"<<std::endl;
    cin>>palabra;


    for (int i = palabra.size(); i >=0 ; i--)
     pinvertida += palabra[i];

    cout<<"La palabra ingresada es: "<<palabra<<std::endl;
    cout<<"La palabra invertida es:"<<pinvertida<<std::endl;
    return 0;
}
