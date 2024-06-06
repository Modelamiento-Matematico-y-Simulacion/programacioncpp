#include <iostream>
#include <math.h>


struct Punto {
   double x1, y1;
   double x2, y2;
   double distancia;
   // double* ptr = &distancia;


   // Función miembro para mostrar información
   void mostrarInformacion() {
       std::cout << "X: " << x << std::endl;
       std::cout << "Y: " << y << std::endl;
       std::cout << "La distancia entre puntos es: " << distancia << std::endl;


   }
};


int main() {
   Punto x1={2};
   Punto y={4};


   Punto x2={6};
   Punto y2={8};


   distancia=sqrt(pow(x2-x1)+pow(y2-y1));


   return 0;
}

