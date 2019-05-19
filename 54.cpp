#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int j;
    int mitad;
    string a;

    cout<<"Escribe una palabra"<<std::endl;
    cin>>a;
    j= a.length()- 1;
    mitad=j/2;
    while(a[i]==a[j]){
     if(mitad==i){
      cout<<"Es palindromo"<<std::endl;
      break;
     }
     j--;
     i++;
     }
     if(mitad!=i){
      cout<<"No es un palindromo"<<std::endl;
     }
    return 0;
}
