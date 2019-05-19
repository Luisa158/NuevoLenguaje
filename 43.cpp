#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){

    int a=0;
    int b=0;
    int c=0;
    int n1;


    for(int i=1; i <= 3; i++)
    {
        cout<<"Ecribe un numero:"<<std::endl;
        cin>>n1;
        if (i==1){
         a=a+n1;
        }

        if (i==2){
         b=b+n1;
        }

        if (i==3){
         c=c+n1;
        }

    }

    if (a>b && b>c && a>c){
        cout<<"Los numeros estan disminuyedo"<<std::endl;
         }

    if (a<b && b<c && a<c){
        cout<<"Los numeros estan aumentando"<<std::endl;
         }

    else {
        cout<<"Los numeros no estan incrementando ni disminuyendo"<<std::endl;
         }

    return 0;
}
