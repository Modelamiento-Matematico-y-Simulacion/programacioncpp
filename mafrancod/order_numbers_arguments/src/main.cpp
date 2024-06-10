#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b, num3;

    // Ingrese de los tres números
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    // Ordenar los números utilizando 
    if (a <= b && a <= c) {
        if (b <= c) {
            cout << "El orden de los números, sería: " << a << "," << b << "," << c << endl;
        } else {
            cout << "El orden de los números, sería: " << a << "," << c << "," << b << endl;
        }
    } else if (b <= a && b <= c) {
        if (a <= c) {
            cout << "El orden de los números, sería: " << b << "," << a << "," << c << endl;
        } else {
            cout << "El orden de los números, sería: " << b << "," << c << "," << num1 << endl;
        }
    } else {
        if (a <= b) {
            cout << "El orden de los números, sería: " << c << "," << a << "," << b << endl;
        } else {
            cout << "El orden de los números, sería: " << c << "," << b << "," << a << endl;
        }
    }

    return 0;
}
