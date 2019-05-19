#include <iostream>
using namespace std;

void introDatos(unsigned& num);
void pintaTriangulo(unsigned num);

int main(){
	unsigned num;

	introDatos(num);
	pintaTriangulo(num);

	return 0;
}

void introDatos(unsigned& num){
	cout << "Introduzca numero N: ";
	do{
		cin >> num;
	}while(num<=0);
}

void pintaTriangulo(unsigned num){
	unsigned aux = (num-1);

	for(unsigned i=0;i<num;i++){
		for(unsigned j=0;j<num*2-1;j++){
			if((i+j>=num-1)&&(i+j<=aux)){
				if(num%2!=0){
					if((j+i)%2==0){
						cout << '*';
					}else{
						cout << " ";
					}
				}else{
					if((j+i)%2!=0){
						cout << '*';
					}else{
						cout << " ";
					}
				}
			}else{
				cout << " ";
			}
		}
		aux+=2;
		cout << endl;
	}
}
