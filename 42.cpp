#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){

 int a;

 cout<<"Ecribe un numero:"<<std::endl;
 cin>>a;

 if (a>=0 && a<=9){
     cout<<"El numero tiene 1 digito";
 }
 if (a>=10 && a<=99){
     cout<<"El numero tiene 2 digitos";
 }
 if (a>=100 && a<=999){
     cout<<"El numero tiene 3 digitos";
 }
 if (a>=1000 && a<=9999){
     cout<<"El numero tiene 4 digitos";
 }
 if (a>=10000 && a<=99999){
     cout<<"El numero tiene 5 digitos";
 }
 if (a>=100000 && a<=999999){
     cout<<"El numero tiene 6 digitos";
 }

 return 0;
}
