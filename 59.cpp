#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Escribe cuantos numero quieres imprimir:"<<std::endl;
    cin>>x;
    for(int i=1; i <= x; i++){
        if (i>=1 && i<=(x-1)){
        cout<<i<<", ";
        }
        if (i==x){
         cout<<i<<".";
        }
    }
}
