#include <iostream>

using namespace std;

int main(){
 int numero, dividendo, resto, divisor = 2;
 string binario = "";
 cout << "Ingrese el numero decimal a convertir a sistema binario" << endl;
 cin >> numero;
 dividendo = numero;
 while(dividendo >= divisor){
 resto = dividendo % 2;
  if(resto == 1)
   binario = "1" + binario;
  else
   binario = "0" + binario;
   dividendo = dividendo/divisor;
 }
  if(dividendo == 1)
   binario = "1" + binario;
  else
   binario = "0" + binario;
  cout << "En sistema binario " << numero<< " se escribe " << binario << endl;
 return 0;
}
