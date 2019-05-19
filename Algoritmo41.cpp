#include<iostream>
using namespace std;

int main(){
    int x;
    for(int i=0; i<=10; i++){
        cout<<"ingrese el numero:"<<std::endl;
        cin>>x;
        if(x>=0 && x<=10){
                if(x==0){
                    cout<<"cero"<<std::endl;
                }
                if(x==1){
                    cout<<"uno"<<std::endl;
                }
                if(x==2){
                    cout<<"dos"<<std::endl;
                }
                if(x==3){
                    cout<<"tres"<<std::endl;
                }
                if(x==4){
                    cout<<"cuatro"<<std::endl;
                }
                if(x==5){
                    cout<<"cinco"<<std::endl;
                }
                if(x==6){
                    cout<<"seis"<<std::endl;
                }
                if(x==7){
                    cout<<"siete"<<std::endl;
                }
                if(x==8){
                    cout<<"ocho"<<std::endl;
                }
                if(x==9){
                    cout<<"nueve"<<std::endl;
                }
                if(x==10){
                    cout<<"diez"<<std::endl;
                }
                }
         else{
             cout<<"no se puede"<<std::endl;
            }
     }
    return 0;
}
