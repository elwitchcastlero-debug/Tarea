#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int P,n,t;
    float r;
    cout<<"Ingrese monto principal: ";
    cin>>P;
    cout<<endl;
    cout<<"Ingrese tasa de interes(en decimal): ";
    cin>>r;
    cout<<endl;
    cout<<"Ingrese el número de veces que se aplica el interés al año: ";
    cin>>n;
    cout<<endl;
    cout<<"Ingrese el número de años que se deja el dinero en la cuenta: ";
    cin>>t;
    cout<<endl;
    float A = P*pow((1+r/n),n*t);
    cout<<"El monto acumulado en la cuenta después de "<<t<<" años es: "<<A<<endl;
    return 0;


}