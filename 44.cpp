#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int n1;


    for(int i=1; i <= 2; i++)
    {
        cout<<"Ecribe un numero:"<<std::endl;
        cin>>n1;
        if (i==1){
         a=a+n1;
        }

        if (i==2){
         b=b+n1;
        }

    }

    if (a>=0 && a<=5 && b>=0 && b<=5){
        cout<<a<<" y "<<b<<" ---> "<<"True"<<std::endl;
         }

    if (a<0 || b<0 || a>5 || b>5){
        cout<<a<<" y "<<b<<" ---> "<<"False"<<std::endl;
         }

    return 0;
}
