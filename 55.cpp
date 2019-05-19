#include <iostream>

using namespace std;

int main()
{
    int atri,b,bb,a,acua,arec,aromo,arome,atrao,h,d,dd;
    string x;

    cout<<"De que poligono quieres saber el area(Triangulo, Cuadrado, Rectangulo, Rombo, Romboide, Trapecio):"<<std::endl;
    cin>>x;

    if (x=="Triangulo"){
        cout<<"Cual es el valor de la base del triangulo:"<<std::endl;
        cin>>b;
        cout<<"Cual es el valor de la altura del triangulo:"<<std::endl;
        cin>>h;
        atri=(b*h)/2;
        cout<<"El area del Triangulo es --> "<<atri<<std::endl;
    }
    if (x=="Cuadrado"){
        cout<<"Cual es el valor de un lado del cuadrado:"<<std::endl;
        cin>>a;
        acua=(a*a);
        cout<<"El area del Cuadrado es --> "<<acua<<std::endl;
    }
    if (x=="Rectangulo"){
        cout<<"Cual es el valor de la base del rectangulo:"<<std::endl;
        cin>>b;
        cout<<"Cual es el valor de la altura del rectangulo:"<<std::endl;
        cin>>h;
        arec=(b*h);
        cout<<"El area del Rectangulo es --> "<<arec<<std::endl;
    }
    if (x=="Rombo"){
        cout<<"Cual es el valor de la diagonal mayor del rombo:"<<std::endl;
        cin>>d;
        cout<<"Cual es el valor de la diagonal menor del rombo:"<<std::endl;
        cin>>dd;
        aromo=(dd*d)/2;
        cout<<"El area del Rombo es --> "<<aromo<<std::endl;
    }
    if (x=="Romboide"){
        cout<<"Cual es el valor de la base del romboide:"<<std::endl;
        cin>>b;
        cout<<"Cual es el valor de la altura del romboide:"<<std::endl;
        cin>>h;
        arome=(b*h);
        cout<<"El area del Romboide es --> "<<arome<<std::endl;
    }
    if (x=="Trapecio"){
        cout<<"Cual es el valor de la base menor del trapecio:"<<std::endl;
        cin>>b;
        cout<<"Cual es el valor de la base mayor del trapecio:"<<std::endl;
        cin>>bb;
        cout<<"Cual es el valor de la altura del trapecio:"<<std::endl;
        cin>>h;
        atrao=(h*(bb+b))/2;
        cout<<"El area del Trapecio es --> "<<atrao<<std::endl;
    }
    return 0;
}
