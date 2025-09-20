#include<iostream>
#include<cmath>
using namespace std;
#include <iostream>
using namespace std;

int MCD(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int x, y;
    cout << "Ingrese dos numeros: ";
    cin >> x >> y;
    cout << "El MCD es: " << MCD(x, y) << endl;
    return 0;
}