#include <iostream>
#include <cmath>

// Indicación sobre el proceso a realizar, mediante una declaración
double ordenamiento_numeros(double, double, double); 

int main() {
    double a, b, c;
    std::cout << "Introduzca el primer número: " << std::endl;
    std::cin >> a;
    std::cout << "Introduzca el segundo número: " << std::endl;
    std::cin >> b;
    std::cout << "Introduzca el tercer número: " << std::endl;
    std::cin >> c;

    // Comparamos los valores ingresados
    std::cout << std::endl; 
    std::cout << "Analisis de los números ingresados:" << std::endl;

    if (a > b) {
        std::cout << a << " es mayor que " << b << std::endl;
    } else {
        std::cout << a << " es menor que " << b << std::endl;
    }


    if (a > c) {
        std::cout << a << " es mayor que " << c << std::endl;
    } else {
        std::cout << a << " es menor que " << c << std::endl;
    }


    if (b > c) {
        std::cout << b << " es mayor que " << c << std::endl;
    } else {
        std::cout << b << " es menor que " << c << std::endl;
    }

    // Llamada a la función de ordenamiento
    ordenamiento_numeros(a, b, c);

    return 0;
}

// Ordenamiento de los números ingresados
	double ordenamiento_numeros(double a, double b, double c) {
	std::cout << std::endl;
// Identificación de los valores
        if (a > b && b > c && a > c) {
        std::cout << "El orden de menor a mayor es: " << c <<", " << b << ", " << a << "." << std::endl;
        }

        else if (a > c && c > b && a > b) {
        std::cout << "El orden de menor a mayor es: " << b <<", " << c << ", " << a << "." << std::endl;
        }

	else if (b > c && c > a && b > a) {
        std::cout << "El orden de menor a mayor es: " << a <<", " << c << ", " << b << "." << std::endl;
        }
	
	else if (b > a && a > c && b > c) {
        std::cout << "El orden de menor a mayor es: " << c <<", " << a << ", " << b << "." << std::endl;
        }

	else if (c > a && a > b && c > b) {
        std::cout << "El orden de menor a mayor es: " << b <<", " << a << ", " << c << "." << std::endl;
        }

	else if (c > b && b > a && c > a) {
        std::cout << "El orden de menor a mayor es: " << a <<", " << b << ", " << c << "." << std::endl;
        }

	return 0;
}
