#include<iostream>
using namespace std;
int main(){
    int arreglo[5]={2,44,61,83,999};
    int suma=0;
    cout<<"Los elementos del arreglo son: ";
    for(int i=0;i<5;i++){
        cout<<arreglo[i]<<" ";
        suma+=arreglo[i];
    }
    cout<<endl;
    cout<<"La suma de los elementos del arreglo es: "<<suma<<endl;
    return 0;
}