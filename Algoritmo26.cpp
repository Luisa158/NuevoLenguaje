#include <iostream>

using namespace std;
int main(){
    int a= true || false;
    int b= false || false;
    int c= true && true ;
    int d= false && true ;
    int e=(false && false) || (true && true);
    int f=(false || false) && (true && true);
    cout<<a;
    cout<<b;
    cout<<c;
    cout<<d;
    cout<<e;
    cout<<f;
    return 0;

}
