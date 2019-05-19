#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"por favor ingrese el numero"<<std::endl;
    cin>>x;
    if(x>100000){
        cout<<"no se puede bro"<<std::endl;
    }
    if(x>=10000 && x<=100000){
        cout<<"el numero tiene 5 cifras"<<std::endl;
    }
    if(x>=1000 && x<100000){
        cout<<"el numero tiene 4 cifras"<<std::endl;
    }
    if(x>100 && x<1000){
        cout<<"el numero tiene 3"<<std::endl;
    }
    if(x>10 && x<100){
        cout<<"el numero tiene 2 cifras"<<std::endl;
    }
    if(x>=1 && x<10){
        cout<<"el numero tiene 1 cifra"<<std::endl;
    }
    return 0;





}
