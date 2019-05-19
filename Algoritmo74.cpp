#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int exp,digito;
    double binario, hexa;
   cout << "Introduce numero: ";
   cin >> binario;
   exp=0;
   hexa=0;
   while(((int)(binario/16))!=0){
        digito = (int)binario % 10;
           hexa = hexa + digito * pow(2.0,exp);
           exp++;
           binario=(int)(binario/16);
   }
    hexa=hexa + binario * pow(2.0,exp);
    cout << "Hexadecimal: " << Hexadecimal << endl;
    system("pause");
}

