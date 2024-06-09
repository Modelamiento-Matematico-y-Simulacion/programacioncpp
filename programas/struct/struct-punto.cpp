#include <iostream>
#include <cmath>

struct Punto {
	double x;
	double y;
};
// Declaración de la función para calcular la distancia
double calcularDistancia(const Punto& p1, const Punto& p2);

int main(){
	Punto punto1;
	Punto punto2;
	punto1.x = 2.0;
	punto1.y = 3.0;
	punto2.x = 5.0;
	punto2.y = 4.0;
	
	double d = calcularDistancia(punto1,punto2);
	std::cout<<"La distancia entre los puntos es:"<< d << std::endl;
	return 0;

}

// Declaración de la función para calcular la distancia
double calcularDistancia(const Punto& p1, const Punto& p2){
	// Fórmula de la distancia euclidiana
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

}
