#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int x;

    for(int i=1; i<=3; i++)
    {
     cout<<"Escribe un numero:"<<std::endl;
     cin>>x;

     if (i==1){
        a=a+x;
         }

     if (i==2){
        b=b+x;
         }

     if (i==3){
        c=c+x;
         }
    }


    if (a==b && a==c && c==b){
        cout<<a<<" , "<<b<<" y "<<c<<" ---> "<<"Son iguales"<<std::endl;
    }
    else{
     if (a==b){
         cout<<a<<" y "<<b<<" ---> "<<"Son iguales"<<std::endl;
          }

     if (a==c){
         cout<<a<<" y "<<c<<" ---> "<<"Son iguales"<<std::endl;
          }

     if (b==c){
         cout<<b<<" y "<<c<<" ---> "<<"Son iguales"<<std::endl;
          }

     if (a==b && a==c && c==b){
         cout<<a<<" , "<<b<<" y "<<c<<" ---> "<<"Son iguales"<<std::endl;
          }

     if (a!=b && a!=c && c!=b){
         cout<<a<<" , "<<b<<" y "<<c<<" ---> "<<"Son Diferentes"<<std::endl;
          }
    }


    return 0;
}
