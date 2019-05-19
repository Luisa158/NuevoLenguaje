#include <iostream>

using namespace std;

int main(){
    int a;
    cout<<"por favor ingrese el numero"<<std::endl;
    cin>>a;
    float c4=a%10;
    int c3=((a%100)/10);
    int c2=((a%1000)/100);
    int c1=((a-(a%1000))/1000);
    cout<<c4<<" "<<c3<<" "<<c2<<" "<<c1<<std::endl;
    return 0;


}
