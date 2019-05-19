#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"ingrseel año"<<std::endl;
    cin>>a;
    if(a%4==0 && (a%100!=0 || a%400==0)){
        cout<<"el año es bisciesto"<<std::endl;
    }
    else{
        cout<<"el año no es bisciesto"<<std::endl;
    }



}
