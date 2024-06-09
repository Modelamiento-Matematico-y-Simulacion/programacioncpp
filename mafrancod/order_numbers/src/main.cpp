#include <iostream>
#include <math.h>
using namespace std;
//using std::cout;
//using std::endl;

struct Punto {
double x, y, z;

};

// Me falta este bloque
//ordenar_tres_numeros es mi funcion
void ordenar_tres_numeros(double &a, double &b, double &c) {
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
}


int main(){
    Punto punto1;
    punto1.x = 2;
    punto1.y = 8;
    punto1.z = 1;

    ordenar_tres_numeros(punto1.x, punto1.y, punto1.z);


// Estas lineas me habían quedado por fuera
    cout<<endl<<"Numeros ordenados: "<<endl; 
    cout<<endl<<punto1.x<<" "<<punto1.y<<" "<<punto1.z<<endl;

return 0;

}




