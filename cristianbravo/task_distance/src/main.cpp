#include <iostream>
#include <cmath>

struct Variable {
	double p1x;
	double p1y;
	double p2x;
	double p2y;
};

// Formula de distancia entre las parejas ordenadas
    double calculardistancia(const Variable& v) {
    double dx = v.p2x - v.p1x;
	double dy = v.p2y - v.p1y;
    return sqrt(dx * dx + dy * dy);
}
int main () {
	Variable v;

	// Verificar los valores ingresados para cada pareja ordenada
	std::cout <<"Ingresar el valor para p1x:";
	std::cin >> v.p1x;
	std::cout <<"Ingresar el valor para p1y:";
    std::cin >> v.p1y;
	std::cout <<"Ingresar el valor para p2x:";
    std::cin >> v.p2x;
    std::cout <<"Ingresar el valor para p2y:";
    std::cin >> v.p2y;

	// Calcular la distancia entre las parejas ordenadas
	double Distancia = calculardistancia(v);

	// Mostrar el valor de la distancia
	std::cout <<"La distancia entre los puntos es:" << Distancia << std::endl;

	return 0;
}
