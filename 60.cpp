#include <iostream>

using namespace std;

int main()
{
    int x;
    int neg;
    int pos;
    cout<<"Escribe cuantos numero quieres imprimir:"<<std::endl;
    cin>>x;
    for(int i=1; i <= x; i++){

        if (i%2==0){
         neg=(i*(-1));
         cout<<neg<<",";
        }
        if (i%2!=0){
         pos=i;
         cout<<pos<<",";
        }
    }
}
