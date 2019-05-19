#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"por favoor ingrese la cantidad de dinero:"<<std::endl;
    cin>>a;

    int primero=(a/50000);
    int segundodelprimero=(a%50000);
    int segundo=(segundodelprimero/20000);
    int segundodelsegundo=(segundodelprimero%20000);
    int tercero=(segundodelsegundo/10000);
    int segundodeltercero=(segundodelsegundo%10000);
    int cuarto=(segundodeltercero/5000);
    int segundodelcuarto=(segundodeltercero%5000);
    int quinto=(segundodelcuarto/2000);
    int segundodelquinto=(segundodelcuarto%2000);
    int sexto=(segundodelquinto/1000);
    int segundodelsexto=(segundodelquinto%1000);
    cout<<"la cantidad de billetes de 50 mil es:"<<primero<<std::endl;
    cout<<"la cantidad de billetes de 20 mil es:"<<segundo<<std::endl;
    cout<<"la cantidad de billetes de 10 mil es:"<<tercero<<std::endl;
    cout<<"la cantidad de billetes de 5 mil es:"<<cuarto<<std::endl;
    cout<<"la cantidad de billetes de 2 mil es:"<<quinto<<std::endl;
    cout<<"la cantidad de billtes de 1 mil es:"<<sexto<<std::endl;
    return 0;


}
