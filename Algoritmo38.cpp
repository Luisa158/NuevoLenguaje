#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"ingrseel a�o"<<std::endl;
    cin>>a;
    if(a%4==0 && (a%100!=0 || a%400==0)){
        cout<<"el a�o es bisciesto"<<std::endl;
    }
    else{
        cout<<"el a�o no es bisciesto"<<std::endl;
    }



}
