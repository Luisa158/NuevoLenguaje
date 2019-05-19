#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    float x1=0;
    float y1=0;
    float x2=0;
    float y2=0;
    float radiotierra=6371;
    float distancia;
    float x, xx, d1, d2, d3, d4, d5;

    for(int i=1; i<=2; i++)
    {
     cout<<"Escribe coordenada (x1 y y1):"<<std::endl;
     cin>>x;

     if (i==1){
        x1=x1+x;
         }

     if (i==2){
        y1=y1+x;
         }

    }

    for(int i=1; i<=2; i++)
    {
     cout<<"Escribe coordenada (x2 y y2):"<<std::endl;
     cin>>xx;

     if (i==1){
        x2=x2+xx;
         }

     if (i==2){
        y2=y2+xx;
         }
    }
    d1=cos(y1-y2);
    d2=sin(x1);
    d3=sin(x2);
    d4=cos(x1);
    d5=cos(x2);
    distancia=radiotierra*acos(d2*d3+d4*d5*d1);

    cout<<distancia<<" Kilometros "<<std::endl;


    return 0;
}
